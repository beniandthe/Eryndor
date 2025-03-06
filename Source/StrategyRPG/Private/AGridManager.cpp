#include "AGridManager.h"
#include "GridTile.h"
#include "AGameCharacter.h"
#include "AHero.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


AGridManager::AGridManager()
{
    PrimaryActorTick.bCanEverTick = false;
	bIsCombatActive = false;
}







void AGridManager::BeginPlay()
{
    Super::BeginPlay();
    GenerateGrid();
    // TEMPORARY: Spawn a test enemy at game start
    SpawnEnemyUnit(EEnemyType::GoblinMelee);

}







/** Handles selecting a hero */
void AGridManager::SelectHero(AHero* Hero)
{
    if (Hero)
    {
        SelectedHero = Hero;
        HighlightValidMoves(Hero);
        UE_LOG(LogTemp, Warning, TEXT("Hero Selected: %s"), *Hero->GetName());

    }
}





AGridTile* AGridManager::FindTileAtLocation(FVector Location)
{
    for (AGridTile* Tile : GridTiles) // Loop through all grid tiles
    {
        if (Tile && FVector::Dist(Tile->GetActorLocation(), Location) < TileSize * 0.5f) // Check if within tile bounds
        {
            return Tile;
        }
    }
    return nullptr; // No valid tile found
}






void AGridManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}







