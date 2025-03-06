#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "AGameCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FactionTypes.h"
#include "HeroTypes.h"
#include "GridTile.h"
#include "AHero.generated.h"


class USpringArmComponent;
class UCameraComponent;


UCLASS()
class STRATEGYRPG_API AHero : public AGameCharacter
{
    GENERATED_BODY()

public:
    AHero();

private:
	APlayerController* PlayerController;    
    float ZoomLevel;
    FRotator CameraRotation;
    UCameraComponent* HeroCamera;

public:
    
    /** Input handling */
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputMappingContext* HeroMappingContext;
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    UInputAction* MoveClickAction;




    /** Grid Interaction*/
    void SetCurrentTile(AGridTile* NewTile);






    /** Camera Components */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USpringArmComponent* CameraBoom;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* FollowCamera;

    
    
    
    
    
    
    
    
    /** Camera Movement */
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToMouseClick();

    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveToLocation(FVector TargetLocation);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraMoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
    float CameraRotationSpeed;






    /** camera control */
    void CameraZoom(const FInputActionValue& Value);
    
    void CameraRotate(const FInputActionValue& Value);

    void MoveCamera(const FInputActionValue& Value);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* IA_CameraZoom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* IA_CameraRotate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    UInputAction* IA_CameraMove;

    UFUNCTION(BlueprintCallable, Category = "Camera")
    void ResetCamera();

    





    /** Combat */
    void CheckForEnemiesNearby();
    
    UFUNCTION(BlueprintCallable, Category = "Turn") void SelectAction(ETurnState Action);







    /** Turn Management */
    void Attack(AGameCharacter* Target);
    
    void EndTurn();

    




	/** Movement Handling */
	void MoveToTile(AGridTile* TargetTile);

    UFUNCTION(BlueprintCallable, Category = "Movement")
    void MoveFreely(FVector Destination, bool bIsMouseClick = false);

    
    virtual int32 GetMoveRange() const;
    
    void CalculateMovementRange(AGridTile* Tile);
    
    virtual void PerformAction();
    
    
    
    
    
    /** Unique Attributes */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float LightEssence;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float DarkEssence;

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




    /** Attribute Modification */
	
    void ModifyAttribute(FString AttributeName, int32 Value);
    virtual void OnAttributeModified(FString AttributeName, float Value) override;
    
    virtual void CalculateClassSpecificStats() override;

    

    

    /** Click Detection*/
    virtual void NotifyActorOnClicked(FKey ButtonPressed) override;



    // Camera Zoom Variables
    float MinZoom;
    float MaxZoom;
    float ZoomSpeed;

    // Camera Rotation Variables
    bool bIsRotatingCamera;
    FVector2D LastMousePosition;


    

    
    UPROPERTY(BlueprintReadWrite, Category = "Camera")
    bool bIsCameraDetached = false;  // True when camera is freely moving

    UPROPERTY(BlueprintReadWrite, Category = "Camera")
    bool bCameraFollowsHero = true;  // True when camera follows hero



protected:

    virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   

