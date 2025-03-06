// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/GridTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridTile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGridTile_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EGridTileType();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Enum EGridTileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridTileType;
static UEnum* EGridTileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridTileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StrategyRPG_EGridTileType, (UObject*)Z_Construct_UPackage__Script_StrategyRPG(), TEXT("EGridTileType"));
	}
	return Z_Registration_Info_UEnum_EGridTileType.OuterSingleton;
}
template<> STRATEGYRPG_API UEnum* StaticEnum<EGridTileType>()
{
	return EGridTileType_StaticEnum();
}
struct Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EGridTileType::Custom" },
		{ "Desert.DisplayName", "Desert" },
		{ "Desert.Name", "EGridTileType::Desert" },
		{ "Forest.DisplayName", "Forest" },
		{ "Forest.Name", "EGridTileType::Forest" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
		{ "Mountain.DisplayName", "Mountain" },
		{ "Mountain.Name", "EGridTileType::Mountain" },
		{ "Road.DisplayName", "Road" },
		{ "Road.Name", "EGridTileType::Road" },
		{ "Snow.DisplayName", "Snow" },
		{ "Snow.Name", "EGridTileType::Snow" },
		{ "Swamp.DisplayName", "Swamp" },
		{ "Swamp.Name", "EGridTileType::Swamp" },
		{ "Water.DisplayName", "Water" },
		{ "Water.Name", "EGridTileType::Water" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridTileType::Snow", (int64)EGridTileType::Snow },
		{ "EGridTileType::Forest", (int64)EGridTileType::Forest },
		{ "EGridTileType::Mountain", (int64)EGridTileType::Mountain },
		{ "EGridTileType::Water", (int64)EGridTileType::Water },
		{ "EGridTileType::Swamp", (int64)EGridTileType::Swamp },
		{ "EGridTileType::Desert", (int64)EGridTileType::Desert },
		{ "EGridTileType::Road", (int64)EGridTileType::Road },
		{ "EGridTileType::Custom", (int64)EGridTileType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StrategyRPG,
	nullptr,
	"EGridTileType",
	"EGridTileType",
	Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StrategyRPG_EGridTileType()
{
	if (!Z_Registration_Info_UEnum_EGridTileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridTileType.InnerSingleton, Z_Construct_UEnum_StrategyRPG_EGridTileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridTileType.InnerSingleton;
}
// End Enum EGridTileType

// Begin Class AGridTile
void AGridTile::StaticRegisterNativesAGridTile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridTile);
UClass* Z_Construct_UClass_AGridTile_NoRegister()
{
	return AGridTile::StaticClass();
}
struct Z_Construct_UClass_AGridTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GridTile.h" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid coordinates\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupyingUnit_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unit occupying this tile\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unit occupying this tile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile type\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the tile is occupied\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the tile is occupied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalkable_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the tile is walkable\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the tile is walkable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootprintMaterial_MetaData[] = {
		{ "Category", "Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Footprint material\n" },
#endif
		{ "ModuleRelativePath", "Public/GridTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Footprint material" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OccupyingUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
	static void NewProp_bIsOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
	static void NewProp_bIsWalkable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalkable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootprintMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, GridX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridX_MetaData), NewProp_GridX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, GridY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridY_MetaData), NewProp_GridY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_OccupyingUnit = { "OccupyingUnit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, OccupyingUnit), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupyingUnit_MetaData), NewProp_OccupyingUnit_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, TileType), Z_Construct_UEnum_StrategyRPG_EGridTileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileType_MetaData), NewProp_TileType_MetaData) }; // 475922582
void Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
{
	((AGridTile*)Obj)->bIsOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridTile), &Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOccupied_MetaData), NewProp_bIsOccupied_MetaData) };
void Z_Construct_UClass_AGridTile_Statics::NewProp_bIsWalkable_SetBit(void* Obj)
{
	((AGridTile*)Obj)->bIsWalkable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_bIsWalkable = { "bIsWalkable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridTile), &Z_Construct_UClass_AGridTile_Statics::NewProp_bIsWalkable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalkable_MetaData), NewProp_bIsWalkable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMesh_MetaData), NewProp_TileMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridTile_Statics::NewProp_FootprintMaterial = { "FootprintMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridTile, FootprintMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootprintMaterial_MetaData), NewProp_FootprintMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_GridX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_GridY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_OccupyingUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_TileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_TileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_bIsOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_bIsWalkable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_TileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridTile_Statics::NewProp_FootprintMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridTile_Statics::ClassParams = {
	&AGridTile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridTile()
{
	if (!Z_Registration_Info_UClass_AGridTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridTile.OuterSingleton, Z_Construct_UClass_AGridTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridTile.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AGridTile>()
{
	return AGridTile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridTile);
AGridTile::~AGridTile() {}
// End Class AGridTile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridTileType_StaticEnum, TEXT("EGridTileType"), &Z_Registration_Info_UEnum_EGridTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 475922582U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridTile, AGridTile::StaticClass, TEXT("AGridTile"), &Z_Registration_Info_UClass_AGridTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridTile), 3932037213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_3465751022(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
