#include "Enemy.h"
#include "AHero.h"
#include "GridTile.h"
#include "AGameCharacter.h"
#include "TurnManager.h"
#include "AGridManager.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AIController.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"


AEnemy::AEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    // Default enemy stats
    Health = 100.0f;
    AttackPower = 10.0f;


    // Set Capsule as Root Component (ACharacter uses a Capsule by default)
    UCapsuleComponent* Capsule = GetCapsuleComponent();
    Capsule->InitCapsuleSize(42.f, 96.f);
    RootComponent = Capsule;

    // Initialize Skeletal Mesh
    GetMesh()->SetupAttachment(RootComponent);

    // Initialize default portrait (can be changed per enemy)
    static ConstructorHelpers::FObjectFinder<UTexture2D> DefaultPortrait(TEXT("/Game/UI/DefaultPortrait"));
    if (DefaultPortrait.Succeeded())
    {
        UnitPortraitTexture = DefaultPortrait.Object;
    }
    else
    {
        UnitPortraitTexture = nullptr; // Ensures no undefined behavior
    }

    // Default Enemy Stats
    ActionPoints = 1;
    MovementPoints = 6;
    CurrentTurnState = ETurnState::Waiting;

    // Default AI settings
    AggroRange = 400.0f;
    bIsAggressive = true;
	bIsEnemy = true;
    bIsBossEnemy = false;

}
   






void AEnemy::TakeTurn()
{
    UE_LOG(LogTemp, Warning, TEXT("%s is taking its turn!"), *GetName());

    // Ensure the world exists
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("TakeTurn Failed: World is NULL!"));
        return;
    }

    // Step 1: Find the closest hero
    AHero* ClosestHero = nullptr;
    float ClosestDistance = FLT_MAX;

    for (TActorIterator<AHero> It(World); It; ++It)
    {
        AHero* Hero = *It;
        if (Hero)
        {
            float Distance = FVector::Dist(GetActorLocation(), Hero->GetActorLocation());
            if (Distance < ClosestDistance)
            {
                ClosestDistance = Distance;
                ClosestHero = Hero;
            }
        }
    }

    if (!ClosestHero)
    {
        UE_LOG(LogTemp, Warning, TEXT("No heroes found. Skipping turn."));
        EndTurn();
        return;
    }

    // Step 2: Attack if within range
    if (ClosestDistance <= 300.f && ActionPoints > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s attacks %s!"), *GetName(), *ClosestHero->GetName());
        Attack(ClosestHero);
        ActionPoints = 0;  // Enemy spends AP on attack
    }
    // Step 3: Move towards hero if not in range
    else if (MovementPoints > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s moves toward %s!"), *GetName(), *ClosestHero->GetName());

        // Move one step closer (basic movement logic)
        FVector Direction = (ClosestHero->GetActorLocation() - GetActorLocation()).GetSafeNormal();
        FVector TargetLocation = GetActorLocation() + Direction * 100.0f; // Adjust step size as needed

        GetCharacterMovement()->StopMovementImmediately();
        AAIController* AIController = Cast<AAIController>(GetController());

        if (AIController)
        {
            UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, TargetLocation);
        }
        else
        {
            SetActorLocation(TargetLocation);
        }

        MovementPoints = 0;
    }

    // Step 4: End turn after taking action
    EndTurn();
}


void AEnemy::CalculateClassSpecificStats()
{
    switch (EnemyType)
    {
    case EEnemyType::GoblinMelee:
        Health = 120.0f;
        AttackPower = 25.0f;
        ArmorClass = 10.0f;
        Speed = 1.5f;
        AggroRange = 400.0f;
        bIsAggressive = true;
        break;

    case EEnemyType::GoblinRanged:
        Health = 80.0f;
        AttackPower = 30.0f;
        ArmorClass = 5.0f;
        Speed = 1.8f;
        AggroRange = 600.0f; // Can engage from farther away
        bIsAggressive = true;
        break;

    case EEnemyType::GoblinMagic:
        Health = 90.0f;
        AttackPower = 35.0f; // High attack power
        ArmorClass = 7.0f;
        Speed = 1.2f;
        AggroRange = 700.0f; // Longer attack range
        bIsAggressive = true;
        break;

    case EEnemyType::GoblinTank:
        Health = 200.0f;  // High durability
        AttackPower = 20.0f;
        ArmorClass = 25.0f; // High defense
        Speed = 1.0f; // Slower movement
        AggroRange = 300.0f;
        bIsAggressive = true;
        break;

    case EEnemyType::GoblinBoss:
        Health = 500.0f;
        AttackPower = 50.0f;
        ArmorClass = 30.0f;
        Speed = 2.0f;
        AggroRange = 800.0f;
        bIsAggressive = true;
		bIsBossEnemy = true;
        break;

    default:
        UE_LOG(LogTemp, Error, TEXT("Enemy type not set! Using default values."));
        Health = 100.0f;
        AttackPower = 20.0f;
        ArmorClass = 10.0f;
        Speed = 1.5f;
        AggroRange = 400.0f;
        bIsAggressive = true;
        break;
    }

    UE_LOG(LogTemp, Warning, TEXT("Enemy Stats Set: %s | Health: %f | Attack: %f | Armor Class: %f"),
        *GetName(), Health, AttackPower, ArmorClass);
}







