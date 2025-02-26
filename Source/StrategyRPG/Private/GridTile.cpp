#include "GridTile.h"
#include "AGridManager.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Constructor
AGridTile::AGridTile()
{
    PrimaryActorTick.bCanEverTick = false;

    // Store the mesh as a UPROPERTY to modify later
    TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
    RootComponent = TileMesh;

    bIsOccupied = false;
    bIsWalkable = true;  // Default setting
}

// Called when the game starts or when spawned
void AGridTile::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame (currently unused)
void AGridTile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Initializes the tile with a position and type
void AGridTile::InitializeTile(int32 X, int32 Y, FString Type)
{
    GridX = X;
    GridY = Y;
    TileType = Type;

    // Move tile to the correct world position
    SetActorLocation(FVector(GridX * 100.0f, GridY * 100.0f, 0.0f));
}

void AGridTile::HighlightTile(bool bEnable)
{
    SetActorScale3D(bEnable ? FVector(1.1f, 1.1f, 1.1f) : FVector(1.0f, 1.0f, 1.0f));
}

void AGridTile::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    // Get Grid Manager
    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (GridManager)
    {
        GridManager->HandleTileSelection(this);
    }
}
