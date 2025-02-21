// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactionTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGYRPG_FactionTypes_generated_h
#error "FactionTypes.generated.h already included, missing '#pragma once' in FactionTypes.h"
#endif
#define STRATEGYRPG_FactionTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_FactionTypes_h


#define FOREACH_ENUM_EFACTION(op) \
	op(EFaction::None) \
	op(EFaction::Empire) \
	op(EFaction::Rebels) \
	op(EFaction::Nomads) \
	op(EFaction::Mystics) \
	op(EFaction::Mercenaries) 

enum class EFaction : uint8;
template<> struct TIsUEnumClass<EFaction> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<EFaction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
