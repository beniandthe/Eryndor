// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeroTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRATEGYRPG_HeroTypes_generated_h
#error "HeroTypes.generated.h already included, missing '#pragma once' in HeroTypes.h"
#endif
#define STRATEGYRPG_HeroTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_HeroTypes_h


#define FOREACH_ENUM_ERACE(op) \
	op(ERace::Human) \
	op(ERace::Orc) \
	op(ERace::Elf) \
	op(ERace::Drow) \
	op(ERace::Halfling) \
	op(ERace::Dragonborn) 

enum class ERace : uint8;
template<> struct TIsUEnumClass<ERace> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<ERace>();

#define FOREACH_ENUM_EHEROCLASS(op) \
	op(EHeroClass::Warrior) \
	op(EHeroClass::Mage) \
	op(EHeroClass::Barabarian) \
	op(EHeroClass::Rogue) \
	op(EHeroClass::Paladin) \
	op(EHeroClass::Ranger) \
	op(EHeroClass::Necromancer) 

enum class EHeroClass : uint8;
template<> struct TIsUEnumClass<EHeroClass> { enum { Value = true }; };
template<> STRATEGYRPG_API UEnum* StaticEnum<EHeroClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
