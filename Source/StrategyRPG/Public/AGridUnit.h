#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGridUnit.generated.h"

class AGridTile;

UCLASS()
class STRATEGYRPG_API AGridUnit : public AActor
{
    GENERATED_BODY()

public:
    AGridUnit();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* UnitMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    AGridTile* OccupiedTile;

    UFUNCTION(BlueprintCallable, Category = "Grid")
    void SetPositionOnGrid(AGridTile* NewTile);

    /** Detect when unit is clicked */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;
};

