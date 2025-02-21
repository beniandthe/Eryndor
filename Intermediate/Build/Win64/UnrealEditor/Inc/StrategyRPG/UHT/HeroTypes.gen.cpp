// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/HeroTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroTypes() {}

// Begin Cross Module References
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EHeroClass();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_ERace();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Enum ERace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERace;
static UEnum* ERace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_ERace, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("ERace"));
	}
	return Z_Registration_Info_UEnum_ERace.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<ERace>()
{
	return ERace_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_ERace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero Races */" },
#endif
		{ "Dragonborn.DisplayName", "Dragonborn" },
		{ "Dragonborn.Name", "ERace::Dragonborn" },
		{ "Drow.DisplayName", "Drow" },
		{ "Drow.Name", "ERace::Drow" },
		{ "Elf.DisplayName", "Elf" },
		{ "Elf.Name", "ERace::Elf" },
		{ "Halfling.DisplayName", "Halfling" },
		{ "Halfling.Name", "ERace::Halfling" },
		{ "Human.DisplayName", "Human" },
		{ "Human.Name", "ERace::Human" },
		{ "ModuleRelativePath", "Public/HeroTypes.h" },
		{ "Orc.DisplayName", "Orc" },
		{ "Orc.Name", "ERace::Orc" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero Races" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERace::Human", (int64)ERace::Human },
		{ "ERace::Orc", (int64)ERace::Orc },
		{ "ERace::Elf", (int64)ERace::Elf },
		{ "ERace::Drow", (int64)ERace::Drow },
		{ "ERace::Halfling", (int64)ERace::Halfling },
		{ "ERace::Dragonborn", (int64)ERace::Dragonborn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_ERace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"ERace",
	"ERace",
	Z_Construct_UEnum_StrategyRPG_ERace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_ERace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_ERace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_ERace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_ERace()
{
	if (!Z_Registration_Info_UEnum_ERace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERace.InnerSingleton, Z_Construct_UEnum_StrategyRPG_ERace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERace.InnerSingleton;
}
// End Enum ERace

// Begin Enum EHeroClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeroClass;
static UEnum* EHeroClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeroClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeroClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_EHeroClass, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("EHeroClass"));
	}
	return Z_Registration_Info_UEnum_EHeroClass.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<EHeroClass>()
{
	return EHeroClass_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Barabarian.DisplayName", "Barabarian" },
		{ "Barabarian.Name", "EHeroClass::Barabarian" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero Classes */" },
#endif
		{ "Mage.DisplayName", "Mage" },
		{ "Mage.Name", "EHeroClass::Mage" },
		{ "ModuleRelativePath", "Public/HeroTypes.h" },
		{ "Necromancer.DisplayName", "Necromancer" },
		{ "Necromancer.Name", "EHeroClass::Necromancer" },
		{ "Paladin.DisplayName", "Paladin" },
		{ "Paladin.Name", "EHeroClass::Paladin" },
		{ "Ranger.DisplayName", "Ranger" },
		{ "Ranger.Name", "EHeroClass::Ranger" },
		{ "Rogue.DisplayName", "Rogue" },
		{ "Rogue.Name", "EHeroClass::Rogue" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero Classes" },
#endif
		{ "Warrior.DisplayName", "Warrior" },
		{ "Warrior.Name", "EHeroClass::Warrior" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeroClass::Warrior", (int64)EHeroClass::Warrior },
		{ "EHeroClass::Mage", (int64)EHeroClass::Mage },
		{ "EHeroClass::Barabarian", (int64)EHeroClass::Barabarian },
		{ "EHeroClass::Rogue", (int64)EHeroClass::Rogue },
		{ "EHeroClass::Paladin", (int64)EHeroClass::Paladin },
		{ "EHeroClass::Ranger", (int64)EHeroClass::Ranger },
		{ "EHeroClass::Necromancer", (int64)EHeroClass::Necromancer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"EHeroClass",
	"EHeroClass",
	Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_EHeroClass()
{
	if (!Z_Registration_Info_UEnum_EHeroClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeroClass.InnerSingleton, Z_Construct_UEnum_StrategyRPG_EHeroClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeroClass.InnerSingleton;
}
// End Enum EHeroClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_HeroTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERace_StaticEnum, TEXT("ERace"), &Z_Registration_Info_UEnum_ERace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3520262559U) },
		{ EHeroClass_StaticEnum, TEXT("EHeroClass"), &Z_Registration_Info_UEnum_EHeroClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 158982506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_HeroTypes_h_3181182719(TEXT("/Script/StrategyRPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_HeroTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_HeroTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
