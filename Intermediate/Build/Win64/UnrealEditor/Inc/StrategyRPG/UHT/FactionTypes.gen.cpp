// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/FactionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionTypes() {}

// Begin Cross Module References
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EFaction();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Enum EFaction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFaction;
static UEnum* EFaction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFaction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFaction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_EFaction, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("EFaction"));
	}
	return Z_Registration_Info_UEnum_EFaction.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<EFaction>()
{
	return EFaction_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_EFaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Empire.DisplayName", "The Aurean Dominion" },
		{ "Empire.Name", "EFaction::Empire" },
		{ "Mercenaries.DisplayName", "The Ironbound Concord" },
		{ "Mercenaries.Name", "EFaction::Mercenaries" },
		{ "ModuleRelativePath", "Public/FactionTypes.h" },
		{ "Mystics.DisplayName", "The Veiled Order" },
		{ "Mystics.Name", "EFaction::Mystics" },
		{ "Nomads.DisplayName", "The Wandering Tribes" },
		{ "Nomads.Name", "EFaction::Nomads" },
		{ "None.DisplayName", "Lone Wolf" },
		{ "None.Name", "EFaction::None" },
		{ "Rebels.DisplayName", "The Crimson Pact" },
		{ "Rebels.Name", "EFaction::Rebels" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFaction::None", (int64)EFaction::None },
		{ "EFaction::Empire", (int64)EFaction::Empire },
		{ "EFaction::Rebels", (int64)EFaction::Rebels },
		{ "EFaction::Nomads", (int64)EFaction::Nomads },
		{ "EFaction::Mystics", (int64)EFaction::Mystics },
		{ "EFaction::Mercenaries", (int64)EFaction::Mercenaries },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_EFaction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"EFaction",
	"EFaction",
	Z_Construct_UEnum_StrategyRPG_EFaction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EFaction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EFaction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_EFaction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_EFaction()
{
	if (!Z_Registration_Info_UEnum_EFaction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFaction.InnerSingleton, Z_Construct_UEnum_StrategyRPG_EFaction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFaction.InnerSingleton;
}
// End Enum EFaction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_FactionTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFaction_StaticEnum, TEXT("EFaction"), &Z_Registration_Info_UEnum_EFaction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4280729339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_FactionTypes_h_4035524138(TEXT("/Script/StrategyRPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_FactionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_FactionTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
