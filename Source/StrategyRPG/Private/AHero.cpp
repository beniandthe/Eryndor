#include "AHero.h"
#include "AGridManager.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "AIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h" 
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"



AHero::AHero()
{
    PrimaryActorTick.bCanEverTick = true;

    // Set default zoom level
    ZoomLevel = 1400.0f;

    CameraRotationSpeed = 1.5f; // Adjust speed as needed




    // Define min/max zoom distance (adjust as needed)
    MinZoom = 300.0f;  // Closest allowed zoom
    MaxZoom = 1800.0f; // Farthest allowed zoom

    CameraMoveSpeed = 500.0f; // Adjust speed as needed


    // Create Camera Boom
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);  // Attach to Root (Character)
    CameraBoom->TargetArmLength = 1400.0f;  // Distance between camera and player
    CameraBoom->bUsePawnControlRotation = true;  // Rotate the camera with the player

    // Create Follow Camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom);  // Attach Camera to the Boom
    FollowCamera->bUsePawnControlRotation = false;  // Camera does not rotate with character

 

    bIsRotatingCamera = false;


    // Disable automatic character rotation (Handled manually)
    bUseControllerRotationYaw = false;
    GetCharacterMovement()->bOrientRotationToMovement = true;

    // Ensure hero has proper collision
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetCapsuleComponent()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
    GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Block);

    // Ensure movement works properly
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;

    // Default Attribute Values
    Strength = 10;
    Dexterity = 10;
    Intelligence = 10;
    Endurance = 10;
    Charisma = 10;
    Perception = 10;
    Luck = 10;
    Faith = 10;

    // Derived Stats Initialization
    CalculateDerivedStats();

	MovementRange; // Movement range based on Stamina
    EquippedArmorWeight = 0.0f;
}








void AHero::BeginPlay()
{
    Super::BeginPlay();

    // Cache the camera reference
    HeroCamera = FindComponentByClass<UCameraComponent>();

    CalculateMovementRange(CurrentTile);


    // Ensure the hero gets control from the correct Player Controller
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {

      // Ensure keyboard input is enabled
      FInputModeGameAndUI InputMode;
      InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
      InputMode.SetHideCursorDuringCapture(false);
      PC->SetInputMode(InputMode);
      PC->bShowMouseCursor = true; // Ensure the mouse is visible

      UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
      if (Subsystem && HeroMappingContext)
            {
              Subsystem->AddMappingContext(HeroMappingContext, 0);
            }
      
      EnableInput(PC);
    }


    bUseControllerRotationYaw = false;

    // Allow character to orient based on movement direction
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); // Adjust turn speed

    // Find the Grid Manager
    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    GridManager = LocalGridManager;

    CalculateDerivedStats();
}









void AHero::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    ResetCamera(); // Reset camera position

    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));

    if (LocalGridManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("Hero Selected"));
        GridManager->SelectHero(this);
    }

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->SetViewTargetWithBlend(this, 0.5f); // Smoothly transition camera
        bCameraFollowsHero = true;
        UE_LOG(LogTemp, Warning, TEXT("Camera reattached to hero"));
    }
}









int32 AHero::GetMoveRange() const
{
    // Example logic to determine move range
    return Dexterity / 2; // Example: Move range based on Dexterity
}









void AHero::MoveToTile(AGridTile* TargetTile)
{
    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (!LocalGridManager || !LocalGridManager->bIsCombatActive) return; // Only allow movement in combat

    if (!TargetTile) return;

    AController* LocalController = GetController();
    if (!LocalController)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToTile: No valid Controller found!"));
        return;
    }

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToTile: No valid Navigation System found!"));
        return;
    }

    LocalController->StopMovement();
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, TargetTile->GetActorLocation());

    CurrentTile = TargetTile;
    UE_LOG(LogTemp, Warning, TEXT("Hero moved to tile at %s"), *TargetTile->GetActorLocation().ToString());
}










