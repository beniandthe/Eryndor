#pragma once

#include "CoreMinimal.h"
#include "AGameCharacter.h"
#include "EnemyType.h"
#include "GridTile.h"
#include "AHero.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class STRATEGYRPG_API AEnemy : public AGameCharacter
{
    GENERATED_BODY()

public:
    AEnemy();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

public:

    
    // Grid & Combat
    void MoveToTile(AGridTile* TargetTile);
    void TakeTurn();
    UFUNCTION(BlueprintCallable, Category = "AI") AHero* FindClosestHero();
    UFUNCTION(BlueprintCallable, Category = "AI") void MoveTowards(AHero* TargetHero);
    virtual void PerformAction() override;



    // Grid & Movement
    void SetPositionOnGrid(AGridTile* NewTile);
    void CalculateMovementRange(class AGridTile* Tile); 

   


    // AI Behavior Variables
    float AggroRange;
    bool bIsAggressive;
	bool bIsBossEnemy;
    
    


    // Turn Management
    int32 ActionPoints;
    int32 MovementPoints;
    ETurnState CurrentTurnState;



    // UI & Click Detection
    UTexture2D* GetPortraitTexture() const;
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;



    /** Enemy Type (Melee, Ranged, Magic, etc.) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
    EEnemyType EnemyType;
    // **Class-Specific Stats Calculation**
    
    virtual void CalculateClassSpecificStats() override;  //  Added function declaration

    // **Handles Attribute Modifications**
    
    virtual void OnAttributeModified(FString AttributeName, float Value) override;  // Added function declaration

	
	// Combat Stats
    
    virtual int32 GetMoveRange() const;





private:
    // Stores enemy's portrait texture
    
    UTexture2D* UnitPortraitTexture;

};

