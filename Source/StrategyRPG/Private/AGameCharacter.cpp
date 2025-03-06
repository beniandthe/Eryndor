#include "AGameCharacter.h"
#include "GridTile.h"
#include "AGridManager.h"
#include "AHero.h"
#include "Enemy.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "GameFramework/Character.h" 
#include "AIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "TurnManager.h"





/** Default constructor */
AGameCharacter::AGameCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    // Default Stats
    ActionPoints = 1;      // Default 1 Action per turn
    MovementPoints = 6;    // Default 6 Tiles of movement
    CurrentTurnState = ETurnState::Waiting; // Default state

    // Set default values for grid-based properties
    CurrentTile = nullptr;
    GridManager = nullptr;

    // Default AI settings (for enemies)
    AggroRange = 400.0f;
    bIsAggressive = true;
    
}





/** Called when the game starts or when spawned */
void AGameCharacter::BeginPlay()
{
    Super::BeginPlay();

    // Assign the GridManager
    GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));

    // Ensure the character is placed on a valid tile
    if (GridManager)
    {
        CurrentTile = GridManager->FindTileAtLocation(GetActorLocation());
        if (CurrentTile)
        {
            CurrentTile->bIsOccupied = true;
            CurrentTile->OccupyingUnit = this;
            UE_LOG(LogTemp, Warning, TEXT("%s assigned to tile (%d, %d)."), *GetName(), CurrentTile->GridX, CurrentTile->GridY);
        }
    }

    // Initialize character stats
    CalculateDerivedStats();
}






/** Called every frame */
void AGameCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}







/** Sets the character on a new tile */
void AGameCharacter::SetCurrentTile(AGridTile* NewTile)
{
    if (!NewTile)
    {
        UE_LOG(LogTemp, Warning, TEXT("SetCurrentTile: NewTile is NULL!"));
        return;
    }

    // Free the old tile
    if (CurrentTile)
    {
        CurrentTile->bIsOccupied = false;
        CurrentTile->OccupyingUnit = nullptr;
    }

    // Assign new tile
    CurrentTile = NewTile;
    NewTile->bIsOccupied = true;
    NewTile->OccupyingUnit = this;

    // Move to the tile's position
    SetActorLocation(NewTile->GetActorLocation());

    UE_LOG(LogTemp, Warning, TEXT("%s set to tile (%d, %d)"), *GetName(), NewTile->GridX, NewTile->GridY);
}





/** Handles movement to a grid tile (Overridable for AI and Player) */
void AGameCharacter::MoveToTile(AGridTile* TargetTile)
{
    if (!TargetTile || MovementPoints <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveToTile: Invalid movement for %s"), *GetName());
        return;
    }

    // Deduct movement points based on distance
    int32 DistanceX = FMath::Abs(TargetTile->GridX - CurrentTile->GridX);
    int32 DistanceY = FMath::Abs(TargetTile->GridY - CurrentTile->GridY);
    int32 TilesToMove = DistanceX + DistanceY;

    if (TilesToMove > MovementPoints)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s doesn't have enough MP to move"), *GetName());
        return;
    }

    MovementPoints -= TilesToMove;

    // Assign new tile
    SetCurrentTile(TargetTile);

    // Handle movement for AI and Player separately
    if (Cast<AHero>(this)) // Player Movement
    {
        UE_LOG(LogTemp, Warning, TEXT("Player %s moving to tile (%d, %d)"), *GetName(), TargetTile->GridX, TargetTile->GridY);
        SetActorLocation(TargetTile->GetActorLocation());
    }
    else if (Cast<AEnemy>(this)) // AI Movement
    {
        UE_LOG(LogTemp, Warning, TEXT("AI %s moving to tile (%d, %d)"), *GetName(), TargetTile->GridX, TargetTile->GridY);

        AAIController* AIController = Cast<AAIController>(GetController());
        if (AIController)
        {
            UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, TargetTile->GetActorLocation());
        }
        else
        {
            SetActorLocation(TargetTile->GetActorLocation());
        }
    }

    // End movement if out of MP
    if (MovementPoints == 0)
    {
        CurrentTurnState = ETurnState::Waiting;
    }
}







void AGameCharacter::CalculateDerivedStats()
{
    // Health, Stamina, and Essence Scaling (Applies to ALL characters)
    Health = Endurance * 12.0f;
    Stamina = Endurance * 6.0f;
    Essence = Intelligence * 8.0f;

    // Leadership & Tactical Abilities (Generalized for all units)
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

    // Adjust Armor Class based on Dexterity and Equipment
    ArmorClass = 10 + (Dexterity / 2); // 

    // Adjust Speed based on Agility and Equipment
    Speed = 300.0f + (Dexterity * 2.0f); // 

    // Base stamina is derived from endurance and dexterity
    float BaseStamina = (Endurance * 6.0f) + (Dexterity * 2.0f);

    // Apply armor weight penalty (Heavier armor reduces stamina)
    float ArmorPenalty = EquippedArmorWeight * 0.5f;

    // Final Stamina Calculation
    Stamina = FMath::Max(5.0f, BaseStamina - ArmorPenalty); // Min stamina is 5

    // Call subclass-specific overrides
    CalculateClassSpecificStats();
}






void AGameCharacter::ModifyAttribute(FString AttributeName, int32 Value)
{
    if (AttributeName == "Strength") Strength += Value;
    else if (AttributeName == "Dexterity") Dexterity += Value;
    else if (AttributeName == "Intelligence") Intelligence += Value;
    else if (AttributeName == "Endurance") Endurance += Value;
    else if (AttributeName == "Charisma") Charisma += Value;
    else if (AttributeName == "Perception") Perception += Value;
    else if (AttributeName == "Luck") Luck += Value;
    else if (AttributeName == "Faith") Faith += Value;
    else return; // If the attribute name is invalid, do nothing.

    // Call subclass-specific stat adjustments
    OnAttributeModified(AttributeName, Value);

    // Recalculate derived stats after any change
    CalculateDerivedStats();
}