void AHero::CalculateDerivedStats()
{
    // Health, Stamina, and Essence Scaling
    Health = Endurance * 12.0f;      // More endurance = more HP
    Stamina = Endurance * 6.0f;      // More endurance = more stamina
    Essence = Intelligence * 8.0f;   // More intelligence = more essence

    // Leadership & Tactical Abilities
    Leadership = Charisma * 2;
    Diplomacy = Charisma + Perception;
    Tactics = Intelligence + Perception;
    Willpower = Intelligence + Endurance;
    Stealth = Dexterity + Perception;

    // Initiative Calculation
    Initiative = Dexterity * 2.0f;
    Initiative += Initiative * (Tactics * 0.02f); // Bonus from Tactics

    // Evasion & Critical Hit Calculations
    Evasion = Dexterity * 1.5f + Luck * 0.5f;
    CriticalChance = Luck * 1.5f + Perception * 0.5f;
    CriticalDamage = 150.0f + (Luck * 1.5f); // Default crits do 150% damage

    // Resistances
    MagicResistance = Intelligence * 1.2f + Faith * 0.8f;
    PhysicalResistance = Endurance * 1.5f;

    // Offensive Stats
    AttackPower = Strength * 2.0f;
    SpellPower = Intelligence * 2.5f;

    // Morality-Based Essence Pools
    LightEssence = FMath::Clamp(Faith * 2.0f - DarkEssenceThreshold, 0.0f, 100.0f);
    DarkEssence = FMath::Clamp(Faith * 2.0f - LightEssenceThreshold, 0.0f, 100.0f);

    // Base stamina is derived from endurance and dexterity
    float BaseStamina = (Endurance * 6.0f) + (Dexterity * 2.0f);

    // Apply armor weight penalty (Heavier armor reduces stamina)
    float ArmorPenalty = EquippedArmorWeight * 0.5f;

    // Final Stamina Calculation
    Stamina = FMath::Max(5.0f, BaseStamina - ArmorPenalty); // Min stamina is 5

    // Update movement range dynamically
    CalculateMovementRange(CurrentTile);
}








void AHero::ModifyAttribute(FString AttributeName, int32 Value)
{
    if (AttributeName == "Strength") Strength += Value;
    else if (AttributeName == "Dexterity") Dexterity += Value;
    else if (AttributeName == "Intelligence") Intelligence += Value;
    else if (AttributeName == "Endurance") Endurance += Value;
    else if (AttributeName == "Charisma") Charisma += Value;
    else if (AttributeName == "Perception") Perception += Value;
    else if (AttributeName == "Luck") Luck += Value;
    else if (AttributeName == "Faith") Faith += Value;

    CalculateDerivedStats();
}








void AHero::CalculateMovementRange(AGridTile* Tile)
{
    // Base movement range = Stamina / 3
    float BaseMoveRange = Stamina / 3.0f;

    // Apply armor penalty (heavy armor slows movement)
    float ArmorMovePenalty = EquippedArmorWeight * 0.2f;
    BaseMoveRange -= ArmorMovePenalty;

    // Adjust movement range based on terrain difficulty
    float TerrainModifier = 1.0f; // Default (Normal terrain)

    if (Tile)
    {
        if (Tile->TileType == EGridTileType::Water) { TerrainModifier = 0.5f; }   // Water halves movement
        else if (Tile->TileType == EGridTileType::Swamp) { TerrainModifier = 0.7f; } // Swamp reduces movement by 30%
        else if (Tile->TileType == EGridTileType::Snow) { TerrainModifier = 0.6f; } // Snow reduces movement by 40%
		else if (Tile->TileType == EGridTileType::Mountain) { TerrainModifier = 0.4f; } // Mountains reduce movement by 60%
		else if (Tile->TileType == EGridTileType::Forest) { TerrainModifier = 0.8f; } // Forests reduce movement by 20%
		else if (Tile->TileType == EGridTileType::Desert) { TerrainModifier = 0.9f; } // Deserts reduce movement by 10%
    }

    // Apply terrain modifier
    BaseMoveRange *= TerrainModifier;

    // Ensure minimum movement range is at least 1
    MovementRange = FMath::Max(1, FMath::RoundToInt(BaseMoveRange));
    UE_LOG(LogTemp, Warning, TEXT("Hero Movement Range: %d"), MovementRange);
}








void AHero::SetCurrentTile(AGridTile* NewTile)
{
    if (NewTile)
    {
        CurrentTile = NewTile;
        SetActorLocation(NewTile->GetActorLocation());
    }
}







