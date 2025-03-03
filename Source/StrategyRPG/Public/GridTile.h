#pragma once

#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Actor.h"
#include "GridTile.generated.h"


UENUM(BlueprintType)
enum class EGridTileType : uint8
{
    Snow     UMETA(DisplayName = "Snow"),
    Forest    UMETA(DisplayName = "Forest"),
    Mountain  UMETA(DisplayName = "Mountain"),
    Water     UMETA(DisplayName = "Water"),
    Swamp     UMETA(DisplayName = "Swamp"),
    Desert    UMETA(DisplayName = "Desert"),
    Road      UMETA(DisplayName = "Road"),
    Custom    UMETA(DisplayName = "Custom")
};

UCLASS()
class STRATEGYRPG_API AGridTile : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AGridTile();

    // Function to spawn footprints along the AI path
    void SpawnFootprintsAlongPath(AActor* AIActor, AActor* TargetTile);

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Combat")
    bool bIsCombatActive; // Reference to determine if movement is grid-based


protected:
    virtual void BeginPlay() override;

    // Function to get the navigation path from AI to target
    UNavigationPath* GetNavigationPath(AActor* StartActor, AActor* EndActor);

    // Reference to the material for footprints
    UPROPERTY(EditDefaultsOnly, Category = "Footprints")
    UMaterialInterface* FootprintMaterial;

public:
    virtual void Tick(float DeltaTime) override;

    /** Mesh component for the tile */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile")
    UStaticMeshComponent* TileMesh;

    /** Grid Position */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridY;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    FVector GridPosition;

    /** Whether the tile is occupied by a unit */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    bool bIsOccupied;

    /** Determines if the tile is walkable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    bool bIsWalkable = true;

    /** Tile Type Enum (Visible in Blueprints) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile Properties")
    EGridTileType TileType;

    /** Initializes the tile's position and type */
    void InitializeTile(int32 X, int32 Y, EGridTileType Type);

    /** Function to Set Tile Properties Based on Type */
    UFUNCTION(BlueprintCallable, Category = "Tile")
    void SetTileType(EGridTileType NewType);

    /** Handle Click Event */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;

    bool IsValidMoveTile() const;
};


