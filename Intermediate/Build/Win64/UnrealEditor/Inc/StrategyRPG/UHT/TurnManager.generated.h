// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameCharacter;
class AGridManager;
class UTexture2D;
#ifdef STRATEGYRPG_TurnManager_generated_h
#error "TurnManager.generated.h already included, missing '#pragma once' in TurnManager.h"
#endif
#define STRATEGYRPG_TurnManager_generated_h

#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUnitPortrait); \
	DECLARE_FUNCTION(execStartCombat); \
	DECLARE_FUNCTION(execGetCurrentUnit); \
	DECLARE_FUNCTION(execNextTurn); \
	DECLARE_FUNCTION(execInitializeTurnOrder);


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnManager(); \
	friend struct Z_Construct_UClass_ATurnManager_Statics; \
public: \
	DECLARE_CLASS(ATurnManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(ATurnManager)


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurnManager(ATurnManager&&); \
	ATurnManager(const ATurnManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnManager) \
	NO_API virtual ~ATurnManager();


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_12_PROLOG
#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class ATurnManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
