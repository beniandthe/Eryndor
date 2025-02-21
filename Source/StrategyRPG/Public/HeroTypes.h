#pragma once

#include "CoreMinimal.h"
#include "HeroTypes.generated.h"

/** Hero Races */
UENUM(BlueprintType)
enum class ERace : uint8
{
    Human UMETA(DisplayName = "Human"),
    Orc UMETA(DisplayName = "Orc"),
    Elf UMETA(DisplayName = "Elf"),
    Drow UMETA(DisplayName = "Drow"),
    Halfling UMETA(DisplayName = "Halfling"),
    Dragonborn UMETA(DisplayName = "Dragonborn"),
};

/** Hero Classes */
UENUM(BlueprintType)
enum class EHeroClass : uint8
{
    Warrior UMETA(DisplayName = "Warrior"),
    Mage UMETA(DisplayName = "Mage"),
	Barabarian UMETA(DisplayName = "Barabarian"),
    Rogue UMETA(DisplayName = "Rogue"),
    Paladin UMETA(DisplayName = "Paladin"),
    Ranger UMETA(DisplayName = "Ranger"),
    Necromancer UMETA(DisplayName = "Necromancer"),
};

