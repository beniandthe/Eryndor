// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnOrderWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameCharacter;
#ifdef STRATEGYRPG_TurnOrderWidget_generated_h
#error "TurnOrderWidget.generated.h already included, missing '#pragma once' in TurnOrderWidget.h"
#endif
#define STRATEGYRPG_TurnOrderWidget_generated_h

#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTurnOrder); \
	DECLARE_FUNCTION(execOnEndTurnPressed); \
	DECLARE_FUNCTION(execUpdateTurnOrderDisplay);


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnOrderWidget(); \
	friend struct Z_Construct_UClass_UTurnOrderWidget_Statics; \
public: \
	DECLARE_CLASS(UTurnOrderWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(UTurnOrderWidget)


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnOrderWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTurnOrderWidget(UTurnOrderWidget&&); \
	UTurnOrderWidget(const UTurnOrderWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnOrderWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnOrderWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnOrderWidget) \
	NO_API virtual ~UTurnOrderWidget();


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_18_PROLOG
#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class UTurnOrderWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
