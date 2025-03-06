
#include "AHero.h"
#include "Enemy.h"
#include "AGridManager.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "AIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h" 
#include "GameFramework/SpringArmComponent.h"
#include "AGameCharacter.h"
#include "Camera/CameraComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "TimerManager.h"
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

    ActionPoints = 1;      // Default 1 Action per turn
    MovementPoints = 6;    // Default 6 Tiles of movement
    CurrentTurnState = ETurnState::Waiting; // Default state
	bIsEnemy = false; // Ensure the game knows this is a hero
}








void AHero::BeginPlay()
{
    Super::BeginPlay(); // Calls AGameCharacter::BeginPlay()

    // Cache the camera reference
    HeroCamera = FindComponentByClass<UCameraComponent>();

    // Get the player controller
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        // Set up input mode to allow both UI and game controls
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
        PC->bShowMouseCursor = true;

        // Apply Enhanced Input Mapping
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
        if (Subsystem && HeroMappingContext)
        {
            Subsystem->AddMappingContext(HeroMappingContext, 0);
        }

        EnableInput(PC);
    }

    // Set movement settings for player control
    bUseControllerRotationYaw = false;
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
}








void AHero::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    ResetCamera(); // Reset camera position

    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (LocalGridManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("Hero Selected"));
        LocalGridManager->SelectHero(this);
    }

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        PC->SetViewTargetWithBlend(this, 0.5f); // Smoothly transition camera
        bCameraFollowsHero = true;
        UE_LOG(LogTemp, Warning, TEXT("Camera reattached to hero"));
    }
}









void AHero::SelectAction(ETurnState Action)
{
    if (!bIsCombatActive) return;

    switch (Action)
    {
    case ETurnState::Moving:
        CurrentTurnState = ETurnState::Moving;
        UE_LOG(LogTemp, Warning, TEXT("%s is selecting movement."), *GetName());
        break;

    case ETurnState::Attacking:
        CurrentTurnState = ETurnState::Attacking;
        UE_LOG(LogTemp, Warning, TEXT("%s is preparing to attack."), *GetName());
        break;

    case ETurnState::Ended:
        UE_LOG(LogTemp, Warning, TEXT("%s has ended their turn."), *GetName());
        CurrentTurnState = ETurnState::Ended;
        GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
            {
                ATurnManager* TurnManager = Cast<ATurnManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATurnManager::StaticClass()));
                if (TurnManager)
                {
                    TurnManager->NextTurn();
                }
            });
        break;
    }
}







void AHero::CalculateClassSpecificStats()
{
    // Morality-Based Essence Pools (Only for Heroes)
    LightEssence = FMath::Clamp(Faith * 2.0f - DarkEssenceThreshold, 0.0f, 100.0f);
    DarkEssence = FMath::Clamp(Faith * 2.0f - LightEssenceThreshold, 0.0f, 100.0f);

    // Recalculate movement range dynamically
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






void AHero::OnAttributeModified(FString AttributeName, float Value)
{
    // Only heroes have morality-based stats, so we recalculate thresholds
    LightEssence = FMath::Clamp(Faith * 2.0f - DarkEssenceThreshold, 0.0f, 100.0f);
    DarkEssence = FMath::Clamp(Faith * 2.0f - LightEssenceThreshold, 0.0f, 100.0f);
}




void AHero::Attack(AGameCharacter* Target)
{
    if (!bIsCombatActive || ActionPoints <= 0 || !Target)
    {
        UE_LOG(LogTemp, Warning, TEXT("Attack Failed: No AP or invalid target."));
        return;
    }

    // Calculate damage (basic example - this can be extended later)
    float Damage = AttackPower - Target->PhysicalResistance;

    if (Damage > 0)
    {
        Target->Health -= Damage;
        UE_LOG(LogTemp, Warning, TEXT("%s attacks %s for %.2f damage!"), *GetName(), *Target->GetName(), Damage);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("%s's attack was ineffective against %s!"), *GetName(), *Target->GetName());
    }

    // Deduct Action Points
    ActionPoints--;

    // Check if Target is Dead
    if (Target->Health <= 0)
    {
        Target->Destroy();
        UE_LOG(LogTemp, Warning, TEXT("%s has been defeated!"), *Target->GetName());
    }

    // If no AP left, end turn
    if (ActionPoints == 0 && MovementPoints == 0)
    {
        EndTurn();
    }
}




void AHero::EndTurn()
{
    if (!bIsCombatActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("EndTurn Failed: Combat is not active."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("%s ends their turn!"), *GetName());

    // Reset Action & Movement Points
    ActionPoints = 0;
    MovementPoints = 0;
    CurrentTurnState = ETurnState::Ended;

    // Notify Turn Manager
    ATurnManager* TurnManager = Cast<ATurnManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATurnManager::StaticClass()));
    if (TurnManager)
    {
        TurnManager->NextTurn();
    }
}





