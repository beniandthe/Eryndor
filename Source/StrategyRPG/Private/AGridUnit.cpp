#include "AGridUnit.h"
#include "GridTile.h"
#include "AGridManager.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

AGridUnit::AGridUnit()
{
    PrimaryActorTick.bCanEverTick = false;

    UnitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnitMesh"));
    RootComponent = UnitMesh;
}

void AGridUnit::SetPositionOnGrid(AGridTile* NewTile)
{
    if (NewTile)
    {
        OccupiedTile = NewTile;
        SetActorLocation(NewTile->GetActorLocation() + FVector(0.f, 0.f, 50.f)); // Offset for visibility
    }
}

// Detects when the unit is clicked and notifies the grid manager
void AGridUnit::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    AGridManager* GridManager = Cast<AGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AGridManager::StaticClass()));
    if (GridManager)
    {
        GridManager->SelectUnit(this);
    }
}
