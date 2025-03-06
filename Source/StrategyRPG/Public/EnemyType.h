#pragma once

#include "CoreMinimal.h"
#include "EnemyType.generated.h"

UENUM(BlueprintType)
enum class EEnemyType : uint8
{
    GoblinMelee     UMETA(DisplayName = "Goblin Fighter"),
    GoblinRanged    UMETA(DisplayName = "Goblin Archer"),
    GoblinMagic     UMETA(DisplayName = "Goblin Mage"),
    GoblinTank      UMETA(DisplayName = "Goblin Infantry"),
    GoblinBoss      UMETA(DisplayName = "Goblin Boss")
};

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle    UMETA(DisplayName = "Idle"),
	Patrol  UMETA(DisplayName = "Patrol"),
	Chase   UMETA(DisplayName = "Chase"),
	Attack  UMETA(DisplayName = "Attack"),
	Dead    UMETA(DisplayName = "Dead")
};