void AHero::MoveToTile(AGridTile* TargetTile)
{
    if (!bIsCombatActive || !TargetTile || MovementPoints <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveToTile Failed: Invalid target or no MP left."));
        return;
    }

    // Calculate movement cost
    int32 DistanceX = FMath::Abs(TargetTile->GridX - CurrentTile->GridX);
    int32 DistanceY = FMath::Abs(TargetTile->GridY - CurrentTile->GridY);
    int32 TilesToMove = DistanceX + DistanceY;

    if (TilesToMove > MovementPoints)
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveToTile Failed: Not enough MP to move."));
        return;
    }

    // Deduct Movement Points
    MovementPoints -= TilesToMove;

    // Free old tile
    if (CurrentTile)
    {
        CurrentTile->OccupyingUnit = nullptr;
    }

    // Move and assign to the new tile
    SetActorLocation(TargetTile->GetActorLocation());
    CurrentTile = TargetTile;
    TargetTile->OccupyingUnit = this;

    UE_LOG(LogTemp, Warning, TEXT("Hero moved %d tiles. Remaining MP: %d"), TilesToMove, MovementPoints);

    // If out of movement, switch turn state
    if (MovementPoints == 0)
    {
        CurrentTurnState = ETurnState::Waiting;
    }
}




void AHero::CalculateMovementRange(AGridTile* Tile)
{
    if (!Tile) return;

    // Start with the base calculation from AGameCharacter
    Super::CalculateMovementRange(Tile);

    // Apply armor penalty (heavy armor slows movement)
    float ArmorMovePenalty = EquippedArmorWeight * 0.2f;
    MovementRange = FMath::Max(1, MovementRange - FMath::RoundToInt(ArmorMovePenalty));

    UE_LOG(LogTemp, Warning, TEXT("Hero Movement Range (after armor penalty): %d"), MovementRange);
}






int32 AHero::GetMoveRange() const
{
    int32 BaseRange = Super::GetMoveRange();

    // Heroes might get extra movement based on gear, buffs, or skills
    int32 BonusFromArmor = (EquippedArmorWeight > 0) ? -1 : 0; // Heavy armor slows heroes
    return FMath::Max(1, BaseRange + BonusFromArmor);
}



void AHero::PerformAction()
{
    // Placeholder for future player-controlled hero actions
    UE_LOG(LogTemp, Warning, TEXT("%s is awaiting player input!"), *GetName());
}








void AHero::SetCurrentTile(AGridTile* NewTile)
{
    if (NewTile)
    {
        CurrentTile = NewTile;
        SetActorLocation(NewTile->GetActorLocation());
    }
}







void AHero::MoveFreely(FVector Destination, bool bIsMouseClick)
{
    //  Prevent movement if combat is active & it's not the hero's turn
    if (bIsCombatActive && (CurrentTurnState != ETurnState::Moving || MovementPoints <= 0))
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveFreely: Cannot move. Either it's not the hero's turn or MP is 0."));
        return;
    }

    AController* LocalController = GetController();
    if (!LocalController)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveFreely: No valid Controller found!"));
        return;
    }

    //  Handle mouse click movement
    if (bIsMouseClick)
    {
        FHitResult HitResult;
        APlayerController* PC = Cast<APlayerController>(LocalController);
        if (PC && PC->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
        {
            Destination = HitResult.Location;
            UE_LOG(LogTemp, Warning, TEXT("Clicked Location: %s"), *Destination.ToString());
        }
    }

    //  Use AI Navigation to move
    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveFreely: No valid Navigation System found!"));
        return;
    }

    LocalController->StopMovement();
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, Destination);

    //  Deduct Movement Points (MP) if in combat
    if (bIsCombatActive)
    {
        MovementPoints--; // Deduct 1 MP per movement
        UE_LOG(LogTemp, Warning, TEXT("Hero moved freely to %s. Remaining MP: %d"), *Destination.ToString(), MovementPoints);

        //  If MP = 0, prevent further movement
        if (MovementPoints == 0)
        {
            CurrentTurnState = ETurnState::Waiting;
        }
    }

    //  Check for enemies after moving
    CheckForEnemiesNearby();
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

        // Move using the new MoveFreely function
        MoveFreely(ClickLocation, true);
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






void AHero::CheckForEnemiesNearby()
{
    if (!GridManager) return;

    UE_LOG(LogTemp, Warning, TEXT("Checking for nearby enemies..."));

    for (AGridTile* Tile : GridManager->GridTiles)
    {
        // Check if the tile is occupied AND if the occupying unit is an AEnemy
        if (Tile && Tile->OccupyingUnit && Cast<AEnemy>(Tile->OccupyingUnit))
        {
            float Distance = FVector::Dist(this->GetActorLocation(), Tile->OccupyingUnit->GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Enemy detected at distance: %f"), Distance);

            if (Distance <= 600.f) // Adjust detection range as needed
            {
                UE_LOG(LogTemp, Warning, TEXT("Enemy in range! Starting combat..."));
                GridManager->bIsCombatActive = true;
                GridManager->StartCombat();
                return;
            }
        }
    }
}

