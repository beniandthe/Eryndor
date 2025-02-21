#include "AGridManager.h"
#include "GridTile.h"
#include "AGridUnit.h"
#include "AHero.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"


AGridManager::AGridManager()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGridManager::BeginPlay()
{
    Super::BeginPlay();
    GenerateGrid();
}

void AGridManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGridManager::GenerateGrid()
{
    if (!GridTileClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    // Clear existing tiles
    for (AGridTile* Tile : GridTiles)
    {
        if (Tile)
        {
            Tile->Destroy();
        }
    }
    GridTiles.Empty();

    // Spawn the grid tiles
    for (int32 X = 0; X < GridWidth; X++)
    {
        for (int32 Y = 0; Y < GridHeight; Y++)
        {
            FVector SpawnLocation = FVector(X * TileSize, Y * TileSize, 0.f);
            FRotator SpawnRotation = FRotator::ZeroRotator;

            AGridTile* NewTile = World->SpawnActor<AGridTile>(GridTileClass, SpawnLocation, SpawnRotation);
            if (NewTile)
            {
                NewTile->InitializeTile(X, Y, "Default");
                GridTiles.Add(NewTile);
            }
        }
    }
}

TArray<AGridTile*> AGridManager::GetValidMoves(AHero* Unit, int32 MoveRange)
{
    TArray<AGridTile*> ValidTiles;
    return ValidTiles;
}

void AGridManager::HighlightValidMoves(AHero* Unit, int32 MoveRange)
{
    for (AGridTile* Tile : GridTiles)
    {
        Tile->HighlightTile(false);
    }

    TArray<AGridTile*> ValidTiles = GetValidMoves(Unit, MoveRange);

    for (AGridTile* Tile : ValidTiles)
    {
        Tile->HighlightTile(true);
    }
}


void AGridManager::HandleTileSelection(AGridTile* SelectedTile)
{
    if (!SelectedTile || !SelectedHero) return; // Ensure valid tile and hero exist

    // Check if the selected tile is within the valid movement range
    if (ValidMoveTiles.Contains(SelectedTile))
    {
        // Move the hero to the selected tile
        MoveHeroToTile(SelectedHero, SelectedTile);
    }
}

void AGridManager::MoveHeroToTile(AHero* Hero, AGridTile* TargetTile)
{
    if (!Hero || !TargetTile) return; // Ensure both are valid

    // Get the current tile of the hero
    AGridTile* CurrentTile = nullptr;
    for (AGridTile* Tile : GridTiles)
    {
        if (Tile->bIsOccupied) // Assuming hero is on an occupied tile
        {
            CurrentTile = Tile;
            break;
        }
    }

    // If there's a current tile, mark it as unoccupied
    if (CurrentTile)
    {
        CurrentTile->bIsOccupied = false;
    }

    // Move the hero to the new tile
    Hero->SetActorLocation(TargetTile->GetActorLocation());

    // Update the hero's reference to the new tile
    TargetTile->bIsOccupied = true;
}

void AGridManager::SelectUnit(AGridUnit* Unit)
{
    if (Unit)
    {
        SelectedUnit = Unit;
        UE_LOG(LogTemp, Warning, TEXT("Unit selected: %s"), *Unit->GetName());
    }
}

/** Handles selecting a hero */
void AGridManager::SelectHero(AHero* Hero)
{
    if (Hero)
    {
        SelectedHero = Hero;
        UE_LOG(LogTemp, Warning, TEXT("Hero selected: %s"), *Hero->GetName());
    }
}


void AGridManager::SpawnUnitAtTile(AGridTile* TargetTile, TSubclassOf<AGridUnit> UnitClass)
{
    if (!TargetTile || !UnitClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    AGridUnit* NewUnit = World->SpawnActor<AGridUnit>(UnitClass);
    if (NewUnit)
    {
        NewUnit->SetPositionOnGrid(TargetTile);
    }
}

void AGridManager::MoveUnitToTile(AGridUnit* Unit, AGridTile* TargetTile)
{
    if (!Unit || !TargetTile) return;

    // Clear the old tile
    if (Unit->OccupiedTile)
    {
        Unit->OccupiedTile->bIsOccupied = false;
    }

    // Move the unit
    Unit->SetPositionOnGrid(TargetTile);

    // Update the new tile as occupied
    TargetTile->bIsOccupied = true;

    // Assign new tile to unit
    Unit->OccupiedTile = TargetTile;
}

void AGridManager::UpdateGridSize(int32 NewWidth, int32 NewHeight, float NewTileSize)
{
    GridWidth = NewWidth;
    GridHeight = NewHeight;
    TileSize = NewTileSize;

    GenerateGrid();
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