void AHero::MoveFreely(FVector Destination)
{
    AController* LocalController = GetController();
    if (!LocalController)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveFreely: No valid Controller found!"));
        return;
    }

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveFreely: No valid Navigation System found!"));
        return;
    }

    LocalController->StopMovement();
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, Destination);

    UE_LOG(LogTemp, Warning, TEXT("Hero moving freely to %s"), *Destination.ToString());
}







void AHero::MoveHeroFree(FVector MoveDirection)
{
    if (bIsCombatActive) return; // Prevent movement if in combat

    // Normalize movement input
    FVector Direction = MoveDirection.GetSafeNormal();

    // Apply movement input
    AddMovementInput(Direction, 1.0f);
}






void AHero::MoveToMouseClick()
{
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC || bIsCombatActive) return; // Don't allow movement in combat

    // Get the clicked location
    FHitResult HitResult;
    if (PC->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
    {
        FVector ClickLocation = HitResult.Location;

        UE_LOG(LogTemp, Warning, TEXT("Clicked Location: %s"), *ClickLocation.ToString());

        // Use AI Navigation to move the hero
        MoveToLocation(ClickLocation);
    }
}







void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EnhancedInput->BindAction(MoveClickAction, ETriggerEvent::Triggered, this, &AHero::MoveToMouseClick);

        // Bind Camera Zoom (Mouse Scroll)
        EnhancedInput->BindAction(IA_CameraZoom, ETriggerEvent::Triggered, this, &AHero::CameraZoom);

        // Bind Camera Rotate (Hold Middle Mouse + Move Mouse)
        EnhancedInput->BindAction(IA_CameraRotate, ETriggerEvent::Triggered, this, &AHero::CameraRotate);

        // Bind Camera Movement (WASD)
        EnhancedInput->BindAction(IA_CameraMove, ETriggerEvent::Triggered, this, &AHero::MoveCamera);
    }

   
}







void AHero::MoveToLocation(FVector TargetLocation)
{
    AController* LocalController = GetController();
    if (!LocalController) return;

    UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavSystem) return;

    // Move the hero using pathfinding
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, TargetLocation);

    // Rotate to face movement direction
    FVector MoveDirection = (TargetLocation - GetActorLocation()).GetSafeNormal();
    if (!MoveDirection.IsNearlyZero())
    {
        FRotator LookAtRotation = FRotationMatrix::MakeFromX(MoveDirection).Rotator();
        SetActorRotation(FMath::RInterpTo(GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 10.0f));
    }
}







void AHero::CameraZoom(const FInputActionValue& Value)
{
    float ZoomInput = Value.Get<float>(); // Get input (-1 for zoom out, +1 for zoom in)

    if (ZoomInput != 0.0f && CameraBoom)
    {
        // Adjust the zoom level
        float NewZoom = FMath::Clamp(CameraBoom->TargetArmLength - (ZoomInput * 100.0f), MinZoom, MaxZoom);

        // Smooth interpolation for zoom transition
        CameraBoom->TargetArmLength = FMath::FInterpTo(CameraBoom->TargetArmLength, NewZoom, GetWorld()->GetDeltaSeconds(), 15.0f);

        //  Prevent horizontal tilting: Adjust Camera Angle based on zoom
        float NewPitch = FMath::GetMappedRangeValueClamped(
            FVector2D(MinZoom, MaxZoom),   // Range of Zoom values
            FVector2D(-10.0f, -45.0f),     // Range of desired pitch angles
            CameraBoom->TargetArmLength    // Current Zoom level
        );

        //  Ensure the angle is smoothly interpolated
        FRotator NewRotation = CameraBoom->GetRelativeRotation();
        NewRotation.Pitch = FMath::FInterpTo(NewRotation.Pitch, NewPitch, GetWorld()->GetDeltaSeconds(), 15.0f);
        NewRotation.Roll = 0.0f;  //  Ensure roll is always 0 (prevents horizontal tilting)
        NewRotation.Yaw = 0.0f;   //  Ensure no unwanted yaw rotation

        // Apply the updated rotation
        CameraBoom->SetRelativeRotation(NewRotation);

        //  Adjust Over-the-Shoulder Offset (brings camera closer when zooming in)
        FVector NewTargetOffset = FMath::Lerp(
            FVector(0.0f, 0.0f, 60.0f),  // Close-Up Offset (shoulder view)
            FVector(0.0f, 0.0f, 150.0f), // Farther Offset (normal top-down view)
            (CameraBoom->TargetArmLength - MinZoom) / (MaxZoom - MinZoom) // Normalize value between 0-1
        );

        // Smoothly interpolate camera offset to prevent instant snapping
        CameraBoom->TargetOffset = FMath::VInterpTo(CameraBoom->TargetOffset, NewTargetOffset, GetWorld()->GetDeltaSeconds(), 15.0f);

        //  Log for Debugging
        UE_LOG(LogTemp, Warning, TEXT("Zoom: %f | Pitch: %f | Offset: %s"), CameraBoom->TargetArmLength, NewPitch, *NewTargetOffset.ToString());
    }
}








