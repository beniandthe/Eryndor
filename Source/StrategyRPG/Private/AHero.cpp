#include "AHero.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

AHero::AHero()
{
    PrimaryActorTick.bCanEverTick = true;

    // Default Attribute Values
    Strength = 10;
    Dexterity = 10;
    Intelligence = 10;
    Endurance = 10;
    Charisma = 10;
    Perception = 10;
    Luck = 10;
    Faith = 10;

    // Derived Stats Initialization
    CalculateDerivedStats();
}

void AHero::BeginPlay()
{
    Super::BeginPlay();
    CalculateDerivedStats();
}

void AHero::CalculateDerivedStats()
{
    // Health, Stamina, and Essence Scaling
    Health = Endurance * 12.0f;      // More endurance = more HP
    Stamina = Endurance * 6.0f;      // More endurance = more stamina
    Essence = Intelligence * 8.0f;   // More intelligence = more essence

    // Leadership & Tactical Abilities
    Leadership = Charisma * 2;
    Diplomacy = Charisma + Perception;
    Tactics = Intelligence + Perception;
    Willpower = Intelligence + Endurance;
    Stealth = Dexterity + Perception;

    // Initiative Calculation
    Initiative = Dexterity * 2.0f;
    Initiative += Initiative * (Tactics * 0.02f); // Bonus from Tactics

    // Evasion & Critical Hit Calculations
    Evasion = Dexterity * 1.5f + Luck * 0.5f;
    CriticalChance = Luck * 1.5f + Perception * 0.5f;
    CriticalDamage = 150.0f + (Luck * 1.5f); // Default crits do 150% damage

    // Resistances
    MagicResistance = Intelligence * 1.2f + Faith * 0.8f;
    PhysicalResistance = Endurance * 1.5f;

    // Offensive Stats
    AttackPower = Strength * 2.0f;
    SpellPower = Intelligence * 2.5f;

    // Morality-Based Essence Pools
    LightEssence = FMath::Clamp(Faith * 2.0f - DarkEssenceThreshold, 0.0f, 100.0f);
    DarkEssence = FMath::Clamp(Faith * 2.0f - LightEssenceThreshold, 0.0f, 100.0f);
}

void AHero::ModifyAttribute(FString AttributeName, int32 Value)
{
    if (AttributeName == "Strength") Strength += Value;
    else if (AttributeName == "Dexterity") Dexterity += Value;
    else if (AttributeName == "Intelligence") Intelligence += Value;
    else if (AttributeName == "Endurance") Endurance += Value;
    else if (AttributeName == "Charisma") Charisma += Value;
    else if (AttributeName == "Perception") Perception += Value;
    else if (AttributeName == "Luck") Luck += Value;
    else if (AttributeName == "Faith") Faith += Value;

    CalculateDerivedStats();
}

void AHero::MoveToTile(AGridTile* TargetTile)
{
    if (!TargetTile) return;

    CurrentTile = TargetTile;
    FVector MoveLocation = TargetTile->GetActorLocation();
    SetActorLocation(MoveLocation);
}

void AHero::SetCurrentTile(AGridTile* NewTile)
{
    if (NewTile)
    {
        CurrentTile = NewTile;
        SetActorLocation(NewTile->GetActorLocation());
    }
}
