#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FactionTypes.h"
#include "HeroTypes.h"
#include "GridTile.h"
#include "AHero.generated.h"

class AGridManager;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class STRATEGYRPG_API AHero : public ACharacter
{
    GENERATED_BODY()

private:
	APlayerController* PlayerController;    

    float ZoomLevel;
    FRotator CameraRotation;
    UCameraComponent* HeroCamera;

public:
    AHero();
    void MoveFreely(FVector Destination);


protected:
    virtual void BeginPlay() override;

    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

    /** Assign the Input Mapping Context (IMC) in Blueprint */
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* HeroMappingContext;

    /** Assign the Input Action (IA_MoveClick) in Blueprint */
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* MoveClickAction;


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

    
    /** Click Event for Selection */
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;

    /** Movement Handling */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void MoveToTile(AGridTile* TargetTile);

    /** Hero's Current Grid Position */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Grid")
    AGridTile* CurrentTile;

    /** Reference to Grid Manager */
    UPROPERTY()
    AGridManager* GridManager;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	void SetCurrentTile(AGridTile* NewTile);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 MovementRange;

    int32 GetMoveRange() const;

    UFUNCTION(BlueprintCallable, Category = "Stats")
    void CalculateMovementRange(AGridTile* Tile);

    // Armor Weight (Affects movement speed)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment")
    float EquippedArmorWeight;

	UFUNCTION(BlueprintCallable, Category = "Equipment")
	void SetEquippedArmorWeight(float Weight);
    
    // Camera Boom (Spring Arm) for smooth camera movement
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USpringArmComponent* CameraBoom;

    // Follow Camera
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveHeroFree(FVector MoveDirection);

    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToMouseClick();

    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToLocation(FVector TargetLocation);

    /** Whether the hero is in combat */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    bool bIsCombatActive;

    // Camera Zoom Variables
    float MinZoom;
    float MaxZoom;
    float ZoomSpeed;

    // Camera Rotation Variables
    bool bIsRotatingCamera;
    FVector2D LastMousePosition;

    virtual void Tick(float DeltaTime) override;

    // Input functions
    void CameraZoom(const FInputActionValue& Value);
    void CameraRotate(const FInputActionValue& Value);
    
    /** Input actions */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* IA_CameraZoom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* IA_CameraRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* IA_CameraMove;
	
	void MoveCamera(const FInputActionValue& Value);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraMoveSpeed;

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void ResetCamera();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraRotationSpeed;

    UPROPERTY(BlueprintReadWrite, Category = "Camera")
    bool bIsCameraDetached = false;  // True when camera is freely moving

	UPROPERTY(BlueprintReadWrite, Category = "Camera")
	bool bCameraFollowsHero = true;  // True when camera follows hero

};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   

