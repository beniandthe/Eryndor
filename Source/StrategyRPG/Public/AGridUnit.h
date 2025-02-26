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

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    /** Handles unit selection */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;
};

