// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/EnemyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyType() {}

// Begin Cross Module References
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyState();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyType();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Enum EEnemyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyType;
static UEnum* EEnemyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_EEnemyType, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("EEnemyType"));
	}
	return Z_Registration_Info_UEnum_EEnemyType.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<EEnemyType>()
{
	return EEnemyType_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GoblinBoss.DisplayName", "Goblin Boss" },
		{ "GoblinBoss.Name", "EEnemyType::GoblinBoss" },
		{ "GoblinMagic.DisplayName", "Goblin Mage" },
		{ "GoblinMagic.Name", "EEnemyType::GoblinMagic" },
		{ "GoblinMelee.DisplayName", "Goblin Fighter" },
		{ "GoblinMelee.Name", "EEnemyType::GoblinMelee" },
		{ "GoblinRanged.DisplayName", "Goblin Archer" },
		{ "GoblinRanged.Name", "EEnemyType::GoblinRanged" },
		{ "GoblinTank.DisplayName", "Goblin Infantry" },
		{ "GoblinTank.Name", "EEnemyType::GoblinTank" },
		{ "ModuleRelativePath", "Public/EnemyType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyType::GoblinMelee", (int64)EEnemyType::GoblinMelee },
		{ "EEnemyType::GoblinRanged", (int64)EEnemyType::GoblinRanged },
		{ "EEnemyType::GoblinMagic", (int64)EEnemyType::GoblinMagic },
		{ "EEnemyType::GoblinTank", (int64)EEnemyType::GoblinTank },
		{ "EEnemyType::GoblinBoss", (int64)EEnemyType::GoblinBoss },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"EEnemyType",
	"EEnemyType",
	Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyType()
{
	if (!Z_Registration_Info_UEnum_EEnemyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyType.InnerSingleton, Z_Construct_UEnum_StrategyRPG_EEnemyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyType.InnerSingleton;
}
// End Enum EEnemyType

// Begin Enum EEnemyState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_EEnemyState, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "EEnemyState::Attack" },
		{ "BlueprintType", "true" },
		{ "Chase.DisplayName", "Chase" },
		{ "Chase.Name", "EEnemyState::Chase" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EEnemyState::Dead" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "Public/EnemyType.h" },
		{ "Patrol.DisplayName", "Patrol" },
		{ "Patrol.Name", "EEnemyState::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Patrol", (int64)EEnemyState::Patrol },
		{ "EEnemyState::Chase", (int64)EEnemyState::Chase },
		{ "EEnemyState::Attack", (int64)EEnemyState::Attack },
		{ "EEnemyState::Dead", (int64)EEnemyState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_StrategyRPG_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// End Enum EEnemyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_EnemyType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyType_StaticEnum, TEXT("EEnemyType"), &Z_Registration_Info_UEnum_EEnemyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4139264143U) },
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1130165681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_EnemyType_h_4137021019(TEXT("/Script/StrategyRPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_EnemyType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_EnemyType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
