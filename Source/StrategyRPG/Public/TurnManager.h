#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnManager.generated.h"

class AGameCharacter;
class AGridManager;
class UTurnOrderWidget;
class UTexture2D;

UCLASS()
class STRATEGYRPG_API ATurnManager : public AActor
{
    GENERATED_BODY()

public:
    ATurnManager();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    /** Reference to Grid Manager **/
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    AGridManager* GridManager;

    /** List of all units in combat **/
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    TArray<AGameCharacter*> TurnOrder;

    /** Index of the current unit's turn **/
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
    int32 CurrentTurnIndex;

    /** Initializes turn order **/
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void InitializeTurnOrder(const TArray<AGameCharacter*>& Combatants);

    /** Moves to the next turn **/
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void NextTurn();

    /** Gets the current unit's turn **/
    UFUNCTION(BlueprintCallable, Category = "Combat")
    AGameCharacter* GetCurrentUnit() const;

    /** Starts combat by retrieving all units and initializing turn order **/
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void StartCombat(AGridManager* GridManagerRef);

    /** UI Widget Reference **/
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UTurnOrderWidget> TurnOrderWidgetClass;

    UPROPERTY()
    UTurnOrderWidget* TurnOrderWidget;

    /** Updates the turn order UI **/
    void UpdateTurnOrderUI();

    /** Returns unit portrait for a given index **/
    UFUNCTION(BlueprintPure, Category = "UI")
    UTexture2D* GetUnitPortrait(int32 Index);
};
