#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTile.generated.h"

UCLASS()
class STRATEGYRPG_API AGridTile : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AGridTile();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Mesh component for the tile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile")
    UStaticMeshComponent* TileMesh;


    // Grid Position
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    FVector GridPosition;

    // Whether the tile is occupied by a unit
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    bool bIsOccupied;

    // Set Tile Type (e.g., Grass, Water, Mountain)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    FString TileType;

    /** Determines if the tile is walkable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    bool bIsWalkable = true;

    // Initializes the tile's position and type
    void InitializeTile(int32 X, int32 Y, FString Type);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    void HighlightTile(bool bEnable);

    /** Handle Click Event */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;
};

