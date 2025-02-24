#include "AHero.h"
#include "AGridManager.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"


AHero::AHero()
{
    PrimaryActorTick.bCanEverTick = true;

    // Set up the input bindings for the character's movement
    PlayerController = Cast<APlayerController>(GetController());

    // Ensure the mesh allows for interaction
    GetMesh()->SetCollisionObjectType(ECC_Pawn);
    GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

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
}

// Called every frame
void AHero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // If we have a valid player controller, check for mouse input
    if (PlayerController && PlayerController->IsInputKeyDown(EKeys::LeftMouseButton))
    {
        HandleClickMovement();
    }
}

void AHero::BeginPlay()
{
    Super::BeginPlay();

    // Set up the input bindings for the character's movement
    PlayerController = Cast<APlayerController>(GetController());
    CalculateDerivedStats();
}

// Function to handle mouse click movement
void AHero::HandleClickMovement()
{
    FVector MouseLocation, MouseDirection;
    if (PlayerController->DeprojectMousePositionToWorld(MouseLocation, MouseDirection))
    {
        FHitResult HitResult;
        FVector Start = MouseLocation;
        FVector End = MouseLocation + (MouseDirection * 10000.f);

        FCollisionQueryParams CollisionParams;
        CollisionParams.AddIgnoredActor(this);
        bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams);

        if (bHit)
        {
            MoveToLocation(HitResult.ImpactPoint);
        }
    }
}

// Function to move the character to the clicked location
void AHero::MoveToLocation(const FVector& Destination)
{
    if (GetController())
    {
        // Get the current location of the character
        FVector CurrentLocation = GetActorLocation();

        // Calculate the direction towards the destination
        FVector Direction = (Destination - CurrentLocation).GetSafeNormal();

        // Get the Character's Movement Component
        UCharacterMovementComponent* MovementComponent = GetCharacterMovement();

        if (MovementComponent)
        {
            // Adjust movement speed (you can set this based on your gameplay needs)
            const float MoveSpeed = 600.f;  // Change as necessary

            // Apply velocity in the direction of the destination
            MovementComponent->Velocity = Direction * MoveSpeed;  // Velocity is the speed in the direction

            // Optional: Ensure the character is facing the movement direction
            FRotator NewRotation = Direction.Rotation();
            SetActorRotation(NewRotation);
        }
    }
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

void AHero::MoveToTile(AGridTile* TargetTile)
{
    if (!TargetTile) return;

    CurrentTile = TargetTile;
    FVector MoveLocation = TargetTile->GetActorLocation();
    SetActorLocation(MoveLocation);
}

void AHero::SetCurrentTile(AGridTile* NewTile)
{
    if (NewTile)
    {
        CurrentTile = NewTile;
        SetActorLocation(NewTile->GetActorLocation());
    }
}

void AHero::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    UE_LOG(LogTemp, Warning, TEXT("Hero Clicked!"));

    // Get reference to AGridManager and select this hero
    if (AGridManager* GridManager = Cast<AGridManager>(GetWorld()->GetAuthGameMode()))
    {
        GridManager->SelectHero(this);
    }
}
