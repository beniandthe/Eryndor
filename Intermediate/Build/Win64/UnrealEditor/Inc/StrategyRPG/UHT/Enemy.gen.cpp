// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// Begin Cross Module References
STRATEGYRPG_API UClass* Z_Construct_UClass_AEnemy();
STRATEGYRPG_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyType();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AEnemy Function FindClosestHero
struct Z_Construct_UFunction_AEnemy_FindClosestHero_Statics
{
	struct Enemy_eventFindClosestHero_Parms
	{
		AHero* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventFindClosestHero_Parms, ReturnValue), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "FindClosestHero", nullptr, nullptr, Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::Enemy_eventFindClosestHero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::Enemy_eventFindClosestHero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_FindClosestHero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_FindClosestHero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy::execFindClosestHero)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHero**)Z_Param__Result=P_THIS->FindClosestHero();
	P_NATIVE_END;
}
// End Class AEnemy Function FindClosestHero

// Begin Class AEnemy Function MoveTowards
struct Z_Construct_UFunction_AEnemy_MoveTowards_Statics
{
	struct Enemy_eventMoveTowards_Parms
	{
		AHero* TargetHero;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetHero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_MoveTowards_Statics::NewProp_TargetHero = { "TargetHero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_eventMoveTowards_Parms, TargetHero), Z_Construct_UClass_AHero_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_MoveTowards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_MoveTowards_Statics::NewProp_TargetHero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MoveTowards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_MoveTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "MoveTowards", nullptr, nullptr, Z_Construct_UFunction_AEnemy_MoveTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MoveTowards_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_MoveTowards_Statics::Enemy_eventMoveTowards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_MoveTowards_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_MoveTowards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemy_MoveTowards_Statics::Enemy_eventMoveTowards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemy_MoveTowards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_MoveTowards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemy::execMoveTowards)
{
	P_GET_OBJECT(AHero,Z_Param_TargetHero);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveTowards(Z_Param_TargetHero);
	P_NATIVE_END;
}
// End Class AEnemy Function MoveTowards

// Begin Class AEnemy
void AEnemy::StaticRegisterNativesAEnemy()
{
	UClass* Class = AEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindClosestHero", &AEnemy::execFindClosestHero },
		{ "MoveTowards", &AEnemy::execMoveTowards },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Public/Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyType_MetaData[] = {
		{ "Category", "Enemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enemy Type (Melee, Ranged, Magic, etc.) */" },
#endif
		{ "ModuleRelativePath", "Public/Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enemy Type (Melee, Ranged, Magic, etc.)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_FindClosestHero, "FindClosestHero" }, // 3566537094
		{ &Z_Construct_UFunction_AEnemy_MoveTowards, "MoveTowards" }, // 255850845
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, EnemyType), Z_Construct_UEnum_StrategyRPG_EEnemyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyType_MetaData), NewProp_EnemyType_MetaData) }; // 4139264143
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_EnemyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AEnemy>()
{
	return AEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// End Class AEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 285262435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_Enemy_h_2267898375(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
