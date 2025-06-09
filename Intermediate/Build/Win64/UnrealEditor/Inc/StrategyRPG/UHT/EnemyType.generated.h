// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGYRPG_EnemyType_generated_h
#error "EnemyType.generated.h already included, missing '#pragma once' in EnemyType.h"
#endif
#define STRATEGYRPG_EnemyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_EnemyType_h


#define FOREACH_ENUM_EENEMYTYPE(op) \
	op(EEnemyType::GoblinMelee) \
	op(EEnemyType::GoblinRanged) \
	op(EEnemyType::GoblinMagic) \
	op(EEnemyType::GoblinTank) \
	op(EEnemyType::GoblinBoss) 

enum class EEnemyType : uint8;
template<> struct TIsUEnumClass<EEnemyType> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<EEnemyType>();

#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Idle) \
	op(EEnemyState::Patrol) \
	op(EEnemyState::Chase) \
	op(EEnemyState::Attack) \
	op(EEnemyState::Dead) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
