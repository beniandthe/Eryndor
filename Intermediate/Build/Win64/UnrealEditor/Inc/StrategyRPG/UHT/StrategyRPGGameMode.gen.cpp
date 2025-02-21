// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/StrategyRPGGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyRPGGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STRATEGYRPG_API UClass* Z_Construct_UClass_AStrategyRPGGameMode();
STRATEGYRPG_API UClass* Z_Construct_UClass_AStrategyRPGGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AStrategyRPGGameMode
void AStrategyRPGGameMode::StaticRegisterNativesAStrategyRPGGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrategyRPGGameMode);
UClass* Z_Construct_UClass_AStrategyRPGGameMode_NoRegister()
{
	return AStrategyRPGGameMode::StaticClass();
}
struct Z_Construct_UClass_AStrategyRPGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StrategyRPGGameMode.h" },
		{ "ModuleRelativePath", "StrategyRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyRPGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStrategyRPGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrategyRPGGameMode_Statics::ClassParams = {
	&AStrategyRPGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyRPGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrategyRPGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrategyRPGGameMode()
{
	if (!Z_Registration_Info_UClass_AStrategyRPGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrategyRPGGameMode.OuterSingleton, Z_Construct_UClass_AStrategyRPGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrategyRPGGameMode.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AStrategyRPGGameMode>()
{
	return AStrategyRPGGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyRPGGameMode);
AStrategyRPGGameMode::~AStrategyRPGGameMode() {}
// End Class AStrategyRPGGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_StrategyRPGGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrategyRPGGameMode, AStrategyRPGGameMode::StaticClass, TEXT("AStrategyRPGGameMode"), &Z_Registration_Info_UClass_AStrategyRPGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrategyRPGGameMode), 3921756954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_StrategyRPGGameMode_h_4044080052(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_StrategyRPGGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_StrategyRPGGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
