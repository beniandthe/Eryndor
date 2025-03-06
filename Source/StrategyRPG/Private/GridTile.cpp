#include "GridTile.h"
#include "AGridManager.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Engine/DecalActor.h"
#include "Materials/MaterialInterface.h"

// Constructor
AGridTile::AGridTile()
{
    PrimaryActorTick.bCanEverTick = false;

    // Store the mesh as a UPROPERTY to modify later
    TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
    RootComponent = TileMesh;

    // Ensure collision settings
    TileMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    TileMesh->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    TileMesh->SetCollisionResponseToAllChannels(ECR_Block);
    TileMesh->SetGenerateOverlapEvents(false);

    GridX = 0;
    GridY = 0;
    TileType = EGridTileType::Custom;
    OccupyingUnit = nullptr;
    bIsOccupied = false;
    bIsWalkable = true;
}

// Called when the game starts or when spawned
void AGridTile::BeginPlay()
{
    Super::BeginPlay();
}

// Initializes the tile with a position and type
void AGridTile::InitializeTile(int32 X, int32 Y, EGridTileType Type)
{
    GridX = X;
    GridY = Y;
    TileType = Type;

    // Move tile to the correct world position
    SetActorLocation(FVector(GridX * 100.0f, GridY * 100.0f, 0.0f));

    UE_LOG(LogTemp, Warning, TEXT("Initialized Tile at [%d, %d]"), GridX, GridY);
}

// Assign a unit to this tile
void AGridTile::SetOccupyingUnit(AGameCharacter* NewUnit)
{
    OccupyingUnit = Cast<ACharacter>(NewUnit);
    bIsOccupied = (NewUnit != nullptr);
}

// Function to get the navigation path from AI to target
UNavigationPath* AGridTile::GetNavigationPath(AActor* StartActor, AActor* EndActor)
{
    if (!StartActor || !EndActor)
    {
        UE_LOG(LogTemp, Error, TEXT("GetNavigationPath: Invalid StartActor or EndActor!"));
        return nullptr;
    }

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSystem)
    {
        return nullptr;
    }

    return NavSystem->FindPathToLocationSynchronously(GetWorld(), StartActor->GetActorLocation(), EndActor->GetActorLocation());
}

// Handle tile selection
void AGridTile::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (!GridManager || !GridManager->bIsCombatActive) return; // Prevent tile selection if not in combat

    GridManager->HandleTileSelection(this);
}

// Check if tile is valid for movement
bool AGridTile::IsValidMoveTile() const
{
    return !bIsOccupied && bIsWalkable;
}

// Function to set tile properties based on type
void AGridTile::SetTileType(EGridTileType NewType)
{
    TileType = NewType;
    UE_LOG(LogTemp, Warning, TEXT("Tile type changed to: %d"), static_cast<int32>(NewType));
}

// Function to spawn footprints along the AI path
void AGridTile::SpawnFootprintsAlongPath(AActor* AIActor, AActor* TargetTile)
{
    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (!GridManager || !GridManager->bIsCombatActive) return; // Only spawn footprints during combat

    UNavigationPath* Path = UNavigationSystemV1::GetCurrent(GetWorld())->FindPathToLocationSynchronously(GetWorld(), AIActor->GetActorLocation(), TargetTile->GetActorLocation());
    if (!Path || Path->PathPoints.Num() < 2)
    {
        return;
    }

    for (const FVector& Point : Path->PathPoints)
    {
        // Check if a footprint already exists at this point
        TArray<AActor*> OverlappingActors;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADecalActor::StaticClass(), OverlappingActors);

        bool bAlreadyExists = false;
        for (AActor* Actor : OverlappingActors)
        {
            if (Actor->GetActorLocation().Equals(Point, 10.0f))
            {
                bAlreadyExists = true;
                break;
            }
        }

        if (!bAlreadyExists)
        {
            UDecalComponent* Footprint = NewObject<UDecalComponent>(this);
            if (Footprint)
            {
                Footprint->RegisterComponent();
                Footprint->SetWorldLocation(Point);
                Footprint->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));  // Face downward
                Footprint->SetDecalMaterial(FootprintMaterial);  // Assign footprint material
                Footprint->SetFadeOut(3.0f, 1.0f);  // Optional: Makes footprints disappear over time
            }
        }
    }
}
