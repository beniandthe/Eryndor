// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGameCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameCharacter;
class AGridTile;
class UTexture2D;
#ifdef STRATEGYRPG_AGameCharacter_generated_h
#error "AGameCharacter.generated.h already included, missing '#pragma once' in AGameCharacter.h"
#endif
#define STRATEGYRPG_AGameCharacter_generated_h

#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPortraitTexture); \
	DECLARE_FUNCTION(execGetMoveRange); \
	DECLARE_FUNCTION(execOnAttributeModified); \
	DECLARE_FUNCTION(execCalculateClassSpecificStats); \
	DECLARE_FUNCTION(execCalculateDerivedStats); \
	DECLARE_FUNCTION(execPerformAction); \
	DECLARE_FUNCTION(execTakeTurn); \
	DECLARE_FUNCTION(execCalculateMovementRange); \
	DECLARE_FUNCTION(execEndTurn); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execCheckForEnemiesNearby); \
	DECLARE_FUNCTION(execModifyAttribute); \
	DECLARE_FUNCTION(execSetCurrentTile); \
	DECLARE_FUNCTION(execMoveToTile); \
	DECLARE_FUNCTION(execSetPositionOnGrid); \
	DECLARE_FUNCTION(execSetEquippedArmorWeight);


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCharacter(); \
	friend struct Z_Construct_UClass_AGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StrategyRPG"), NO_API) \
	DECLARE_SERIALIZER(AGameCharacter)


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameCharacter(AGameCharacter&&); \
	AGameCharacter(const AGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCharacter) \
	NO_API virtual ~AGameCharacter();


#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_24_PROLOG
#define FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRATEGYRPG_API UClass* StaticClass<class AGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AGameCharacter_h


#define FOREACH_ENUM_ETURNSTATE(op) \
	op(ETurnState::Waiting) \
	op(ETurnState::Moving) \
	op(ETurnState::Attacking) \
	op(ETurnState::Ended) 

enum class ETurnState : uint8;
template<> struct TIsUEnumClass<ETurnState> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<ETurnState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
