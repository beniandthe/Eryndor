// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGameCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_ETurnState();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Enum ETurnState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETurnState;
static UEnum* ETurnState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETurnState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETurnState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_ETurnState, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("ETurnState"));
	}
	return Z_Registration_Info_UEnum_ETurnState.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<ETurnState>()
{
	return ETurnState_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_ETurnState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "ETurnState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Ended.DisplayName", "Turn Ended" },
		{ "Ended.Name", "ETurnState::Ended" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
		{ "Moving.DisplayName", "Moving" },
		{ "Moving.Name", "ETurnState::Moving" },
		{ "Waiting.DisplayName", "Waiting" },
		{ "Waiting.Name", "ETurnState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETurnState::Waiting", (int64)ETurnState::Waiting },
		{ "ETurnState::Moving", (int64)ETurnState::Moving },
		{ "ETurnState::Attacking", (int64)ETurnState::Attacking },
		{ "ETurnState::Ended", (int64)ETurnState::Ended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"ETurnState",
	"ETurnState",
	Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_ETurnState()
{
	if (!Z_Registration_Info_UEnum_ETurnState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETurnState.InnerSingleton, Z_Construct_UEnum_StrategyRPG_ETurnState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETurnState.InnerSingleton;
}
// End Enum ETurnState

// Begin Class AGameCharacter Function Attack
struct Z_Construct_UFunction_AGameCharacter_Attack_Statics
{
	struct GameCharacter_eventAttack_Parms
	{
		AGameCharacter* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Combat Actions */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Actions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_Attack_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventAttack_Parms, Target), Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_Attack_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_Attack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "Attack", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_Attack_Statics::GameCharacter_eventAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_Attack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_Attack_Statics::GameCharacter_eventAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execAttack)
{
	P_GET_OBJECT(AGameCharacter,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack(Z_Param_Target);
	P_NATIVE_END;
}
// End Class AGameCharacter Function Attack

// Begin Class AGameCharacter Function CalculateClassSpecificStats
struct Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "CalculateClassSpecificStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execCalculateClassSpecificStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateClassSpecificStats();
	P_NATIVE_END;
}
// End Class AGameCharacter Function CalculateClassSpecificStats

// Begin Class AGameCharacter Function CalculateDerivedStats
struct Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stats & Movement\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stats & Movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "CalculateDerivedStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execCalculateDerivedStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateDerivedStats();
	P_NATIVE_END;
}
// End Class AGameCharacter Function CalculateDerivedStats

// Begin Class AGameCharacter Function CalculateMovementRange
struct Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics
{
	struct GameCharacter_eventCalculateMovementRange_Parms
	{
		AGridTile* Tile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventCalculateMovementRange_Parms, Tile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::NewProp_Tile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "CalculateMovementRange", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::GameCharacter_eventCalculateMovementRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::GameCharacter_eventCalculateMovementRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_CalculateMovementRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_CalculateMovementRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execCalculateMovementRange)
{
	P_GET_OBJECT(AGridTile,Z_Param_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateMovementRange(Z_Param_Tile);
	P_NATIVE_END;
}
// End Class AGameCharacter Function CalculateMovementRange

// Begin Class AGameCharacter Function CheckForEnemiesNearby
struct Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "CheckForEnemiesNearby", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execCheckForEnemiesNearby)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckForEnemiesNearby();
	P_NATIVE_END;
}
// End Class AGameCharacter Function CheckForEnemiesNearby

// Begin Class AGameCharacter Function EndTurn
struct Z_Construct_UFunction_AGameCharacter_EndTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_EndTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "EndTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_EndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_EndTurn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_EndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_EndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execEndTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTurn();
	P_NATIVE_END;
}
// End Class AGameCharacter Function EndTurn

// Begin Class AGameCharacter Function GetMoveRange
struct Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics
{
	struct GameCharacter_eventGetMoveRange_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventGetMoveRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "GetMoveRange", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::GameCharacter_eventGetMoveRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::GameCharacter_eventGetMoveRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_GetMoveRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_GetMoveRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execGetMoveRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMoveRange();
	P_NATIVE_END;
}
// End Class AGameCharacter Function GetMoveRange

// Begin Class AGameCharacter Function GetPortraitTexture
struct Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics
{
	struct GameCharacter_eventGetPortraitTexture_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventGetPortraitTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "GetPortraitTexture", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::GameCharacter_eventGetPortraitTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::GameCharacter_eventGetPortraitTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_GetPortraitTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_GetPortraitTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execGetPortraitTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetPortraitTexture();
	P_NATIVE_END;
}
// End Class AGameCharacter Function GetPortraitTexture

// Begin Class AGameCharacter Function ModifyAttribute
struct Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics
{
	struct GameCharacter_eventModifyAttribute_Parms
	{
		FString AttributeName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Utility Functions */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventModifyAttribute_Parms, AttributeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventModifyAttribute_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "ModifyAttribute", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::GameCharacter_eventModifyAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::GameCharacter_eventModifyAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_ModifyAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_ModifyAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execModifyAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyAttribute(Z_Param_AttributeName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AGameCharacter Function ModifyAttribute

// Begin Class AGameCharacter Function MoveToTile
struct Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics
{
	struct GameCharacter_eventMoveToTile_Parms
	{
		AGridTile* TargetTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::NewProp_TargetTile = { "TargetTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventMoveToTile_Parms, TargetTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::NewProp_TargetTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "MoveToTile", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::GameCharacter_eventMoveToTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::GameCharacter_eventMoveToTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_MoveToTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_MoveToTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execMoveToTile)
{
	P_GET_OBJECT(AGridTile,Z_Param_TargetTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToTile(Z_Param_TargetTile);
	P_NATIVE_END;
}
// End Class AGameCharacter Function MoveToTile

// Begin Class AGameCharacter Function OnAttributeModified
struct Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics
{
	struct GameCharacter_eventOnAttributeModified_Parms
	{
		FString AttributeName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventOnAttributeModified_Parms, AttributeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventOnAttributeModified_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "OnAttributeModified", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::GameCharacter_eventOnAttributeModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::GameCharacter_eventOnAttributeModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_OnAttributeModified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_OnAttributeModified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execOnAttributeModified)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttributeModified(Z_Param_AttributeName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class AGameCharacter Function OnAttributeModified

// Begin Class AGameCharacter Function PerformAction
struct Z_Construct_UFunction_AGameCharacter_PerformAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "PerformAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_PerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_PerformAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_PerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_PerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execPerformAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAction();
	P_NATIVE_END;
}
// End Class AGameCharacter Function PerformAction

// Begin Class AGameCharacter Function SetCurrentTile
struct Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics
{
	struct GameCharacter_eventSetCurrentTile_Parms
	{
		AGridTile* NewTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assigns the character to a new grid tile */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns the character to a new grid tile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventSetCurrentTile_Parms, NewTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::NewProp_NewTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "SetCurrentTile", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::GameCharacter_eventSetCurrentTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::GameCharacter_eventSetCurrentTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_SetCurrentTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_SetCurrentTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execSetCurrentTile)
{
	P_GET_OBJECT(AGridTile,Z_Param_NewTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTile(Z_Param_NewTile);
	P_NATIVE_END;
}
// End Class AGameCharacter Function SetCurrentTile

// Begin Class AGameCharacter Function SetEquippedArmorWeight
struct Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics
{
	struct GameCharacter_eventSetEquippedArmorWeight_Parms
	{
		float Weight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventSetEquippedArmorWeight_Parms, Weight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "SetEquippedArmorWeight", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::GameCharacter_eventSetEquippedArmorWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::GameCharacter_eventSetEquippedArmorWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execSetEquippedArmorWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEquippedArmorWeight(Z_Param_Weight);
	P_NATIVE_END;
}
// End Class AGameCharacter Function SetEquippedArmorWeight

// Begin Class AGameCharacter Function SetPositionOnGrid
struct Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics
{
	struct GameCharacter_eventSetPositionOnGrid_Parms
	{
		AGridTile* NewTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World Occupation*/" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World Occupation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameCharacter_eventSetPositionOnGrid_Parms, NewTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::NewProp_NewTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "SetPositionOnGrid", nullptr, nullptr, Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::GameCharacter_eventSetPositionOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::GameCharacter_eventSetPositionOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execSetPositionOnGrid)
{
	P_GET_OBJECT(AGridTile,Z_Param_NewTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionOnGrid(Z_Param_NewTile);
	P_NATIVE_END;
}
// End Class AGameCharacter Function SetPositionOnGrid

// Begin Class AGameCharacter Function TakeTurn
struct Z_Construct_UFunction_AGameCharacter_TakeTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCharacter_TakeTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCharacter, nullptr, "TakeTurn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCharacter_TakeTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCharacter_TakeTurn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameCharacter_TakeTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCharacter_TakeTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCharacter::execTakeTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeTurn();
	P_NATIVE_END;
}
// End Class AGameCharacter Function TakeTurn

// Begin Class AGameCharacter
void AGameCharacter::StaticRegisterNativesAGameCharacter()
{
	UClass* Class = AGameCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack", &AGameCharacter::execAttack },
		{ "CalculateClassSpecificStats", &AGameCharacter::execCalculateClassSpecificStats },
		{ "CalculateDerivedStats", &AGameCharacter::execCalculateDerivedStats },
		{ "CalculateMovementRange", &AGameCharacter::execCalculateMovementRange },
		{ "CheckForEnemiesNearby", &AGameCharacter::execCheckForEnemiesNearby },
		{ "EndTurn", &AGameCharacter::execEndTurn },
		{ "GetMoveRange", &AGameCharacter::execGetMoveRange },
		{ "GetPortraitTexture", &AGameCharacter::execGetPortraitTexture },
		{ "ModifyAttribute", &AGameCharacter::execModifyAttribute },
		{ "MoveToTile", &AGameCharacter::execMoveToTile },
		{ "OnAttributeModified", &AGameCharacter::execOnAttributeModified },
		{ "PerformAction", &AGameCharacter::execPerformAction },
		{ "SetCurrentTile", &AGameCharacter::execSetCurrentTile },
		{ "SetEquippedArmorWeight", &AGameCharacter::execSetEquippedArmorWeight },
		{ "SetPositionOnGrid", &AGameCharacter::execSetPositionOnGrid },
		{ "TakeTurn", &AGameCharacter::execTakeTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameCharacter);
UClass* Z_Construct_UClass_AGameCharacter_NoRegister()
{
	return AGameCharacter::StaticClass();
}
struct Z_Construct_UClass_AGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AGameCharacter.h" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggroRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnemy_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAggressive_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnState_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCombatActive_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the hero is in combat */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the hero is in combat" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Primary Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faith_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Derived Stats */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Derived Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Essence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leadership_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diplomacy_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tactics_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Willpower_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorClass_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Universal Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPoints_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementPoints_MetaData[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedArmorWeight_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesArmorWeight_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementRange_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evasion_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Combat Stats */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance to avoid attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance to avoid attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicResistance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance to land a critical hit\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance to land a critical hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalResistance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resistance against magic attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistance against magic attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resistance against physical attacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistance against physical attacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPower_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base physical attack damage\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base physical attack damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamage_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base magical attack power\n" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base magical attack power" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPortraitTexture_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to Character Portrait */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to Character Portrait" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitPortraitTexture_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Grid Manager */" },
#endif
		{ "ModuleRelativePath", "Public/AGameCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Grid Manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AggroRange;
	static void NewProp_bIsEnemy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnemy;
	static void NewProp_bIsAggressive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAggressive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTurnState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTurnState;
	static void NewProp_bIsCombatActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCombatActive;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Leadership;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Diplomacy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tactics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Willpower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EquippedArmorWeight;
	static void NewProp_bUsesArmorWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesArmorWeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MovementRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Evasion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalResistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OccupiedTile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterPortraitTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitPortraitTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameCharacter_Attack, "Attack" }, // 3980084210
		{ &Z_Construct_UFunction_AGameCharacter_CalculateClassSpecificStats, "CalculateClassSpecificStats" }, // 2863209180
		{ &Z_Construct_UFunction_AGameCharacter_CalculateDerivedStats, "CalculateDerivedStats" }, // 888958091
		{ &Z_Construct_UFunction_AGameCharacter_CalculateMovementRange, "CalculateMovementRange" }, // 3799186903
		{ &Z_Construct_UFunction_AGameCharacter_CheckForEnemiesNearby, "CheckForEnemiesNearby" }, // 298522273
		{ &Z_Construct_UFunction_AGameCharacter_EndTurn, "EndTurn" }, // 4191275159
		{ &Z_Construct_UFunction_AGameCharacter_GetMoveRange, "GetMoveRange" }, // 1973542738
		{ &Z_Construct_UFunction_AGameCharacter_GetPortraitTexture, "GetPortraitTexture" }, // 842551509
		{ &Z_Construct_UFunction_AGameCharacter_ModifyAttribute, "ModifyAttribute" }, // 3074676532
		{ &Z_Construct_UFunction_AGameCharacter_MoveToTile, "MoveToTile" }, // 2226287542
		{ &Z_Construct_UFunction_AGameCharacter_OnAttributeModified, "OnAttributeModified" }, // 3691289793
		{ &Z_Construct_UFunction_AGameCharacter_PerformAction, "PerformAction" }, // 3612890524
		{ &Z_Construct_UFunction_AGameCharacter_SetCurrentTile, "SetCurrentTile" }, // 1509371748
		{ &Z_Construct_UFunction_AGameCharacter_SetEquippedArmorWeight, "SetEquippedArmorWeight" }, // 2190558240
		{ &Z_Construct_UFunction_AGameCharacter_SetPositionOnGrid, "SetPositionOnGrid" }, // 2351136326
		{ &Z_Construct_UFunction_AGameCharacter_TakeTurn, "TakeTurn" }, // 397263997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_AggroRange = { "AggroRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, AggroRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggroRange_MetaData), NewProp_AggroRange_MetaData) };
void Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsEnemy_SetBit(void* Obj)
{
	((AGameCharacter*)Obj)->bIsEnemy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsEnemy = { "bIsEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameCharacter), &Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsEnemy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnemy_MetaData), NewProp_bIsEnemy_MetaData) };
void Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsAggressive_SetBit(void* Obj)
{
	((AGameCharacter*)Obj)->bIsAggressive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsAggressive = { "bIsAggressive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameCharacter), &Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsAggressive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAggressive_MetaData), NewProp_bIsAggressive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTurnState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTurnState = { "CurrentTurnState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CurrentTurnState), Z_Construct_UEnum_StrategyRPG_ETurnState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnState_MetaData), NewProp_CurrentTurnState_MetaData) }; // 963227532
void Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsCombatActive_SetBit(void* Obj)
{
	((AGameCharacter*)Obj)->bIsCombatActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsCombatActive = { "bIsCombatActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameCharacter), &Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsCombatActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCombatActive_MetaData), NewProp_bIsCombatActive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Endurance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Charisma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Perception), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perception_MetaData), NewProp_Perception_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Faith = { "Faith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Faith), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faith_MetaData), NewProp_Faith_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Essence = { "Essence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Essence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Essence_MetaData), NewProp_Essence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Leadership = { "Leadership", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Leadership), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leadership_MetaData), NewProp_Leadership_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Diplomacy = { "Diplomacy", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Diplomacy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diplomacy_MetaData), NewProp_Diplomacy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Tactics = { "Tactics", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Tactics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tactics_MetaData), NewProp_Tactics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Willpower = { "Willpower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Willpower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Willpower_MetaData), NewProp_Willpower_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Stealth = { "Stealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Stealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stealth_MetaData), NewProp_Stealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_ArmorClass = { "ArmorClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, ArmorClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorClass_MetaData), NewProp_ArmorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_ActionPoints = { "ActionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, ActionPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPoints_MetaData), NewProp_ActionPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementPoints = { "MovementPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, MovementPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementPoints_MetaData), NewProp_MovementPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_EquippedArmorWeight = { "EquippedArmorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, EquippedArmorWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedArmorWeight_MetaData), NewProp_EquippedArmorWeight_MetaData) };
void Z_Construct_UClass_AGameCharacter_Statics::NewProp_bUsesArmorWeight_SetBit(void* Obj)
{
	((AGameCharacter*)Obj)->bUsesArmorWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_bUsesArmorWeight = { "bUsesArmorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameCharacter), &Z_Construct_UClass_AGameCharacter_Statics::NewProp_bUsesArmorWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesArmorWeight_MetaData), NewProp_bUsesArmorWeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementRange = { "MovementRange", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, MovementRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementRange_MetaData), NewProp_MovementRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_Evasion = { "Evasion", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, Evasion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evasion_MetaData), NewProp_Evasion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CriticalChance = { "CriticalChance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CriticalChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalChance_MetaData), NewProp_CriticalChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_MagicResistance = { "MagicResistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, MagicResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicResistance_MetaData), NewProp_MagicResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_PhysicalResistance = { "PhysicalResistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, PhysicalResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalResistance_MetaData), NewProp_PhysicalResistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_SpellPower = { "SpellPower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, SpellPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPower_MetaData), NewProp_SpellPower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CriticalDamage = { "CriticalDamage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CriticalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalDamage_MetaData), NewProp_CriticalDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_OccupiedTile = { "OccupiedTile", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, OccupiedTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedTile_MetaData), NewProp_OccupiedTile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTile = { "CurrentTile", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CurrentTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTile_MetaData), NewProp_CurrentTile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CharacterPortraitTexture = { "CharacterPortraitTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CharacterPortraitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPortraitTexture_MetaData), NewProp_CharacterPortraitTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_UnitPortraitTexture = { "UnitPortraitTexture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, UnitPortraitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitPortraitTexture_MetaData), NewProp_UnitPortraitTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_GridManager = { "GridManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, GridManager), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManager_MetaData), NewProp_GridManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_AggroRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsAggressive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTurnState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTurnState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_bIsCombatActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Perception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Luck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Faith,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Essence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Leadership,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Diplomacy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Tactics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Willpower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Stealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_ArmorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_ActionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_EquippedArmorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_bUsesArmorWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_MovementRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_Evasion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CriticalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_MagicResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_PhysicalResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_SpellPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CriticalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_OccupiedTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CurrentTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CharacterPortraitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_UnitPortraitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_GridManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacter_Statics::ClassParams = {
	&AGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameCharacter()
{
	if (!Z_Registration_Info_UClass_AGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacter.OuterSingleton, Z_Construct_UClass_AGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameCharacter.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGameCharacter>()
{
	return AGameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacter);
AGameCharacter::~AGameCharacter() {}
// End Class AGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETurnState_StaticEnum, TEXT("ETurnState"), &Z_Registration_Info_UEnum_ETurnState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 963227532U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacter, AGameCharacter::StaticClass, TEXT("AGameCharacter"), &Z_Registration_Info_UClass_AGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacter), 1723645062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_2289963076(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
