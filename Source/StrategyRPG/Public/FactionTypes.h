#pragma once

#include "CoreMinimal.h"
#include "FactionTypes.generated.h"

UENUM(BlueprintType)
enum class EFaction : uint8
{
    None UMETA(DisplayName = "Lone Wolf"),
    Empire UMETA(DisplayName = "The Aurean Dominion"),
    Rebels UMETA(DisplayName = "The Crimson Pact"),
    Nomads UMETA(DisplayName = "The Wandering Tribes"),
    Mystics UMETA(DisplayName = "The Veiled Order"),
    Mercenaries UMETA(DisplayName = "The Ironbound Concord"),
};
