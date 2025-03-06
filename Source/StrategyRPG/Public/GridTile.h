#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGameCharacter.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Character.h"
#include "GridTile.generated.h"

UENUM(BlueprintType)
enum class EGridTileType : uint8
{
    Snow     UMETA(DisplayName = "Snow"),
    Forest   UMETA(DisplayName = "Forest"),
    Mountain UMETA(DisplayName = "Mountain"),
    Water    UMETA(DisplayName = "Water"),
    Swamp    UMETA(DisplayName = "Swamp"),
    Desert   UMETA(DisplayName = "Desert"),
    Road     UMETA(DisplayName = "Road"),
    Custom   UMETA(DisplayName = "Custom")
};

UCLASS()
class STRATEGYRPG_API AGridTile : public AActor
{
    GENERATED_BODY()

public:
    AGridTile();

    // Grid coordinates
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    int32 GridX;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    int32 GridY;

    // Unit occupying this tile
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    ACharacter* OccupyingUnit;

    // Tile type
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    EGridTileType TileType;

    // Whether the tile is occupied
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    bool bIsOccupied;

    // Whether the tile is walkable
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    bool bIsWalkable;

    // Tile mesh
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    UStaticMeshComponent* TileMesh;

    // Footprint material
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    UMaterialInterface* FootprintMaterial;

    virtual void BeginPlay() override;

    void InitializeTile(int32 X, int32 Y, EGridTileType Type);

    void SetOccupyingUnit(AGameCharacter* NewUnit);

    UNavigationPath* GetNavigationPath(AActor* StartActor, AActor* EndActor);

    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;

    bool IsValidMoveTile() const;

    void SetTileType(EGridTileType NewType);

    void SpawnFootprintsAlongPath(AActor* AIActor, AActor* TargetTile);
};


