// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AHero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAHero() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EFaction();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EHeroClass();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_ERace();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AHero Function CalculateDerivedStats
struct Z_Construct_UFunction_AHero_CalculateDerivedStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Utility Functions */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_CalculateDerivedStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "CalculateDerivedStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_CalculateDerivedStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_CalculateDerivedStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHero_CalculateDerivedStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_CalculateDerivedStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execCalculateDerivedStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateDerivedStats();
	P_NATIVE_END;
}
// End Class AHero Function CalculateDerivedStats

// Begin Class AHero Function CalculateMovementRange
struct Z_Construct_UFunction_AHero_CalculateMovementRange_Statics
{
	struct Hero_eventCalculateMovementRange_Parms
	{
		AGridTile* Tile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventCalculateMovementRange_Parms, Tile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::NewProp_Tile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "CalculateMovementRange", nullptr, nullptr, Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::Hero_eventCalculateMovementRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::Hero_eventCalculateMovementRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_CalculateMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_CalculateMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execCalculateMovementRange)
{
	P_GET_OBJECT(AGridTile,Z_Param_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateMovementRange(Z_Param_Tile);
	P_NATIVE_END;
}
// End Class AHero Function CalculateMovementRange

// Begin Class AHero Function ModifyAttribute
struct Z_Construct_UFunction_AHero_ModifyAttribute_Statics
{
	struct Hero_eventModifyAttribute_Parms
	{
		FString AttributeName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHero_ModifyAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventModifyAttribute_Parms, AttributeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHero_ModifyAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventModifyAttribute_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_ModifyAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_ModifyAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_ModifyAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ModifyAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "ModifyAttribute", nullptr, nullptr, Z_Construct_UFunction_AHero_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ModifyAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_ModifyAttribute_Statics::Hero_eventModifyAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ModifyAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_ModifyAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_ModifyAttribute_Statics::Hero_eventModifyAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_ModifyAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_ModifyAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execModifyAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyAttribute(Z_Param_AttributeName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AHero Function ModifyAttribute

// Begin Class AHero Function MoveToTile
struct Z_Construct_UFunction_AHero_MoveToTile_Statics
{
	struct Hero_eventMoveToTile_Parms
	{
		AGridTile* TargetTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Movement Handling */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHero_MoveToTile_Statics::NewProp_TargetTile = { "TargetTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventMoveToTile_Parms, TargetTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_MoveToTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveToTile_Statics::NewProp_TargetTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveToTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveToTile", nullptr, nullptr, Z_Construct_UFunction_AHero_MoveToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_MoveToTile_Statics::Hero_eventMoveToTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_MoveToTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_MoveToTile_Statics::Hero_eventMoveToTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_MoveToTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_MoveToTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execMoveToTile)
{
	P_GET_OBJECT(AGridTile,Z_Param_TargetTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTile(Z_Param_TargetTile);
	P_NATIVE_END;
}
// End Class AHero Function MoveToTile

// Begin Class AHero Function SetCurrentTile
struct Z_Construct_UFunction_AHero_SetCurrentTile_Statics
{
	struct Hero_eventSetCurrentTile_Parms
	{
		AGridTile* NewTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHero_SetCurrentTile_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventSetCurrentTile_Parms, NewTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_SetCurrentTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_SetCurrentTile_Statics::NewProp_NewTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetCurrentTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_SetCurrentTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "SetCurrentTile", nullptr, nullptr, Z_Construct_UFunction_AHero_SetCurrentTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetCurrentTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_SetCurrentTile_Statics::Hero_eventSetCurrentTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetCurrentTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_SetCurrentTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_SetCurrentTile_Statics::Hero_eventSetCurrentTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_SetCurrentTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_SetCurrentTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execSetCurrentTile)
{
	P_GET_OBJECT(AGridTile,Z_Param_NewTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTile(Z_Param_NewTile);
	P_NATIVE_END;
}
// End Class AHero Function SetCurrentTile

// Begin Class AHero Function SetEquippedArmorWeight
struct Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics
{
	struct Hero_eventSetEquippedArmorWeight_Parms
	{
		float Weight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventSetEquippedArmorWeight_Parms, Weight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "SetEquippedArmorWeight", nullptr, nullptr, Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::Hero_eventSetEquippedArmorWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::Hero_eventSetEquippedArmorWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_SetEquippedArmorWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_SetEquippedArmorWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execSetEquippedArmorWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEquippedArmorWeight(Z_Param_Weight);
	P_NATIVE_END;
}
// End Class AHero Function SetEquippedArmorWeight

// Begin Class AHero
void AHero::StaticRegisterNativesAHero()
{
	UClass* Class = AHero::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateDerivedStats", &AHero::execCalculateDerivedStats },
		{ "CalculateMovementRange", &AHero::execCalculateMovementRange },
		{ "ModifyAttribute", &AHero::execModifyAttribute },
		{ "MoveToTile", &AHero::execMoveToTile },
		{ "SetCurrentTile", &AHero::execSetCurrentTile },
		{ "SetEquippedArmorWeight", &AHero::execSetEquippedArmorWeight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHero);
UClass* Z_Construct_UClass_AHero_NoRegister()
{
	return AHero::StaticClass();
}
struct Z_Construct_UClass_AHero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AHero.h" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Primary Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faith_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Derived Stats */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Derived Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Essence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEssence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkEssence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leadership_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diplomacy_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tactics_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Willpower_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initiative_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evasion_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Combat Stats */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance to avoid attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance to avoid attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicResistance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance to land a critical hit\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance to land a critical hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalResistance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resistance against magic attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistance against magic attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resistance against physical attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistance against physical attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPower_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base physical attack damage\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base physical attack damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamage_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base magical attack power\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base magical attack power" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEssenceThreshold_MetaData[] = {
		{ "Category", "Morality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Morality System */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Morality System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkEssenceThreshold_MetaData[] = {
		{ "Category", "Morality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines Light skill unlocks\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines Light skill unlocks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[] = {
		{ "Category", "Faction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Faction */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Faction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Race_MetaData[] = {
		{ "Category", "Race" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Race */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Race" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroClass_MetaData[] = {
		{ "Category", "Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Class */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Current Grid Position */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Current Grid Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to Grid Manager */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to Grid Manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRange_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedArmorWeight_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Armor Weight (Affects movement speed)\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Armor Weight (Affects movement speed)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Boom (Spring Arm) for smooth camera movement\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Boom (Spring Arm) for smooth camera movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Follow Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow Camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Endurance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Perception;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Luck;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Faith;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Essence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightEssence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DarkEssence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Leadership;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Diplomacy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tactics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Willpower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Initiative;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Evasion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightEssenceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DarkEssenceThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Faction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Race_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Race;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeroClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeroClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquippedArmorWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHero_CalculateDerivedStats, "CalculateDerivedStats" }, // 792913569
		{ &Z_Construct_UFunction_AHero_CalculateMovementRange, "CalculateMovementRange" }, // 2647828238
		{ &Z_Construct_UFunction_AHero_ModifyAttribute, "ModifyAttribute" }, // 2751578710
		{ &Z_Construct_UFunction_AHero_MoveToTile, "MoveToTile" }, // 2379829400
		{ &Z_Construct_UFunction_AHero_SetCurrentTile, "SetCurrentTile" }, // 3176373765
		{ &Z_Construct_UFunction_AHero_SetEquippedArmorWeight, "SetEquippedArmorWeight" }, // 1904072988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Endurance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Charisma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Perception), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perception_MetaData), NewProp_Perception_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Faith = { "Faith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Faith), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faith_MetaData), NewProp_Faith_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Essence = { "Essence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Essence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Essence_MetaData), NewProp_Essence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_LightEssence = { "LightEssence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, LightEssence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEssence_MetaData), NewProp_LightEssence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_DarkEssence = { "DarkEssence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, DarkEssence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkEssence_MetaData), NewProp_DarkEssence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Leadership = { "Leadership", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Leadership), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leadership_MetaData), NewProp_Leadership_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Diplomacy = { "Diplomacy", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Diplomacy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diplomacy_MetaData), NewProp_Diplomacy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Tactics = { "Tactics", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Tactics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tactics_MetaData), NewProp_Tactics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Willpower = { "Willpower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Willpower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Willpower_MetaData), NewProp_Willpower_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Stealth = { "Stealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Stealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stealth_MetaData), NewProp_Stealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Initiative = { "Initiative", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Initiative), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initiative_MetaData), NewProp_Initiative_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Evasion = { "Evasion", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Evasion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evasion_MetaData), NewProp_Evasion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CriticalChance = { "CriticalChance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CriticalChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_MagicResistance = { "MagicResistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, MagicResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicResistance_MetaData), NewProp_MagicResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_PhysicalResistance = { "PhysicalResistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, PhysicalResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalResistance_MetaData), NewProp_PhysicalResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_SpellPower = { "SpellPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, SpellPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPower_MetaData), NewProp_SpellPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CriticalDamage = { "CriticalDamage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CriticalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDamage_MetaData), NewProp_CriticalDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_LightEssenceThreshold = { "LightEssenceThreshold", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, LightEssenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEssenceThreshold_MetaData), NewProp_LightEssenceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_DarkEssenceThreshold = { "DarkEssenceThreshold", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, DarkEssenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkEssenceThreshold_MetaData), NewProp_DarkEssenceThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Faction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Faction), Z_Construct_UEnum_StrategyRPG_EFaction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faction_MetaData), NewProp_Faction_MetaData) }; // 4280729339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Race_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Race = { "Race", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Race), Z_Construct_UEnum_StrategyRPG_ERace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Race_MetaData), NewProp_Race_MetaData) }; // 3520262559
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_HeroClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_HeroClass = { "HeroClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, HeroClass), Z_Construct_UEnum_StrategyRPG_EHeroClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroClass_MetaData), NewProp_HeroClass_MetaData) }; // 158982506
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CurrentTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTile_MetaData), NewProp_CurrentTile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_MovementRange = { "MovementRange", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, MovementRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRange_MetaData), NewProp_MovementRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_EquippedArmorWeight = { "EquippedArmorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, EquippedArmorWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedArmorWeight_MetaData), NewProp_EquippedArmorWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Perception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Luck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Faith,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Essence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_LightEssence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_DarkEssence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Leadership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Diplomacy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Tactics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Willpower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Stealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Initiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Evasion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_MagicResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_PhysicalResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_SpellPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CriticalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_LightEssenceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_DarkEssenceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Faction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Race_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Race,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_HeroClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_HeroClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CurrentTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_GridManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_MovementRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_EquippedArmorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHero_Statics::ClassParams = {
	&AHero::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHero_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams), Z_Construct_UClass_AHero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHero()
{
	if (!Z_Registration_Info_UClass_AHero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHero.OuterSingleton, Z_Construct_UClass_AHero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHero.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AHero>()
{
	return AHero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHero);
AHero::~AHero() {}
// End Class AHero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHero, AHero::StaticClass, TEXT("AHero"), &Z_Registration_Info_UClass_AHero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHero), 3450907870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_85794072(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
