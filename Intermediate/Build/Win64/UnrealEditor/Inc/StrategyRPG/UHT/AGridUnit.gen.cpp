// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AGridUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGridUnit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridUnit();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridUnit_NoRegister();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AGridUnit Function SetPositionOnGrid
struct Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics
{
	struct GridUnit_eventSetPositionOnGrid_Parms
	{
		AGridTile* NewTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGridUnit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridUnit_eventSetPositionOnGrid_Parms, NewTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::NewProp_NewTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridUnit, nullptr, "SetPositionOnGrid", nullptr, nullptr, Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::GridUnit_eventSetPositionOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::GridUnit_eventSetPositionOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridUnit_SetPositionOnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridUnit_SetPositionOnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridUnit::execSetPositionOnGrid)
{
	P_GET_OBJECT(AGridTile,Z_Param_NewTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionOnGrid(Z_Param_NewTile);
	P_NATIVE_END;
}
// End Class AGridUnit Function SetPositionOnGrid

// Begin Class AGridUnit
void AGridUnit::StaticRegisterNativesAGridUnit()
{
	UClass* Class = AGridUnit::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPositionOnGrid", &AGridUnit::execSetPositionOnGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridUnit);
UClass* Z_Construct_UClass_AGridUnit_NoRegister()
{
	return AGridUnit::StaticClass();
}
struct Z_Construct_UClass_AGridUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AGridUnit.h" },
		{ "ModuleRelativePath", "Public/AGridUnit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AGridUnit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupiedTile_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/AGridUnit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OccupiedTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridUnit_SetPositionOnGrid, "SetPositionOnGrid" }, // 569324930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridUnit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridUnit_Statics::NewProp_UnitMesh = { "UnitMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridUnit, UnitMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitMesh_MetaData), NewProp_UnitMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridUnit_Statics::NewProp_OccupiedTile = { "OccupiedTile", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridUnit, OccupiedTile), Z_Construct_UClass_AGridTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupiedTile_MetaData), NewProp_OccupiedTile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridUnit_Statics::NewProp_UnitMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridUnit_Statics::NewProp_OccupiedTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridUnit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridUnit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridUnit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridUnit_Statics::ClassParams = {
	&AGridUnit::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridUnit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridUnit_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridUnit_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridUnit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridUnit()
{
	if (!Z_Registration_Info_UClass_AGridUnit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridUnit.OuterSingleton, Z_Construct_UClass_AGridUnit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridUnit.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGridUnit>()
{
	return AGridUnit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridUnit);
AGridUnit::~AGridUnit() {}
// End Class AGridUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridUnit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridUnit, AGridUnit::StaticClass, TEXT("AGridUnit"), &Z_Registration_Info_UClass_AGridUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridUnit), 1640527497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridUnit_h_1446110743(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridUnit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