void AGridManager::GenerateGrid()
{
    if (!GridTileClass)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: GridTileClass is NULL! Cannot spawn grid tiles."));
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: World is NULL! Cannot generate grid."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Clearing existing tiles..."));

    // Clear existing tiles
    for (AGridTile* Tile : GridTiles)
    {
        if (Tile)
        {
            Tile->Destroy();
        }
    }
    GridTiles.Empty();

    // Ensure grid size is valid before proceeding
    if (GridWidth <= 0 || GridHeight <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Invalid grid size! Width: %d, Height: %d"), GridWidth, GridHeight);
        return;
    }

    if (TileSize <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Invalid TileSize! Value: %f"), TileSize);
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Generating grid with size [%d x %d] and TileSize: %f"), GridWidth, GridHeight, TileSize);

    // Spawn the grid tiles
    int32 TileCount = 0;
    for (int32 X = 0; X < GridWidth; X++)
    {
        for (int32 Y = 0; Y < GridHeight; Y++)
        {
            FVector SpawnLocation = FVector(X * TileSize, Y * TileSize, 0.f);
            FRotator SpawnRotation = FRotator::ZeroRotator;

            AGridTile* NewTile = World->SpawnActor<AGridTile>(GridTileClass, SpawnLocation, SpawnRotation);

            if (NewTile)
            {
                NewTile->InitializeTile(X, Y, EGridTileType::Custom);
                GridTiles.Add(NewTile);
                NewTile->bIsOccupied = false;  // Ensure tile starts as unoccupied
                NewTile->OccupyingUnit = nullptr; // Clear any references

                TileCount++;

                // Debug log to confirm tile initialization
                UE_LOG(LogTemp, Warning, TEXT("Initialized Tile at [%d, %d]"), X, Y);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Failed to spawn tile at location (%d, %d)"), X, Y);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Successfully generated %d tiles."), TileCount);
}








void AGridManager::HighlightValidMoves(AHero* Hero)
{
    if (!bIsCombatActive || !Hero) return; // Only allow in combat

    // Clear previous move tiles
    ValidMoveTiles.Empty();

    // Get the hero’s position
    FVector HeroLocation = Hero->GetActorLocation();
    int32 HeroX = FMath::RoundToInt(HeroLocation.X / TileSize);
    int32 HeroY = FMath::RoundToInt(HeroLocation.Y / TileSize);

    // Identify valid movement tiles
    for (AGridTile* Tile : GridTiles)
    {
        int32 Distance = FMath::Abs(Tile->GridX - HeroX) + FMath::Abs(Tile->GridY - HeroY);
        if (Distance <= Hero->MovementRange && !Tile->bIsOccupied)
        {
            ValidMoveTiles.Add(Tile);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Found %d Valid Move Tiles"), ValidMoveTiles.Num());
}







void AGridManager::SelectUnit(ACharacter* Unit)
{
    if (Unit)
    {
        SelectedUnit = Unit;
        // Additional logic for when a unit is selected
        UE_LOG(LogTemp, Warning, TEXT("Unit Selected: %s"), *Unit->GetName());
    }
}

void AGridManager::HandleTileSelection(AGridTile* SelectedTile)
{
    if (!SelectedTile || !SelectedHero) return;

    // Check if tile is within valid moves
    if (ValidMoveTiles.Contains(SelectedTile))
    {
        MoveHeroToTile(SelectedHero, SelectedTile);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Tile not in valid move range"));
        // TODO: Add UI Feedback to show invalid move visually
    }
}






void AGridManager::MoveHeroToTile(AHero* Hero, AGridTile* TargetTile)
{
    if (!Hero || !TargetTile) return;
    if (!bIsCombatActive) return; // Ensure movement only happens in combat

    // Validate path before moving
    UNavigationPath* Path = UNavigationSystemV1::GetCurrent(GetWorld())
        ->FindPathToLocationSynchronously(GetWorld(), Hero->GetActorLocation(), TargetTile->GetActorLocation());
    if (!Path || Path->PathPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("MoveHeroToTile: No valid path found!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("Moving Hero to Tile: %s"), *TargetTile->GetName());

    // Mark the current tile as unoccupied if the hero was on it
    if (Hero->CurrentTile && Hero->CurrentTile->OccupyingUnit == Hero) // ? No need to cast
    {
        Hero->CurrentTile->bIsOccupied = false;
        Hero->CurrentTile->OccupyingUnit = nullptr;
    }

    // Assign the hero to the new tile
    Hero->CurrentTile = TargetTile;
    TargetTile->bIsOccupied = true;
    TargetTile->OccupyingUnit = Hero; // ? No need for casting

    FVector TargetLocation = TargetTile->GetActorLocation();

    // Manually rotate hero towards movement direction
    AController* LocalController = Hero->GetController();
    if (LocalController)
    {
        FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(Hero->GetActorLocation(), TargetLocation);
        Hero->SetActorRotation(FMath::RInterpTo(Hero->GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 4.0f));

        // Ensure character movement settings are correct
        Hero->bUseControllerRotationYaw = false;
        Hero->GetCharacterMovement()->bOrientRotationToMovement = false;
    }

    // Calculate movement cost and reduce stamina
    int32 Distance = FMath::Abs(TargetTile->GridX - Hero->CurrentTile->GridX) +
        FMath::Abs(TargetTile->GridY - Hero->CurrentTile->GridY);
    Hero->Stamina = FMath::Max(0.0f, Hero->Stamina - Distance);

    // Recalculate movement range dynamically
    Hero->CalculateMovementRange(TargetTile);

    // Move hero to target location
    Hero->SetActorLocation(TargetTile->GetActorLocation());

    // **Use AI Navigation for Combat**
    if (LocalController)
    {
        UE_LOG(LogTemp, Warning, TEXT("AI Controller Found. Moving in Combat Mode..."));
        UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
        if (NavSystem)
        {
            LocalController->StopMovement();
            UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, TargetLocation);
            UE_LOG(LogTemp, Warning, TEXT("Movement Command Sent"));
        }

        // Rotate to face movement direction
        FVector MoveDirection = (TargetLocation - Hero->GetActorLocation()).GetSafeNormal();
        if (!MoveDirection.IsNearlyZero())
        {
            FRotator LookAtRotation = FRotationMatrix::MakeFromX(MoveDirection).Rotator();
            Hero->SetActorRotation(FMath::RInterpTo(Hero->GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 10.0f));
        }
    }

    // Check for enemies nearby after moving
    Hero->CheckForEnemiesNearby();
}











TArray<AGridTile*> AGridManager::GetValidMoves(AHero* Unit, int32 MoveRange)
{
    TArray<AGridTile*> ValidTiles;

    if (!Unit)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Unit is NULL!"));
        return ValidTiles;
    }

    if (!Unit->CurrentTile)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Unit->CurrentTile is NULL!"));
        return ValidTiles;
    }

    // Get the hero’s current position
    int32 UnitX = Unit->CurrentTile->GridX;
    int32 UnitY = Unit->CurrentTile->GridY;

    UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Calculating valid moves from (%d, %d) with range %d"), UnitX, UnitY, MoveRange);

    // Ensure GridTiles array is populated
    if (GridTiles.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: GridTiles array is EMPTY!"));
        return ValidTiles;
    }

    int32 ValidTileCount = 0;

    // Iterate through all tiles to find valid moves
    for (AGridTile* Tile : GridTiles)
    {
        if (!Tile)
        {
            UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Encountered NULL tile in GridTiles!"));
            continue;
        }

        UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Checking Tile (%d, %d)"), Tile->GridX, Tile->GridY);

        if (Tile->bIsOccupied)
        {
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Tile (%d, %d) is OCCUPIED"), Tile->GridX, Tile->GridY);
            continue;
        }

        if (!Tile->bIsWalkable)
        {
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Tile (%d, %d) is NOT WALKABLE"), Tile->GridX, Tile->GridY);
            continue;
        }

        // Manhattan Distance calculation
        int32 Distance = FMath::Abs(Tile->GridX - UnitX) + FMath::Abs(Tile->GridY - UnitY);

        UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Distance to Tile (%d, %d) = %d"), Tile->GridX, Tile->GridY, Distance);

        if (Distance <= MoveRange)
        {
            ValidTiles.Add(Tile);
            ValidTileCount++;
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Added Valid Move Tile (%d, %d)"), Tile->GridX, Tile->GridY);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Total Valid Move Tiles = %d"), ValidTileCount);

    return ValidTiles;
}









void AGridManager::EndCombat()
{
    if (!bIsCombatActive) return;

    bIsCombatActive = false;
    UE_LOG(LogTemp, Warning, TEXT("Combat Ended!"));
}







void AGridManager::StartCombat()
{
    if (bIsCombatActive) return;

    bIsCombatActive = true;
    UE_LOG(LogTemp, Warning, TEXT("Combat Started!"));

    // Ensure TurnManager is initialized
    if (!TurnManager)
    {
        TurnManager = GetWorld()->SpawnActor<ATurnManager>();
    }

    if (TurnManager)
    {
        UE_LOG(LogTemp, Warning, TEXT("Turn Manager successfully initialized."));
        TurnManager->StartCombat(this);
    }
}








void AGridManager::SpawnEnemyUnit(EEnemyType EnemyType)
{
    if (!GridTiles.Num()) return;

    // Pick a random available tile
    AGridTile* RandomTile = nullptr;
    int32 Attempts = 0; // Prevent infinite loops
    while ((!RandomTile || RandomTile->bIsOccupied) && Attempts < 100)
    {
        RandomTile = GridTiles[FMath::RandRange(0, GridTiles.Num() - 1)];
        Attempts++;
    }

    // Ensure the selected tile is valid
    if (!RandomTile || RandomTile->bIsOccupied)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find a valid tile for enemy spawn!"));
        return;
    }

    // Determine which enemy class to spawn
    TSubclassOf<AEnemy> EnemyClassToSpawn = nullptr;
    switch (EnemyType)
    {
    case EEnemyType::GoblinMelee:
        EnemyClassToSpawn = GoblinMeleeEnemyClass;
        break;
    case EEnemyType::GoblinRanged:
        EnemyClassToSpawn = GoblinRangedEnemyClass;
        break;
    case EEnemyType::GoblinMagic:
        EnemyClassToSpawn = GoblinMagicEnemyClass;
        break;
    case EEnemyType::GoblinTank:
        EnemyClassToSpawn = GoblinTankEnemyClass;
        break;
    case EEnemyType::GoblinBoss:
        EnemyClassToSpawn = GoblinBossEnemyClass;
        break;
    default:
        UE_LOG(LogTemp, Error, TEXT("Invalid Enemy Type!"));
        return;
    }

    // Ensure there is a valid class to spawn
    if (!EnemyClassToSpawn) return;

    // Spawn the enemy
    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    AEnemy* EnemyUnit = GetWorld()->SpawnActor<AEnemy>(EnemyClassToSpawn, RandomTile->GetActorLocation(), FRotator::ZeroRotator, SpawnParams);

    if (EnemyUnit)
    {
        // Set the enemy to be an enemy unit
        EnemyUnit->bIsEnemy = true;
        EnemyUnit->SetPositionOnGrid(RandomTile);
        RandomTile->OccupyingUnit = EnemyUnit;
        RandomTile->bIsOccupied = true; // Ensure tile is marked as occupied

        UE_LOG(LogTemp, Warning, TEXT("Spawned enemy: %s at tile (%d, %d) | World Pos: %s"),
            *EnemyUnit->GetName(), RandomTile->GridX, RandomTile->GridY, *RandomTile->GetActorLocation().ToString());

        // Confirm the enemy's location
        FVector EnemyPosition = EnemyUnit->GetActorLocation();
        UE_LOG(LogTemp, Warning, TEXT("Enemy actual location: %s"), *EnemyPosition.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Enemy spawn failed!"));
    }

}







AGridTile* AGridManager::GetTileAt(int32 X, int32 Y)
{
    for (AGridTile* Tile : GridTiles)
    {
        if (Tile->GridX == X && Tile->GridY == Y)
        {
            return Tile;
        }
    }
    return nullptr; // No tile found at the given coordinates
}






TArray<AGridTile*> AGridManager::GetAdjacentTiles(AGridTile* CenterTile)
{
    TArray<AGridTile*> AdjacentTiles;
    if (!CenterTile) return AdjacentTiles;

    int32 X = CenterTile->GridX;
    int32 Y = CenterTile->GridY;

    // Loop through adjacent coordinates (4-directional)
    for (int32 i = -1; i <= 1; i++)
    {
        for (int32 j = -1; j <= 1; j++)
        {
            if ((i == 0 && j == 0) || (i != 0 && j != 0)) continue; // Skip the center and diagonal tiles

            AGridTile* AdjTile = GetTileAt(X + i, Y + j);
            if (AdjTile && !AdjTile->bIsOccupied)
            {
                AdjacentTiles.Add(AdjTile);
            }
        }
    }

    return AdjacentTiles;
}








#if WITH_EDITOR
void AGridManager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // Get the changed property name
    FName PropertyName = PropertyChangedEvent.GetPropertyName();

    // Check if the changed property is related to grid generation
    if (PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridWidth) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridHeight) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, TileSize))
    {
        GenerateGrid(); // Regenerate the grid when a property changes
    }
}
#endif



