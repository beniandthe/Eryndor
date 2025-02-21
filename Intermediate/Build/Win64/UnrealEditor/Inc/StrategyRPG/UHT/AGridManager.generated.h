// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGridManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridTile;
class AGridUnit;
class AHero;
#ifdef STRATEGYRPG_AGridManager_generated_h
#error "AGridManager.generated.h already included, missing '#pragma once' in AGridManager.h"
#endif
#define STRATEGYRPG_AGridManager_generated_h

#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveUnitToTile); \
	DECLARE_FUNCTION(execMoveHeroToTile); \
	DECLARE_FUNCTION(execHandleTileSelection); \
	DECLARE_FUNCTION(execHighlightValidMoves); \
	DECLARE_FUNCTION(execGetValidMoves); \
	DECLARE_FUNCTION(execUpdateGridSize); \
	DECLARE_FUNCTION(execGenerateGrid); \
	DECLARE_FUNCTION(execSelectHero); \
	DECLARE_FUNCTION(execSelectUnit); \
	DECLARE_FUNCTION(execSpawnUnitAtTile);


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGridManager(AGridManager&&); \
	AGridManager(const AGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager) \
	NO_API virtual ~AGridManager();


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_13_PROLOG
#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class AGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
