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
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"



AHero::AHero()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create Camera Boom
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);  // Attach to Root (Character)
    CameraBoom->TargetArmLength = 1400.0f;  // Distance between camera and player
    CameraBoom->bUsePawnControlRotation = true;  // Rotate the camera with the player

    // Create Follow Camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom);  // Attach Camera to the Boom
    FollowCamera->bUsePawnControlRotation = false;  // Camera does not rotate with character

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

    CalculateMovementRange(CurrentTile);


    // Ensure the hero gets control from the correct Player Controller
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (PC)
    {
        PC->Possess(this); // Give control to this pawn
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

    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));


    if (LocalGridManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("Hero Selected"));
        GridManager->SelectHero(this);
    }
}

int32 AHero::GetMoveRange() const
{
    // Example logic to determine move range
    return Dexterity / 2; // Example: Move range based on Dexterity
}


void AHero::MoveToTile(AGridTile* TargetTile)
{
    if (!TargetTile) return;

    AController* LocalController = GetController();
    if (!LocalController)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToTile: No valid Controller found!"));
        return;
    }

    UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!NavSystem)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveToTile: No valid Navigation System found!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Hero Position Before Move: %s"), *GetActorLocation().ToString());
	UE_LOG(LogTemp, Warning, TEXT("Moving to Tile: %s"), *TargetTile->GetActorLocation().ToString());

    // Ensure the AI or player-controlled unit moves to the location using pathfinding
    LocalController->StopMovement();
    UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, TargetTile->GetActorLocation());

    // Update the Hero's current tile reference
    CurrentTile = TargetTile;
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

void AHero::SetEquippedArmorWeight(float NewWeight)
{
    EquippedArmorWeight = NewWeight;
    CalculateMovementRange(CurrentTile); // Recalculate movement range with new weight
}