void AHero::MoveCamera(const FInputActionValue& Value)
{
    FVector2D Input = Value.Get<FVector2D>(); // Get movement input
    FVector MoveDirection = FVector(Input.Y, Input.X, 0.0f); // Convert input

    if (APlayerController* LocalController = Cast<APlayerController>(GetController()))
    {
        if (UCameraComponent* Camera = FindComponentByClass<UCameraComponent>())
        {
            FVector NewLocation = Camera->GetComponentLocation() + (MoveDirection * CameraMoveSpeed * GetWorld()->GetDeltaSeconds());
            Camera->SetWorldLocation(NewLocation);
        }
    }
}









void AHero::CameraRotate(const FInputActionValue& Value)
{
    // Check if the middle mouse button is held down
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC || !PC->IsInputKeyDown(EKeys::MiddleMouseButton)) return;

    FVector2D Input = Value.Get<FVector2D>(); // Get input from mouse movement

    // Ensure a valid camera before proceeding
    if (!HeroCamera) return;

    // Rotate only along the Yaw axis (left/right)
    FRotator NewRotation = HeroCamera->GetComponentRotation();
    NewRotation.Yaw += Input.X * CameraRotationSpeed;

    // Apply the new rotation
    HeroCamera->SetWorldRotation(NewRotation);
}










void AHero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsRotatingCamera)
    {
        FVector2D CurrentMousePosition;
        GetWorld()->GetFirstPlayerController()->GetMousePosition(CurrentMousePosition.X, CurrentMousePosition.Y);

        float DeltaX = CurrentMousePosition.X - LastMousePosition.X;
        float DeltaY = CurrentMousePosition.Y - LastMousePosition.Y;

        APlayerController* PC = GetWorld()->GetFirstPlayerController();
        if (PC && PC->GetPawn())
        {
            PC->GetPawn()->AddActorLocalRotation(FRotator(0.0f, DeltaX * 0.2f, 0.0f));
        }

        LastMousePosition = CurrentMousePosition;
    }
}







void AHero::ResetCamera()
{
    if (HeroCamera && CameraBoom)
    {
        // Reset camera boom length (Zoom Level)
        CameraBoom->TargetArmLength = ZoomLevel;  // Ensure it resets to a valid zoom level

        // Reset camera position above the hero
        FVector TargetLocation = GetActorLocation() + FVector(0.0f, 0.0f, 400.0f); // Adjust height if needed
        FRotator TargetRotation = FRotator(-45.0f, GetActorRotation().Yaw, 0.0f);  // Maintain current yaw

        // Smoothly move the camera back
        CameraBoom->SetWorldLocation(FMath::VInterpTo(CameraBoom->GetComponentLocation(), TargetLocation, GetWorld()->GetDeltaSeconds(), 5.0f));
        CameraBoom->SetWorldRotation(FMath::RInterpTo(CameraBoom->GetComponentRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f));

        // Re-enable camera follow
        bCameraFollowsHero = true;
        bIsCameraDetached = false;

        UE_LOG(LogTemp, Warning, TEXT("Camera reset to hero position"));
    }
}










void AHero::SetEquippedArmorWeight(float NewWeight)
{
    EquippedArmorWeight = NewWeight;
    CalculateMovementRange(CurrentTile); // Recalculate movement range with new weight
}

