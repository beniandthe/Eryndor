// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AGridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGridManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_ATurnManager_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyType();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AGridManager Function EndCombat
struct Z_Construct_UFunction_AGridManager_EndCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_EndCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "EndCombat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_EndCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_EndCombat_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_EndCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_EndCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execEndCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCombat();
	P_NATIVE_END;
}
// End Class AGridManager Function EndCombat

// Begin Class AGridManager Function FindTileAtLocation
struct Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics
{
	struct GridManager_eventFindTileAtLocation_Parms
	{
		FVector Location;
		AGridTile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventFindTileAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventFindTileAtLocation_Parms, ReturnValue), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "FindTileAtLocation", nullptr, nullptr, Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::GridManager_eventFindTileAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::GridManager_eventFindTileAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_FindTileAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_FindTileAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execFindTileAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridTile**)Z_Param__Result=P_THIS->FindTileAtLocation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class AGridManager Function FindTileAtLocation

// Begin Class AGridManager Function GenerateGrid
struct Z_Construct_UFunction_AGridManager_GenerateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generates the grid */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates the grid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GenerateGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_GenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGenerateGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGrid();
	P_NATIVE_END;
}
// End Class AGridManager Function GenerateGrid

// Begin Class AGridManager Function GetAdjacentTiles
struct Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics
{
	struct GridManager_eventGetAdjacentTiles_Parms
	{
		AGridTile* CenterTile;
		TArray<AGridTile*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tile Utilities */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile Utilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterTile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_CenterTile = { "CenterTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAdjacentTiles_Parms, CenterTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAdjacentTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_CenterTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetAdjacentTiles", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::GridManager_eventGetAdjacentTiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::GridManager_eventGetAdjacentTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetAdjacentTiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetAdjacentTiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetAdjacentTiles)
{
	P_GET_OBJECT(AGridTile,Z_Param_CenterTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AGridTile*>*)Z_Param__Result=P_THIS->GetAdjacentTiles(Z_Param_CenterTile);
	P_NATIVE_END;
}
// End Class AGridManager Function GetAdjacentTiles

// Begin Class AGridManager Function GetTileAt
struct Z_Construct_UFunction_AGridManager_GetTileAt_Statics
{
	struct GridManager_eventGetTileAt_Parms
	{
		int32 X;
		int32 Y;
		AGridTile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetTileAt_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetTileAt_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetTileAt_Parms, ReturnValue), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetTileAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetTileAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetTileAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetTileAt", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetTileAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetTileAt_Statics::GridManager_eventGetTileAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetTileAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetTileAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetTileAt_Statics::GridManager_eventGetTileAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetTileAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetTileAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetTileAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridTile**)Z_Param__Result=P_THIS->GetTileAt(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class AGridManager Function GetTileAt

// Begin Class AGridManager Function GetValidMoves
struct Z_Construct_UFunction_AGridManager_GetValidMoves_Statics
{
	struct GridManager_eventGetValidMoves_Parms
	{
		AHero* Unit;
		int32 MoveRange;
		TArray<AGridTile*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds valid movement tiles for a hero */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds valid movement tiles for a hero" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetValidMoves_Parms, Unit), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_MoveRange = { "MoveRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetValidMoves_Parms, MoveRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetValidMoves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_Unit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_MoveRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetValidMoves", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::GridManager_eventGetValidMoves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::GridManager_eventGetValidMoves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetValidMoves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetValidMoves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetValidMoves)
{
	P_GET_OBJECT(AHero,Z_Param_Unit);
	P_GET_PROPERTY(FIntProperty,Z_Param_MoveRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AGridTile*>*)Z_Param__Result=P_THIS->GetValidMoves(Z_Param_Unit,Z_Param_MoveRange);
	P_NATIVE_END;
}
// End Class AGridManager Function GetValidMoves

// Begin Class AGridManager Function HandleTileSelection
struct Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics
{
	struct GridManager_eventHandleTileSelection_Parms
	{
		AGridTile* SelectedTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles tile selection */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles tile selection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::NewProp_SelectedTile = { "SelectedTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHandleTileSelection_Parms, SelectedTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::NewProp_SelectedTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "HandleTileSelection", nullptr, nullptr, Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::GridManager_eventHandleTileSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::GridManager_eventHandleTileSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_HandleTileSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_HandleTileSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execHandleTileSelection)
{
	P_GET_OBJECT(AGridTile,Z_Param_SelectedTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTileSelection(Z_Param_SelectedTile);
	P_NATIVE_END;
}
// End Class AGridManager Function HandleTileSelection

// Begin Class AGridManager Function HighlightValidMoves
struct Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics
{
	struct GridManager_eventHighlightValidMoves_Parms
	{
		AHero* Hero;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Highlights valid movement tiles */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Highlights valid movement tiles" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::NewProp_Hero = { "Hero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHighlightValidMoves_Parms, Hero), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::NewProp_Hero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "HighlightValidMoves", nullptr, nullptr, Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::GridManager_eventHighlightValidMoves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::GridManager_eventHighlightValidMoves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_HighlightValidMoves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_HighlightValidMoves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execHighlightValidMoves)
{
	P_GET_OBJECT(AHero,Z_Param_Hero);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightValidMoves(Z_Param_Hero);
	P_NATIVE_END;
}
// End Class AGridManager Function HighlightValidMoves

// Begin Class AGridManager Function MoveHeroToTile
struct Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics
{
	struct GridManager_eventMoveHeroToTile_Parms
	{
		AHero* Hero;
		AGridTile* TargetTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Moves the hero to the specified tile */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves the hero to the specified tile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hero;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::NewProp_Hero = { "Hero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventMoveHeroToTile_Parms, Hero), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::NewProp_TargetTile = { "TargetTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventMoveHeroToTile_Parms, TargetTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::NewProp_Hero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::NewProp_TargetTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "MoveHeroToTile", nullptr, nullptr, Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::GridManager_eventMoveHeroToTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::GridManager_eventMoveHeroToTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_MoveHeroToTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_MoveHeroToTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execMoveHeroToTile)
{
	P_GET_OBJECT(AHero,Z_Param_Hero);
	P_GET_OBJECT(AGridTile,Z_Param_TargetTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveHeroToTile(Z_Param_Hero,Z_Param_TargetTile);
	P_NATIVE_END;
}
// End Class AGridManager Function MoveHeroToTile

// Begin Class AGridManager Function SelectHero
struct Z_Construct_UFunction_AGridManager_SelectHero_Statics
{
	struct GridManager_eventSelectHero_Parms
	{
		AHero* Hero;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles selecting a hero */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles selecting a hero" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_SelectHero_Statics::NewProp_Hero = { "Hero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSelectHero_Parms, Hero), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SelectHero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SelectHero_Statics::NewProp_Hero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectHero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SelectHero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SelectHero", nullptr, nullptr, Z_Construct_UFunction_AGridManager_SelectHero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectHero_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SelectHero_Statics::GridManager_eventSelectHero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectHero_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SelectHero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SelectHero_Statics::GridManager_eventSelectHero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SelectHero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SelectHero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSelectHero)
{
	P_GET_OBJECT(AHero,Z_Param_Hero);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectHero(Z_Param_Hero);
	P_NATIVE_END;
}
// End Class AGridManager Function SelectHero

// Begin Class AGridManager Function SpawnEnemyUnit
struct Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics
{
	struct GridManager_eventSpawnEnemyUnit_Parms
	{
		EEnemyType EnemyType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enemy Spawning */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemy Spawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSpawnEnemyUnit_Parms, EnemyType), Z_Construct_UEnum_StrategyRPG_EEnemyType, METADATA_PARAMS(0, nullptr) }; // 4139264143
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::NewProp_EnemyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::NewProp_EnemyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SpawnEnemyUnit", nullptr, nullptr, Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::GridManager_eventSpawnEnemyUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::GridManager_eventSpawnEnemyUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SpawnEnemyUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SpawnEnemyUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSpawnEnemyUnit)
{
	P_GET_ENUM(EEnemyType,Z_Param_EnemyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemyUnit(EEnemyType(Z_Param_EnemyType));
	P_NATIVE_END;
}
// End Class AGridManager Function SpawnEnemyUnit

// Begin Class AGridManager Function StartCombat
struct Z_Construct_UFunction_AGridManager_StartCombat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_StartCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "StartCombat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_StartCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_StartCombat_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_StartCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_StartCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execStartCombat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCombat();
	P_NATIVE_END;
}
// End Class AGridManager Function StartCombat

// Begin Class AGridManager
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCombat", &AGridManager::execEndCombat },
		{ "FindTileAtLocation", &AGridManager::execFindTileAtLocation },
		{ "GenerateGrid", &AGridManager::execGenerateGrid },
		{ "GetAdjacentTiles", &AGridManager::execGetAdjacentTiles },
		{ "GetTileAt", &AGridManager::execGetTileAt },
		{ "GetValidMoves", &AGridManager::execGetValidMoves },
		{ "HandleTileSelection", &AGridManager::execHandleTileSelection },
		{ "HighlightValidMoves", &AGridManager::execHighlightValidMoves },
		{ "MoveHeroToTile", &AGridManager::execMoveHeroToTile },
		{ "SelectHero", &AGridManager::execSelectHero },
		{ "SpawnEnemyUnit", &AGridManager::execSpawnEnemyUnit },
		{ "StartCombat", &AGridManager::execStartCombat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::StaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGridManager.h" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grid settings */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of tiles in width\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tiles in width" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of tiles in height\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of tiles in height" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridTileClass_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance between tiles\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance between tiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridTiles_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The tile to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tile to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnit_MetaData[] = {
		{ "Category", "Unit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The currently selected unit */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The currently selected unit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHero_MetaData[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The currently selected hero */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The currently selected hero" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidMoveTiles_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCombatActive_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Combat Mode */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Turn Manager Reference */" },
#endif
		{ "ModuleRelativePath", "Public/AGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn Manager Reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoblinMeleeEnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoblinRangedEnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoblinMagicEnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoblinTankEnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoblinBossEnemyClass_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/AGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridTileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedHero;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidMoveTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidMoveTiles;
	static void NewProp_bIsCombatActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCombatActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoblinMeleeEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoblinRangedEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoblinMagicEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoblinTankEnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoblinBossEnemyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_EndCombat, "EndCombat" }, // 1814709917
		{ &Z_Construct_UFunction_AGridManager_FindTileAtLocation, "FindTileAtLocation" }, // 4212980029
		{ &Z_Construct_UFunction_AGridManager_GenerateGrid, "GenerateGrid" }, // 1901740235
		{ &Z_Construct_UFunction_AGridManager_GetAdjacentTiles, "GetAdjacentTiles" }, // 2338184442
		{ &Z_Construct_UFunction_AGridManager_GetTileAt, "GetTileAt" }, // 373640220
		{ &Z_Construct_UFunction_AGridManager_GetValidMoves, "GetValidMoves" }, // 3656469206
		{ &Z_Construct_UFunction_AGridManager_HandleTileSelection, "HandleTileSelection" }, // 3614714397
		{ &Z_Construct_UFunction_AGridManager_HighlightValidMoves, "HighlightValidMoves" }, // 3050622611
		{ &Z_Construct_UFunction_AGridManager_MoveHeroToTile, "MoveHeroToTile" }, // 3910739066
		{ &Z_Construct_UFunction_AGridManager_SelectHero, "SelectHero" }, // 2367155386
		{ &Z_Construct_UFunction_AGridManager_SpawnEnemyUnit, "SpawnEnemyUnit" }, // 2089152102
		{ &Z_Construct_UFunction_AGridManager_StartCombat, "StartCombat" }, // 2575940222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridTileClass = { "GridTileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridTileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridTileClass_MetaData), NewProp_GridTileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridTiles_Inner = { "GridTiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridTiles = { "GridTiles", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridTiles_MetaData), NewProp_GridTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, SelectedUnit), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_SelectedHero = { "SelectedHero", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, SelectedHero), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHero_MetaData), NewProp_SelectedHero_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_ValidMoveTiles_Inner = { "ValidMoveTiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_ValidMoveTiles = { "ValidMoveTiles", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, ValidMoveTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidMoveTiles_MetaData), NewProp_ValidMoveTiles_MetaData) };
void Z_Construct_UClass_AGridManager_Statics::NewProp_bIsCombatActive_SetBit(void* Obj)
{
	((AGridManager*)Obj)->bIsCombatActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_bIsCombatActive = { "bIsCombatActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridManager), &Z_Construct_UClass_AGridManager_Statics::NewProp_bIsCombatActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCombatActive_MetaData), NewProp_bIsCombatActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, TurnManager), Z_Construct_UClass_ATurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinMeleeEnemyClass = { "GoblinMeleeEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GoblinMeleeEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoblinMeleeEnemyClass_MetaData), NewProp_GoblinMeleeEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinRangedEnemyClass = { "GoblinRangedEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GoblinRangedEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoblinRangedEnemyClass_MetaData), NewProp_GoblinRangedEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinMagicEnemyClass = { "GoblinMagicEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GoblinMagicEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoblinMagicEnemyClass_MetaData), NewProp_GoblinMagicEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinTankEnemyClass = { "GoblinTankEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GoblinTankEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoblinTankEnemyClass_MetaData), NewProp_GoblinTankEnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinBossEnemyClass = { "GoblinBossEnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GoblinBossEnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoblinBossEnemyClass_MetaData), NewProp_GoblinBossEnemyClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridTileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_SelectedUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_SelectedHero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_ValidMoveTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_ValidMoveTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_bIsCombatActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinMeleeEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinRangedEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinMagicEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinTankEnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GoblinBossEnemyClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGridManager>()
{
	return AGridManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// End Class AGridManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 1067733970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_250501291(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
