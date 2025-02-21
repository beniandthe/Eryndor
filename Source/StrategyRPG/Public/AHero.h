#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FactionTypes.h"
#include "HeroTypes.h"
#include "GridTile.h"
#include "AHero.generated.h"

UCLASS()
class STRATEGYRPG_API AHero : public ACharacter
{
    GENERATED_BODY()

public:
    AHero();

protected:
    virtual void BeginPlay() override;

public:
    /** Primary Attributes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Strength;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Dexterity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Intelligence;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Endurance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Charisma;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Perception;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Luck;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Faith;

    /** Derived Stats */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Health;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Stamina;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Essence;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float LightEssence;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float DarkEssence;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Leadership;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Diplomacy;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Tactics;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Willpower;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Stealth;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Initiative;

    /** Combat Stats */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Evasion; // Chance to avoid attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float CriticalChance; // Chance to land a critical hit

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float MagicResistance; // Resistance against magic attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float PhysicalResistance; // Resistance against physical attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float AttackPower; // Base physical attack damage

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float SpellPower; // Base magical attack power

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float CriticalDamage; // Determines critical hit multiplier

    /** Utility Functions */
    UFUNCTION(BlueprintCallable, Category = "Stats")
    void CalculateDerivedStats();

    UFUNCTION(BlueprintCallable, Category = "Stats")
    void ModifyAttribute(FString AttributeName, int32 Value);

    /** Morality System */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Morality")
    float LightEssenceThreshold; // Determines Light skill unlocks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Morality")
    float DarkEssenceThreshold; // Determines Dark skill unlocks

    /** Hero's Faction */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Faction")
    EFaction Faction;

    /** Hero's Race */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    ERace Race;

    /** Hero's Class */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
    EHeroClass HeroClass;

    /** Sets the hero's current tile */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void SetCurrentTile(AGridTile* NewTile);

    /** Current Grid Tile Reference */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
    AGridTile* CurrentTile;

    /** Movement Function */
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToTile(AGridTile* TargetTile);
};

