// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridTile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGridTileType : uint8;
#ifdef STRATEGYRPG_GridTile_generated_h
#error "GridTile.generated.h already included, missing '#pragma once' in GridTile.h"
#endif
#define STRATEGYRPG_GridTile_generated_h

#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTileType);


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridTile(); \
	friend struct Z_Construct_UClass_AGridTile_Statics; \
public: \
	DECLARE_CLASS(AGridTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(AGridTile)


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGridTile(AGridTile&&); \
	AGridTile(const AGridTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridTile) \
	NO_API virtual ~AGridTile();


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_24_PROLOG
#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class AGridTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_GridTile_h


#define FOREACH_ENUM_EGRIDTILETYPE(op) \
	op(EGridTileType::Snow) \
	op(EGridTileType::Forest) \
	op(EGridTileType::Mountain) \
	op(EGridTileType::Water) \
	op(EGridTileType::Swamp) \
	op(EGridTileType::Desert) \
	op(EGridTileType::Road) \
	op(EGridTileType::Custom) 

enum class EGridTileType : uint8;
template<> struct TIsUEnumClass<EGridTileType> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<EGridTileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