void AEnemy::OnAttributeModified(FString AttributeName, float Value)
{
    if (AttributeName == "Health")
    {
        Health += Value;
        Health = FMath::Max(Health, 0.0f); // Prevent negative health
    }
    else if (AttributeName == "AttackPower")
    {
        AttackPower += Value;
        AttackPower = FMath::Max(AttackPower, 1.0f); // Ensure attack power is always positive
    }
    else if (AttributeName == "ArmorClass")
    {
        ArmorClass += Value;
        ArmorClass = FMath::Max(ArmorClass, 0.0f);
    }
    else if (AttributeName == "Speed")
    {
        Speed += Value;
        Speed = FMath::Clamp(Speed, 0.5f, 3.0f); // Ensure speed stays within a reasonable range
    }

    UE_LOG(LogTemp, Warning, TEXT("%s modified attribute: %s by %f"), *GetName(), *AttributeName, Value);
}






int32 AEnemy::GetMoveRange() const
{
    int32 BaseRange = Super::GetMoveRange();

    // Boss enemies have enhanced mobility
    if (bIsBossEnemy)
    {
        return BaseRange + 2; // Bosses move farther
    }

    return BaseRange;
}





void AEnemy::BeginPlay()
{
    Super::BeginPlay(); // Calls AGameCharacter::BeginPlay()

    bIsEnemy = true; // Ensure the game recognizes this as an enemy

    // Set AI-related properties
    AggroRange = 400.0f;
    bIsAggressive = true;

    UE_LOG(LogTemp, Warning, TEXT("Enemy %s initialized with AggroRange: %f"), *GetName(), AggroRange);
}







void AEnemy::NotifyActorOnClicked(FKey ButtonPressed)
{
    Super::NotifyActorOnClicked(ButtonPressed);

    UE_LOG(LogTemp, Warning, TEXT("Enemy %s clicked"), *GetName());
}








void AEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}





void AEnemy::CalculateMovementRange(AGridTile* Tile)
{
    if (!Tile) return;

    // Start with the base calculation from AGameCharacter
    Super::CalculateMovementRange(Tile);

    // AI-based movement adjustments (future-proofing for different enemy types)
    if (EnemyType == EEnemyType::GoblinTank)
    {
        MovementRange = FMath::Max(1, MovementRange - 1); // Tanks move slower
    }

    UE_LOG(LogTemp, Warning, TEXT("Enemy Movement Range: %d"), MovementRange);
}








void AEnemy::MoveToTile(AGridTile* TargetTile)
{
    if (!TargetTile || MovementPoints <= 0) return;

    // Free the old tile if previously occupied
    if (OccupiedTile)
    {
        OccupiedTile->bIsOccupied = false;
        OccupiedTile->OccupyingUnit = nullptr; // Ensure previous tile is cleared
    }

    // Ensure the AI moves properly using pathfinding
    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, TargetTile->GetActorLocation());
    }
    else
    {
        // If no AI controller, fallback to direct movement
        SetActorLocation(TargetTile->GetActorLocation());
    }

    // Update occupied tile
    OccupiedTile = TargetTile;
    TargetTile->bIsOccupied = true;
    TargetTile->OccupyingUnit = this;

    // Deduct movement points
    MovementPoints--;

    UE_LOG(LogTemp, Warning, TEXT("%s moved to tile (%d, %d), Remaining MP: %d"),
        *GetName(), TargetTile->GridX, TargetTile->GridY, MovementPoints);

    // End movement phase if no MP left
    if (MovementPoints == 0)
    {
        CurrentTurnState = ETurnState::Waiting;
    }
}









void AEnemy::PerformAction()
{
    UE_LOG(LogTemp, Warning, TEXT("%s is deciding an action!"), *GetName());

    if (ActionPoints > 0)
    {
        AHero* ClosestHero = FindClosestHero();
        if (ClosestHero)
        {
            float Distance = FVector::Dist(GetActorLocation(), ClosestHero->GetActorLocation());

            if (Distance < 300.f) // If within attack range, attack
            {
                UE_LOG(LogTemp, Warning, TEXT("%s attacks %s!"), *GetName(), *ClosestHero->GetName());
                ActionPoints = 0;
            }
            else if (MovementPoints > 0) // Otherwise, move closer
            {
                UE_LOG(LogTemp, Warning, TEXT("%s moves toward %s!"), *GetName(), *ClosestHero->GetName());
                MoveTowards(ClosestHero);
                MovementPoints = 0;
            }
        }
    }
}






AHero* AEnemy::FindClosestHero()
{
    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("FindClosestHero: World is NULL!"));
        return nullptr;
    }

    AHero* ClosestHero = nullptr;
    float ClosestDistance = FLT_MAX;

    for (TActorIterator<AHero> It(World); It; ++It)
    {
        AHero* Hero = *It;
        if (Hero)
        {
            float Distance = FVector::Dist(GetActorLocation(), Hero->GetActorLocation());
            if (Distance < ClosestDistance)
            {
                ClosestDistance = Distance;
                ClosestHero = Hero;
            }
        }
    }

    return ClosestHero;
}






void AEnemy::MoveTowards(AHero* TargetHero)
{
    if (!TargetHero) return;

    FVector Direction = (TargetHero->GetActorLocation() - GetActorLocation()).GetSafeNormal();
    FVector TargetLocation = GetActorLocation() + Direction * 100.0f; // Adjust step size as needed

    GetCharacterMovement()->StopMovementImmediately();
    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, TargetLocation);
    }
    else
    {
        SetActorLocation(TargetLocation);
    }
}











    void AEnemy::SetPositionOnGrid(AGridTile* NewTile)
    {
        if (NewTile)
        {
            if (OccupiedTile)
            {
                OccupiedTile->bIsOccupied = false;
            }

            OccupiedTile = NewTile;
            NewTile->bIsOccupied = true;

            // Move enemy to the tile position
            SetActorLocation(NewTile->GetActorLocation() + FVector(0.f, 0.f, 50.f));
        }
    }







    UTexture2D* AEnemy::GetPortraitTexture() const
    {
        return UnitPortraitTexture;
    }
