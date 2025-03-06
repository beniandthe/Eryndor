#include "TurnManager.h"
#include "AGameCharacter.h"
#include "AGridManager.h"
#include "TurnOrderWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATurnManager::ATurnManager()
{
    PrimaryActorTick.bCanEverTick = true;
    CurrentTurnIndex = 0;
}

// Called when the game starts or when spawned
void ATurnManager::BeginPlay()
{
    Super::BeginPlay();

    // Spawn the Turn Order UI
    if (TurnOrderWidgetClass)
    {
        TurnOrderWidget = CreateWidget<UTurnOrderWidget>(GetWorld(), TurnOrderWidgetClass);
        if (TurnOrderWidget)
        {
            TurnOrderWidget->TurnManager = this;
            TurnOrderWidget->AddToViewport();
            UpdateTurnOrderUI();
        }
    }
}

// Called every frame
void ATurnManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATurnManager::InitializeTurnOrder(const TArray<AGameCharacter*>& Combatants)
{
    TurnOrder = Combatants;

    // Sort units by Initiative in descending order
    TurnOrder.Sort([](const AGameCharacter& A, const AGameCharacter& B) {
        return A.Initiative > B.Initiative;
        });

    CurrentTurnIndex = 0;
    UE_LOG(LogTemp, Warning, TEXT("Turn Order Initialized"));

    // Update UI
    if (TurnOrderWidget)
    {
        TurnOrderWidget->UpdateTurnOrderDisplay();
    }
}

void ATurnManager::NextTurn()
{
    if (TurnOrder.Num() == 0) return;

    CurrentTurnIndex = (CurrentTurnIndex + 1) % TurnOrder.Num();
    UE_LOG(LogTemp, Warning, TEXT("Next Turn: %s"), *TurnOrder[CurrentTurnIndex]->GetName());

    AGameCharacter* ActiveUnit = TurnOrder[CurrentTurnIndex];
    if (ActiveUnit)
    {
        ActiveUnit->CurrentTurnState = ETurnState::Moving;
        ActiveUnit->ActionPoints = 1; // Reset AP
        ActiveUnit->MovementPoints = 6; // Reset MP
        UE_LOG(LogTemp, Warning, TEXT("Next Turn: %s - AP: %d, MP: %d"),
            *ActiveUnit->GetName(), ActiveUnit->ActionPoints, ActiveUnit->MovementPoints);
    }

    // If the next unit is an enemy, execute its turn
    if (ActiveUnit->IsA(AEnemy::StaticClass()))
    {
        Cast<AEnemy>(ActiveUnit)->TakeTurn();
    }

    // Update UI
    if (TurnOrderWidget)
    {
        TurnOrderWidget->UpdateTurnOrderDisplay();
    }
}

AGameCharacter* ATurnManager::GetCurrentUnit() const
{
    if (TurnOrder.Num() == 0) return nullptr;
    return TurnOrder[CurrentTurnIndex];
}

void ATurnManager::StartCombat(AGridManager* GridManagerRef)
{
    GridManager = GridManagerRef;

    if (!GridManager) return;

    // Gather all characters currently in combat
    TArray<AActor*> FoundUnits;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGameCharacter::StaticClass(), FoundUnits);

    TArray<AGameCharacter*> CombatUnits;
    for (AActor* Actor : FoundUnits)
    {
        AGameCharacter* Unit = Cast<AGameCharacter>(Actor);
        if (Unit)
        {
            CombatUnits.Add(Unit);
        }
    }

    InitializeTurnOrder(CombatUnits);

    if (CombatUnits.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Combat Started! First Turn: %s"), *TurnOrder[0]->GetName());
    }

    // Create Turn Order UI
    if (TurnOrderWidgetClass)
    {
        TurnOrderWidget = CreateWidget<UTurnOrderWidget>(GetWorld(), TurnOrderWidgetClass);
        if (TurnOrderWidget)
        {
            TurnOrderWidget->AddToViewport();
            UpdateTurnOrderUI();
        }
    }
}

void ATurnManager::UpdateTurnOrderUI()
{
    if (TurnOrderWidget)
    {
        TurnOrderWidget->UpdateTurnOrder(TurnOrder, CurrentTurnIndex);
    }
}

UTexture2D* ATurnManager::GetUnitPortrait(int32 Index)
{
    if (!TurnOrder.IsValidIndex(Index))
    {
        return nullptr;
    }

    AGameCharacter* Unit = TurnOrder[Index];
    if (!Unit)
    {
        return nullptr;
    }

    return Unit->GetPortraitTexture();
}