int32 AGameCharacter::GetMoveRange() const
{
    return FMath::Max(1, Dexterity / 2); // Ensures minimum movement range is 1
}





void AGameCharacter::TakeTurn()
{
    UE_LOG(LogTemp, Warning, TEXT("%s is taking its turn!"), *GetName());

    if (ActionPoints > 0)
    {
        PerformAction();
    }

    EndTurn();
}









/** Handles attack logic */
void AGameCharacter::Attack(AGameCharacter* Target)
{
    if (!Target || ActionPoints <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s cannot attack! Invalid target or no AP."), *GetName());
        return;
    }

    // Placeholder attack logic
    UE_LOG(LogTemp, Warning, TEXT("%s attacks %s!"), *GetName(), *Target->GetName());

    ActionPoints--;

    if (ActionPoints == 0 && MovementPoints == 0)
    {
        CurrentTurnState = ETurnState::Ended;
    }
}







/** Checks for nearby enemies (for AI or Player detection) */
void AGameCharacter::CheckForEnemiesNearby()
{
    if (!GridManager) return;

    UE_LOG(LogTemp, Warning, TEXT("Checking for nearby enemies..."));

    for (AGridTile* Tile : GridManager->GridTiles)
    {
        AGameCharacter* Unit = Cast<AGameCharacter>(Tile->OccupyingUnit);
        if (Unit && Unit->bIsEnemy != bIsEnemy) // Only detect opposite factions
        {
            float Distance = FVector::Dist(GetActorLocation(), Unit->GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Enemy detected at distance: %f"), Distance);

            if (Distance <= 600.f) // Adjust detection range
            {
                UE_LOG(LogTemp, Warning, TEXT("Enemy in range! Starting combat..."));
                GridManager->StartCombat();
                return;
            }
        }
    }
}







void AGameCharacter::EndTurn()
{
    UE_LOG(LogTemp, Warning, TEXT("%s ends their turn!"), *GetName());

    ATurnManager* TurnManager = Cast<ATurnManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATurnManager::StaticClass()));
    if (TurnManager)
    {
        TurnManager->NextTurn();
    }
}





void AGameCharacter::SetEquippedArmorWeight(float NewWeight)
{
    EquippedArmorWeight = NewWeight;

    // Only recalculate movement range if the character is affected by armor weight
    if (bUsesArmorWeight)
    {
        CalculateMovementRange(CurrentTile);
    }
}



void AGameCharacter::SetPositionOnGrid(AGridTile* NewTile)
{
    if (NewTile)
    {
        if (OccupiedTile)
        {
            OccupiedTile->bIsOccupied = false; // Free the old tile
        }

        OccupiedTile = NewTile;
        NewTile->bIsOccupied = true;

        SetActorLocation(NewTile->GetActorLocation() + FVector(0.f, 0.f, 50.f)); // Slight offset for visibility
    }
}







void AGameCharacter::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    // Get Grid Manager
    AGridManager* LocalGridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (LocalGridManager)
    {
        LocalGridManager->SelectUnit(this); // Default selection behavior
        UE_LOG(LogTemp, Warning, TEXT("%s selected."), *GetName());
    }
}






void AGameCharacter::CalculateMovementRange(AGridTile* Tile)
{
    if (!Tile) return;

    // Base movement range = Stamina / 3
    float BaseMoveRange = Stamina / 3.0f;

    // Adjust movement range based on terrain difficulty
    float TerrainModifier = 1.0f; // Default (Normal terrain)

    switch (Tile->TileType)
    {
    case EGridTileType::Water: TerrainModifier = 0.5f; break;   // Water halves movement
    case EGridTileType::Swamp: TerrainModifier = 0.7f; break;   // Swamp reduces movement by 30%
    case EGridTileType::Snow: TerrainModifier = 0.6f; break;    // Snow reduces movement by 40%
    case EGridTileType::Mountain: TerrainModifier = 0.4f; break; // Mountains reduce movement by 60%
    case EGridTileType::Forest: TerrainModifier = 0.8f; break;  // Forests reduce movement by 20%
    case EGridTileType::Desert: TerrainModifier = 0.9f; break;  // Deserts reduce movement by 10%
    default: break;
    }

    // Apply terrain modifier
    BaseMoveRange *= TerrainModifier;

    // Ensure minimum movement range is at least 1
    MovementRange = FMath::Max(1, FMath::RoundToInt(BaseMoveRange));

    UE_LOG(LogTemp, Warning, TEXT("%s Movement Range: %d"), *GetName(), MovementRange);
}








UTexture2D* AGameCharacter::GetPortraitTexture() const
{
    return UnitPortraitTexture;
}





// Default action execution for all game characters
void AGameCharacter::PerformAction()
{
    UE_LOG(LogTemp, Warning, TEXT("%s is performing a base action!"), *GetName());

    // Generic action behavior (can be overridden)
}



// Base stat calculation, designed to be overridden by subclasses
void AGameCharacter::CalculateClassSpecificStats()
{
    UE_LOG(LogTemp, Warning, TEXT("%s is calculating class-specific stats!"), *GetName());

    // Default stats logic for generic characters
}


// Handles attribute modifications and triggers necessary updates
void AGameCharacter::OnAttributeModified(FString AttributeName, float Value)
{
    UE_LOG(LogTemp, Warning, TEXT("%s has modified attribute: %s by %f"), *GetName(), *AttributeName, Value);

    // Default implementation (subclasses can extend)
}
