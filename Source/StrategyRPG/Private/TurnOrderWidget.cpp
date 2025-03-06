// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnOrderWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "TurnManager.h"
#include "AGameCharacter.h"

void UTurnOrderWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (EndTurnButton)
    {
        EndTurnButton->OnClicked.AddDynamic(this, &UTurnOrderWidget::OnEndTurnPressed);
    }
}

void UTurnOrderWidget::UpdateTurnOrderDisplay()
{
    if (!TurnManager || !TurnOrderBar) return;

    // Clear old portraits
    TurnOrderBar->ClearChildren();

    // Get current turn order
    const TArray<AGameCharacter*>& TurnOrder = TurnManager->TurnOrder;
    int32 CurrentTurnIndex = TurnManager->CurrentTurnIndex;

    for (int32 i = 0; i < TurnOrder.Num(); i++)
    {
        AGameCharacter* Unit = TurnOrder[i];
        if (!Unit) continue;

        // Create an Image widget dynamically
        UImage* PortraitImage = NewObject<UImage>(this);
        if (PortraitImage)
        {
            PortraitImage->SetBrushFromTexture(Unit->GetPortraitTexture());

            // Highlight active unit
            PortraitImage->SetOpacity(i == CurrentTurnIndex ? 1.0f : 0.5f);

            // Add to horizontal bar
            TurnOrderBar->AddChild(PortraitImage);
        }
    }

    // Update unit name
    if (UnitNameText)
    {
        AGameCharacter* CurrentUnit = TurnManager->GetCurrentUnit();
        UnitNameText->SetText(FText::FromString(CurrentUnit ? CurrentUnit->GetName() : "Unknown"));
    }
}

void UTurnOrderWidget::OnEndTurnPressed()
{
    if (TurnManager)
    {
        TurnManager->NextTurn();
    }
}

void UTurnOrderWidget::UpdateTurnOrder(const TArray<AGameCharacter*>& TurnOrder, int32 CurrentIndex)
{
    if (!TurnOrderBar) return;

    // Clear existing portraits
    TurnOrderBar->ClearChildren();

    for (int32 i = 0; i < TurnOrder.Num(); i++)
    {
        AGameCharacter* Unit = TurnOrder[i];
        if (!Unit) continue;

        // Create an Image widget dynamically
        UImage* PortraitImage = NewObject<UImage>(this);
        if (PortraitImage)
        {
            PortraitImage->SetBrushFromTexture(Unit->GetPortraitTexture());

            // Highlight active unit
            PortraitImage->SetOpacity(i == CurrentIndex ? 1.0f : 0.5f);

            // Add to turn order UI
            TurnOrderBar->AddChild(PortraitImage);
        }
    }
}

