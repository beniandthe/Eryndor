#include "GridTile.h"
#include "AGridManager.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"



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
void AGridTile::InitializeTile(int32 X, int32 Y, EGridTileType Type)
{
    GridX = X;
    GridY = Y;
    TileType = Type;

    // Move tile to the correct world position
    SetActorLocation(FVector(GridX * 100.0f, GridY * 100.0f, 0.0f));

    // Apply tile-specific settings
    SetTileType(TileType);

    UE_LOG(LogTemp, Warning, TEXT("Initialized Tile at [%d, %d]"), GridX, GridY);
}








// Function to change tile properties based on type
void AGridTile::SetTileType(EGridTileType NewType)
{
    TileType = NewType;

}









UNavigationPath* AGridTile::GetNavigationPath(AActor* StartActor, AActor* EndActor)
{
    if (!StartActor || !EndActor)
    {
        return nullptr;
    }

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSystem)
    {
        return nullptr;
    }

    return NavSystem->FindPathToActorSynchronously(GetWorld(), StartActor->GetActorLocation(), EndActor);
}








void AGridTile::SpawnFootprintsAlongPath(AActor* AIActor, AActor* TargetTile)
{
    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (!GridManager || !GridManager->bIsCombatActive) return; // Only spawn footprints during combat

    UNavigationPath* Path = GetNavigationPath(AIActor, TargetTile);
    if (!Path || Path->PathPoints.Num() < 2)
    {
        return;
    }

    for (const FVector& Point : Path->PathPoints)
    {
        // Spawn decal at each point
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








void AGridTile::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (!GridManager || !GridManager->bIsCombatActive) return; // Prevent tile selection if not in combat

   
    if (GridManager)
    {
        GridManager->HandleTileSelection(this);
    }

    // Ensure tile collision remains intact
    TileMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}






bool AGridTile::IsValidMoveTile() const
{
    return !bIsOccupied && bIsWalkable;
}
