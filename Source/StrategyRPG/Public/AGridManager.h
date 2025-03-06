#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTile.h"
#include "AHero.h"
#include "TurnManager.h"
#include "Enemy.h"
#include "EnemyType.h"
#include "AGridManager.generated.h"

class AGameCharacter;
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
    ACharacter* SelectedUnit;

    /** The currently selected hero */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
    AHero* SelectedHero;

    // Method to handle unit selection
    void SelectUnit(ACharacter *Unit);

    /** Handles selecting a hero */
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SelectHero(AHero* Hero);

    /** Generates the grid */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void GenerateGrid();

    /** Finds valid movement tiles for a hero */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    TArray<AGridTile*> GetValidMoves(AHero* Unit, int32 MoveRange);

    /** Highlights valid movement tiles */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void HighlightValidMoves(AHero* Hero);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    TArray<AGridTile*> ValidMoveTiles; // Stores tiles the hero can move to

    /** Handles tile selection */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void HandleTileSelection(AGridTile* SelectedTile);

    /** Moves the hero to the specified tile */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void MoveHeroToTile(AHero* Hero, AGridTile* TargetTile);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void StartCombat();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void EndCombat();

    /** Combat Mode */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    bool bIsCombatActive;

    /** Turn Manager Reference */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    ATurnManager* TurnManager;

    /** Enemy Spawning */
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void SpawnEnemyUnit(EEnemyType EnemyType);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    TSubclassOf<AEnemy> GoblinMeleeEnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    TSubclassOf<AEnemy> GoblinRangedEnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    TSubclassOf<AEnemy> GoblinMagicEnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    TSubclassOf<AEnemy> GoblinTankEnemyClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    TSubclassOf<AEnemy> GoblinBossEnemyClass;

    /** Tile Utilities */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    TArray<AGridTile*> GetAdjacentTiles(AGridTile* CenterTile);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    AGridTile* GetTileAt(int32 X, int32 Y);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    AGridTile* FindTileAtLocation(FVector Location);

};



