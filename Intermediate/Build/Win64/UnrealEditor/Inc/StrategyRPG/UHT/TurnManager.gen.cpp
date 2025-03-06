// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/TurnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_ATurnManager();
STRATEGYRPG_API UClass* Z_Construct_UClass_ATurnManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class ATurnManager Function GetCurrentUnit
struct Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics
{
	struct TurnManager_eventGetCurrentUnit_Parms
	{
		AGameCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current unit's turn **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current unit's turn *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventGetCurrentUnit_Parms, ReturnValue), Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnManager, nullptr, "GetCurrentUnit", nullptr, nullptr, Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::TurnManager_eventGetCurrentUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::TurnManager_eventGetCurrentUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnManager_GetCurrentUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnManager_GetCurrentUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnManager::execGetCurrentUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGameCharacter**)Z_Param__Result=P_THIS->GetCurrentUnit();
	P_NATIVE_END;
}
// End Class ATurnManager Function GetCurrentUnit

// Begin Class ATurnManager Function GetUnitPortrait
struct Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics
{
	struct TurnManager_eventGetUnitPortrait_Parms
	{
		int32 Index;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns unit portrait for a given index **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns unit portrait for a given index *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventGetUnitPortrait_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventGetUnitPortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnManager, nullptr, "GetUnitPortrait", nullptr, nullptr, Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::TurnManager_eventGetUnitPortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::TurnManager_eventGetUnitPortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnManager_GetUnitPortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnManager_GetUnitPortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnManager::execGetUnitPortrait)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetUnitPortrait(Z_Param_Index);
	P_NATIVE_END;
}
// End Class ATurnManager Function GetUnitPortrait

// Begin Class ATurnManager Function InitializeTurnOrder
struct Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics
{
	struct TurnManager_eventInitializeTurnOrder_Parms
	{
		TArray<AGameCharacter*> Combatants;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initializes turn order **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes turn order *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Combatants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Combatants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Combatants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::NewProp_Combatants_Inner = { "Combatants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::NewProp_Combatants = { "Combatants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventInitializeTurnOrder_Parms, Combatants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combatants_MetaData), NewProp_Combatants_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::NewProp_Combatants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::NewProp_Combatants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnManager, nullptr, "InitializeTurnOrder", nullptr, nullptr, Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::TurnManager_eventInitializeTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::TurnManager_eventInitializeTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnManager_InitializeTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnManager_InitializeTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnManager::execInitializeTurnOrder)
{
	P_GET_TARRAY_REF(AGameCharacter*,Z_Param_Out_Combatants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTurnOrder(Z_Param_Out_Combatants);
	P_NATIVE_END;
}
// End Class ATurnManager Function InitializeTurnOrder

// Begin Class ATurnManager Function NextTurn
struct Z_Construct_UFunction_ATurnManager_NextTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Moves to the next turn **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves to the next turn *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnManager_NextTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnManager, nullptr, "NextTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_NextTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnManager_NextTurn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATurnManager_NextTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnManager_NextTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnManager::execNextTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextTurn();
	P_NATIVE_END;
}
// End Class ATurnManager Function NextTurn

// Begin Class ATurnManager Function StartCombat
struct Z_Construct_UFunction_ATurnManager_StartCombat_Statics
{
	struct TurnManager_eventStartCombat_Parms
	{
		AGridManager* GridManagerRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts combat by retrieving all units and initializing turn order **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts combat by retrieving all units and initializing turn order *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManagerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATurnManager_StartCombat_Statics::NewProp_GridManagerRef = { "GridManagerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnManager_eventStartCombat_Parms, GridManagerRef), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATurnManager_StartCombat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATurnManager_StartCombat_Statics::NewProp_GridManagerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_StartCombat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurnManager_StartCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurnManager, nullptr, "StartCombat", nullptr, nullptr, Z_Construct_UFunction_ATurnManager_StartCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_StartCombat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATurnManager_StartCombat_Statics::TurnManager_eventStartCombat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATurnManager_StartCombat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATurnManager_StartCombat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATurnManager_StartCombat_Statics::TurnManager_eventStartCombat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATurnManager_StartCombat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATurnManager_StartCombat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATurnManager::execStartCombat)
{
	P_GET_OBJECT(AGridManager,Z_Param_GridManagerRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCombat(Z_Param_GridManagerRef);
	P_NATIVE_END;
}
// End Class ATurnManager Function StartCombat

// Begin Class ATurnManager
void ATurnManager::StaticRegisterNativesATurnManager()
{
	UClass* Class = ATurnManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentUnit", &ATurnManager::execGetCurrentUnit },
		{ "GetUnitPortrait", &ATurnManager::execGetUnitPortrait },
		{ "InitializeTurnOrder", &ATurnManager::execInitializeTurnOrder },
		{ "NextTurn", &ATurnManager::execNextTurn },
		{ "StartCombat", &ATurnManager::execStartCombat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurnManager);
UClass* Z_Construct_UClass_ATurnManager_NoRegister()
{
	return ATurnManager::StaticClass();
}
struct Z_Construct_UClass_ATurnManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TurnManager.h" },
		{ "ModuleRelativePath", "Public/TurnManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to Grid Manager **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to Grid Manager *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of all units in combat **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of all units in combat *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnIndex_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the current unit's turn **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the current unit's turn *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UI Widget Reference **/" },
#endif
		{ "ModuleRelativePath", "Public/TurnManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Widget Reference *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTurnIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TurnOrderWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurnManager_GetCurrentUnit, "GetCurrentUnit" }, // 3255075208
		{ &Z_Construct_UFunction_ATurnManager_GetUnitPortrait, "GetUnitPortrait" }, // 2559605992
		{ &Z_Construct_UFunction_ATurnManager_InitializeTurnOrder, "InitializeTurnOrder" }, // 957155021
		{ &Z_Construct_UFunction_ATurnManager_NextTurn, "NextTurn" }, // 2087605918
		{ &Z_Construct_UFunction_ATurnManager_StartCombat, "StartCombat" }, // 3943565540
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnManager, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnManager, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_CurrentTurnIndex = { "CurrentTurnIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnManager, CurrentTurnIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnIndex_MetaData), NewProp_CurrentTurnIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrderWidgetClass = { "TurnOrderWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnManager, TurnOrderWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidgetClass_MetaData), NewProp_TurnOrderWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrderWidget = { "TurnOrderWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurnManager, TurnOrderWidget), Z_Construct_UClass_UTurnOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderWidget_MetaData), NewProp_TurnOrderWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_CurrentTurnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrderWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnManager_Statics::NewProp_TurnOrderWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurnManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurnManager_Statics::ClassParams = {
	&ATurnManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATurnManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATurnManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurnManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurnManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurnManager()
{
	if (!Z_Registration_Info_UClass_ATurnManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurnManager.OuterSingleton, Z_Construct_UClass_ATurnManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurnManager.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<ATurnManager>()
{
	return ATurnManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnManager);
ATurnManager::~ATurnManager() {}
// End Class ATurnManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurnManager, ATurnManager::StaticClass, TEXT("ATurnManager"), &Z_Registration_Info_UClass_ATurnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurnManager), 4134066802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_1686346742(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
