#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTile.h"
#include "AHero.h"
#include "AGridManager.generated.h"

class AGridUnit;
class AGridTile;
class AHero;

UCLASS()
class STRATEGYRPG_API AGridManager : public AActor
{
    GENERATED_BODY()

public:
    AGridManager();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    #if WITH_EDITOR
        virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    #endif


    /** Grid settings */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridWidth = 5; // Number of tiles in width

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridHeight = 5; // Number of tiles in height

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float TileSize = 100.f; // Distance between tiles

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    TSubclassOf<AGridTile> GridTileClass; // The tile to spawn

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
	TArray<AGridTile*> GridTiles; // Array of grid tiles

    /** The currently selected unit */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
    AGridUnit* SelectedUnit;

    /** Spawns a unit at a selected tile */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void SpawnUnitAtTile(AGridTile* TargetTile, TSubclassOf<AGridUnit> UnitClass);

    /** Selects a unit when clicked */
    UFUNCTION(BlueprintCallable, Category = "Unit")
    void SelectUnit(AGridUnit* Unit);

    /** Handles selecting a hero */
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SelectHero(AHero* Hero);

    /** Generates the grid */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void GenerateGrid();

    /** Updates the grid dynamically */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void UpdateGridSize(int32 NewWidth, int32 NewHeight, float NewTileSize);

    /** Finds valid movement tiles for a hero */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    TArray<AGridTile*> GetValidMoves(AHero* Unit, int32 MoveRange);

    /** Highlights valid movement tiles */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void HighlightValidMoves(AHero* Unit, int32 MoveRange);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    TArray<AGridTile*> ValidMoveTiles; // Stores tiles the hero can move to

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    AHero* SelectedHero; // Stores the currently active hero

    /** Handles tile selection */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void HandleTileSelection(AGridTile* SelectedTile);

    /** Moves the hero to the specified tile */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void MoveHeroToTile(AHero* Hero, AGridTile* TargetTile);

    /** Moves the selected unit to the target tile */
    UFUNCTION(BlueprintCallable, Category = "Unit")
    void MoveUnitToTile(AGridUnit* Unit, AGridTile* TargetTile);
   
};


