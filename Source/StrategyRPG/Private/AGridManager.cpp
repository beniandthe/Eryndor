#include "AGridManager.h"
#include "GridTile.h"
#include "AGridUnit.h"
#include "AHero.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


AGridManager::AGridManager()
{
    PrimaryActorTick.bCanEverTick = false;
}







void AGridManager::BeginPlay()
{
    Super::BeginPlay();
    GenerateGrid();
}







/** Handles selecting a hero */
void AGridManager::SelectHero(AHero* Hero)
{
    if (Hero)
    {
        SelectedHero = Hero;
        HighlightValidMoves(Hero);
        UE_LOG(LogTemp, Warning, TEXT("Hero Selected: %s"), *Hero->GetName());

    }
}







void AGridManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}







void AGridManager::GenerateGrid()
{
    if (!GridTileClass)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: GridTileClass is NULL! Cannot spawn grid tiles."));
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: World is NULL! Cannot generate grid."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Clearing existing tiles..."));

    // Clear existing tiles
    for (AGridTile* Tile : GridTiles)
    {
        if (Tile)
        {
            Tile->Destroy();
        }
    }
    GridTiles.Empty();

    // Ensure grid size is valid before proceeding
    if (GridWidth <= 0 || GridHeight <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Invalid grid size! Width: %d, Height: %d"), GridWidth, GridHeight);
        return;
    }

    if (TileSize <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Invalid TileSize! Value: %f"), TileSize);
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Generating grid with size [%d x %d] and TileSize: %f"), GridWidth, GridHeight, TileSize);

    // Spawn the grid tiles
    int32 TileCount = 0;
    for (int32 X = 0; X < GridWidth; X++)
    {
        for (int32 Y = 0; Y < GridHeight; Y++)
        {
            FVector SpawnLocation = FVector(X * TileSize, Y * TileSize, 0.f);
            FRotator SpawnRotation = FRotator::ZeroRotator;

            AGridTile* NewTile = World->SpawnActor<AGridTile>(GridTileClass, SpawnLocation, SpawnRotation);

            if (NewTile)
            {
                NewTile->InitializeTile(X, Y, EGridTileType::Custom);
                GridTiles.Add(NewTile);
                TileCount++;
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("GenerateGrid: Failed to spawn tile at location (%d, %d)"), X, Y);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Successfully generated %d tiles."), TileCount);
}







void AGridManager::HighlightValidMoves(AHero* Hero)
{
    if (!bIsCombatActive || !Hero) return; // Only allow in combat

    // Clear previous move tiles
    ValidMoveTiles.Empty();

    // Get the hero’s position
    FVector HeroLocation = Hero->GetActorLocation();
    int32 HeroX = FMath::RoundToInt(HeroLocation.X / TileSize);
    int32 HeroY = FMath::RoundToInt(HeroLocation.Y / TileSize);

    // Identify valid movement tiles
    for (AGridTile* Tile : GridTiles)
    {
        int32 Distance = FMath::Abs(Tile->GridX - HeroX) + FMath::Abs(Tile->GridY - HeroY);
        if (Distance <= Hero->MovementRange && !Tile->bIsOccupied)
        {
            ValidMoveTiles.Add(Tile);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Found %d Valid Move Tiles"), ValidMoveTiles.Num());
}







void AGridManager::SelectUnit(AGridUnit* Unit)
{
    if (Unit)
    {
        SelectedUnit = Unit;
        // Additional logic for when a unit is selected
        UE_LOG(LogTemp, Warning, TEXT("Unit Selected: %s"), *Unit->GetName());
    }
}

/** Handle Tile Clicks */
void AGridManager::HandleTileSelection(AGridTile* SelectedTile)
{
    if (!SelectedTile || !SelectedHero) return;

    UE_LOG(LogTemp, Warning, TEXT("HandleTileSelection called for tile: %s"), *SelectedTile->GetName());

    // Check if tile is within valid moves
    if (ValidMoveTiles.Contains(SelectedTile))
    {
        UE_LOG(LogTemp, Warning, TEXT("Moving Hero to Tile: %s"), *SelectedTile->GetName());
        MoveHeroToTile(SelectedHero, SelectedTile);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Tile not in valid move range"));
    }
}






void AGridManager::MoveHeroToTile(AHero* Hero, AGridTile* TargetTile)
{
    if (!Hero || !TargetTile) return;

    // Allow movement in combat mode only
    if (bIsCombatActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("Executing MoveHeroToTile (Combat Mode)"));

        // Get the current tile of the hero
        AGridTile* CurrentTile = Hero->CurrentTile;

        // If there's a current tile, mark it as unoccupied
        if (CurrentTile)
        {
            CurrentTile->bIsOccupied = false;
        }

        // Update hero's reference to the new tile
        Hero->CurrentTile = TargetTile;
        TargetTile->bIsOccupied = true;

        FVector TargetLocation = TargetTile->GetActorLocation();

        // Manually rotate hero towards movement direction
        AController* LocalController = Hero->GetController();
        if (LocalController)
        {
            FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(Hero->GetActorLocation(), TargetLocation);
            Hero->SetActorRotation(FMath::RInterpTo(Hero->GetActorRotation(), LookAtRotation, GetWorld()->GetDeltaSeconds(), 4.0f));

            // Ensure character movement settings are correct
            Hero->bUseControllerRotationYaw = false;
            Hero->GetCharacterMovement()->bOrientRotationToMovement = false;
        }

        // Calculate movement cost and reduce stamina
        int32 Distance = FMath::Abs(TargetTile->GridX - Hero->CurrentTile->GridX) +
            FMath::Abs(TargetTile->GridY - Hero->CurrentTile->GridY);

        Hero->Stamina = FMath::Max(0.0f, Hero->Stamina - Distance);

        // Recalculate movement range dynamically
        Hero->CalculateMovementRange(TargetTile);

        // Move hero to target location
        Hero->SetActorLocation(TargetTile->GetActorLocation());
        Hero->CurrentTile = TargetTile;

        // **Use AI Navigation for Combat**
        if (LocalController)
        {
            UE_LOG(LogTemp, Warning, TEXT("AI Controller Found. Moving in Combat Mode..."));
            UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
            if (NavSystem)
            {
                LocalController->StopMovement();
                UAIBlueprintHelperLibrary::SimpleMoveToLocation(LocalController, TargetLocation);
                UE_LOG(LogTemp, Warning, TEXT("Movement Command Sent"));

                FVector MoveDirection = (TargetLocation - Hero->GetActorLocation()).GetSafeNormal();
                Hero->GetCharacterMovement()->Velocity = MoveDirection * Hero->GetCharacterMovement()->MaxWalkSpeed;

                TargetTile->SpawnFootprintsAlongPath(Hero, TargetTile);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("MoveHeroToTile called in Free Roam Mode - Using Click Movement"));
        Hero->MoveToLocation(TargetTile->GetActorLocation());
    }

    // Ensure smooth camera movement following the hero only if manually detached
    if (APlayerController* PC = Cast<APlayerController>(Hero->GetController()))
    {
        if (USpringArmComponent* CameraBoom = Hero->FindComponentByClass<USpringArmComponent>())
        {
            if (!Hero->bIsCameraDetached) // Only follow if camera hasn't been manually moved
            {
                FVector CameraTargetLocation = TargetTile->GetActorLocation() + FVector(0, 0, 300); // Adjust as needed
                CameraBoom->TargetArmLength = FMath::FInterpTo(CameraBoom->TargetArmLength, 1400.0f, GetWorld()->GetDeltaSeconds(), 5.0f);
                FVector NewCameraLocation = FMath::VInterpTo(CameraBoom->GetComponentLocation(), CameraTargetLocation, GetWorld()->GetDeltaSeconds(), 3.0f);
                CameraBoom->SetWorldLocation(NewCameraLocation);
            }
        }
    }
}











TArray<AGridTile*> AGridManager::GetValidMoves(AHero* Unit, int32 MoveRange)
{
    TArray<AGridTile*> ValidTiles;

    if (!Unit)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Unit is NULL!"));
        return ValidTiles;
    }

    if (!Unit->CurrentTile)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Unit->CurrentTile is NULL!"));
        return ValidTiles;
    }

    // Get the hero’s current position
    int32 UnitX = Unit->CurrentTile->GridX;
    int32 UnitY = Unit->CurrentTile->GridY;

    UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Calculating valid moves from (%d, %d) with range %d"), UnitX, UnitY, MoveRange);

    // Ensure GridTiles array is populated
    if (GridTiles.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GetValidMoves: GridTiles array is EMPTY!"));
        return ValidTiles;
    }

    int32 ValidTileCount = 0;

    // Iterate through all tiles to find valid moves
    for (AGridTile* Tile : GridTiles)
    {
        if (!Tile)
        {
            UE_LOG(LogTemp, Error, TEXT("GetValidMoves: Encountered NULL tile in GridTiles!"));
            continue;
        }

        UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Checking Tile (%d, %d)"), Tile->GridX, Tile->GridY);

        if (Tile->bIsOccupied)
        {
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Tile (%d, %d) is OCCUPIED"), Tile->GridX, Tile->GridY);
            continue;
        }

        if (!Tile->bIsWalkable)
        {
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Tile (%d, %d) is NOT WALKABLE"), Tile->GridX, Tile->GridY);
            continue;
        }

        // Manhattan Distance calculation
        int32 Distance = FMath::Abs(Tile->GridX - UnitX) + FMath::Abs(Tile->GridY - UnitY);

        UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Distance to Tile (%d, %d) = %d"), Tile->GridX, Tile->GridY, Distance);

        if (Distance <= MoveRange)
        {
            ValidTiles.Add(Tile);
            ValidTileCount++;
            UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Added Valid Move Tile (%d, %d)"), Tile->GridX, Tile->GridY);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GetValidMoves: Total Valid Move Tiles = %d"), ValidTileCount);

    return ValidTiles;
}








void AGridManager::StartCombat()
{
    bIsCombatActive = true;
    UE_LOG(LogTemp, Warning, TEXT("Combat Started! Grid-based movement enabled."));
}

void AGridManager::EndCombat()
{
	bIsCombatActive = false;
	UE_LOG(LogTemp, Warning, TEXT("Combat Ended! Grid-based movement disabled."));
}






#if WITH_EDITOR
void AGridManager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // Get the changed property name
    FName PropertyName = PropertyChangedEvent.GetPropertyName();

    // Check if the changed property is related to grid generation
    if (PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridWidth) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridHeight) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, TileSize))
    {
        GenerateGrid(); // Regenerate the grid when a property changes
    }
}
#endif



