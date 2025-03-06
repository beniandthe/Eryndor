#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TurnOrderWidget.generated.h"

class UHorizontalBox;
class UImage;
class UTextBlock;
class UButton;
class ATurnManager;
class AGameCharacter;
class UTexture2D;

/**
 * UI Widget that displays the turn order of units in combat.
 */
UCLASS()
class STRATEGYRPG_API UTurnOrderWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    /** Reference to the Turn Manager */
    UPROPERTY(BlueprintReadOnly, Category = "Turn Order")
    ATurnManager* TurnManager;

    /** UI Elements */
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* TurnOrderBar; // Holds portraits

    UPROPERTY(meta = (BindWidget))
    UTextBlock* UnitNameText; // Displays active unit name

    UPROPERTY(meta = (BindWidget))
    UButton* EndTurnButton; // Button to end turn

    /** Updates the turn order display */
    UFUNCTION()
    void UpdateTurnOrderDisplay();

    /** Handles End Turn button press */
    UFUNCTION()
    void OnEndTurnPressed();

    /** Updates the turn order UI */
    UFUNCTION(BlueprintCallable, Category = "Turn Order")
    void UpdateTurnOrder(const TArray<AGameCharacter*>& TurnOrder, int32 CurrentIndex);

protected:
    virtual void NativeConstruct() override;
};
