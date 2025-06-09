#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Engine/World.h"
#include "Components/DecalComponent.h"
#include "GameFramework/Character.h"
#include "AGameCharacter.generated.h"

class AGridManager; 
class AGridTile;

UENUM(BlueprintType)
enum class ETurnState : uint8
{
    Waiting    UMETA(DisplayName = "Waiting"),
    Moving     UMETA(DisplayName = "Moving"),
    Attacking  UMETA(DisplayName = "Attacking"),
    Ended      UMETA(DisplayName = "Turn Ended")
};

UCLASS()
class STRATEGYRPG_API AGameCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AGameCharacter();


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AggroRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    bool bIsEnemy = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	bool bIsAggressive = false;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn")
    ETurnState CurrentTurnState;

    /** Whether the hero is in combat */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    bool bIsCombatActive;




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
    int32 Leadership;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Diplomacy;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Tactics;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Willpower;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Stealth;

    // Universal Attributes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float ArmorClass; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float Speed; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn")
    int32 ActionPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turn")
    int32 MovementPoints;

    float Initiative;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
    float EquippedArmorWeight;

    UFUNCTION(BlueprintCallable, Category = "Equipment")
    void SetEquippedArmorWeight(float Weight);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
    bool bUsesArmorWeight = true; 


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 MovementRange;





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




    /** World Occupation*/
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void SetPositionOnGrid(AGridTile* NewTile);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    void MoveToTile(AGridTile* TargetTile);

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grid")
    AGridTile* OccupiedTile;

    /** Assigns the character to a new grid tile */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void SetCurrentTile(AGridTile* NewTile);

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grid") AGridTile* CurrentTile;

   




    /** Utility Functions */

    UFUNCTION(BlueprintCallable, Category = "Stats")
    void ModifyAttribute(FString AttributeName, int32 Value);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void CheckForEnemiesNearby();






	/** Combat Actions */
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void Attack(AGameCharacter* Target);

    UFUNCTION(BlueprintCallable, Category = "Turn")
    void EndTurn();

    UFUNCTION(BlueprintCallable, Category = "Stats")
    void CalculateMovementRange(AGridTile* Tile);

    UFUNCTION(BlueprintCallable, Category = "AI")
    void TakeTurn();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    virtual void PerformAction();







    // Stats & Movement
    UFUNCTION(BlueprintCallable, Category = "Stats")
    virtual void CalculateDerivedStats();
    UFUNCTION(BlueprintCallable, Category = "Stats")
    virtual void CalculateClassSpecificStats();
    UFUNCTION(BlueprintCallable, Category = "Stats")
    virtual void OnAttributeModified(FString AttributeName, float Value);
    UFUNCTION(BlueprintCallable, Category = "Stats")
    virtual int32 GetMoveRange() const;







    /** UI & Interaction */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;

    UFUNCTION(BlueprintPure, Category = "UI")
    UTexture2D* GetPortraitTexture() const;

    /** Reference to Character Portrait */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    UTexture2D* CharacterPortraitTexture;







protected:
     virtual void BeginPlay() override;

     virtual void Tick(float DeltaTime) override;

     UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
     UTexture2D* UnitPortraitTexture;

     /** Reference to the Grid Manager */
     UPROPERTY()
     AGridManager* GridManager;
};

