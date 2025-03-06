// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/AHero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAHero() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero();
STRATEGYRPG_API UClass* Z_Construct_UClass_AHero_NoRegister();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EFaction();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_EHeroClass();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_ERace();
STRATEGYRPG_API UEnum* Z_Construct_UEnum_StrategyRPG_ETurnState();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class AHero Function MoveFreely
struct Z_Construct_UFunction_AHero_MoveFreely_Statics
{
	struct Hero_eventMoveFreely_Parms
	{
		FVector Destination;
		bool bIsMouseClick;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "CPP_Default_bIsMouseClick", "false" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static void NewProp_bIsMouseClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMouseClick;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventMoveFreely_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_bIsMouseClick_SetBit(void* Obj)
{
	((Hero_eventMoveFreely_Parms*)Obj)->bIsMouseClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_bIsMouseClick = { "bIsMouseClick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Hero_eventMoveFreely_Parms), &Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_bIsMouseClick_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_MoveFreely_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveFreely_Statics::NewProp_bIsMouseClick,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveFreely_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveFreely_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveFreely", nullptr, nullptr, Z_Construct_UFunction_AHero_MoveFreely_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveFreely_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_MoveFreely_Statics::Hero_eventMoveFreely_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveFreely_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_MoveFreely_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_MoveFreely_Statics::Hero_eventMoveFreely_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_MoveFreely()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_MoveFreely_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execMoveFreely)
{
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_UBOOL(Z_Param_bIsMouseClick);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveFreely(Z_Param_Destination,Z_Param_bIsMouseClick);
	P_NATIVE_END;
}
// End Class AHero Function MoveFreely

// Begin Class AHero Function MoveToLocation
struct Z_Construct_UFunction_AHero_MoveToLocation_Statics
{
	struct Hero_eventMoveToLocation_Parms
	{
		FVector TargetLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHero_MoveToLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventMoveToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_MoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_MoveToLocation_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveToLocation", nullptr, nullptr, Z_Construct_UFunction_AHero_MoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_MoveToLocation_Statics::Hero_eventMoveToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_MoveToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_MoveToLocation_Statics::Hero_eventMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_MoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_MoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execMoveToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToLocation(Z_Param_TargetLocation);
	P_NATIVE_END;
}
// End Class AHero Function MoveToLocation

// Begin Class AHero Function MoveToMouseClick
struct Z_Construct_UFunction_AHero_MoveToMouseClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Movement */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Movement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_MoveToMouseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "MoveToMouseClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_MoveToMouseClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_MoveToMouseClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHero_MoveToMouseClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_MoveToMouseClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execMoveToMouseClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToMouseClick();
	P_NATIVE_END;
}
// End Class AHero Function MoveToMouseClick

// Begin Class AHero Function ResetCamera
struct Z_Construct_UFunction_AHero_ResetCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_ResetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "ResetCamera", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_ResetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_ResetCamera_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHero_ResetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_ResetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execResetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCamera();
	P_NATIVE_END;
}
// End Class AHero Function ResetCamera

// Begin Class AHero Function SelectAction
struct Z_Construct_UFunction_AHero_SelectAction_Statics
{
	struct Hero_eventSelectAction_Parms
	{
		ETurnState Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHero_SelectAction_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHero_SelectAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Hero_eventSelectAction_Parms, Action), Z_Construct_UEnum_StrategyRPG_ETurnState, METADATA_PARAMS(0, nullptr) }; // 963227532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHero_SelectAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_SelectAction_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHero_SelectAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SelectAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHero_SelectAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHero, nullptr, "SelectAction", nullptr, nullptr, Z_Construct_UFunction_AHero_SelectAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SelectAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHero_SelectAction_Statics::Hero_eventSelectAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHero_SelectAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHero_SelectAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHero_SelectAction_Statics::Hero_eventSelectAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHero_SelectAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHero_SelectAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHero::execSelectAction)
{
	P_GET_ENUM(ETurnState,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectAction(ETurnState(Z_Param_Action));
	P_NATIVE_END;
}
// End Class AHero Function SelectAction

// Begin Class AHero
void AHero::StaticRegisterNativesAHero()
{
	UClass* Class = AHero::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveFreely", &AHero::execMoveFreely },
		{ "MoveToLocation", &AHero::execMoveToLocation },
		{ "MoveToMouseClick", &AHero::execMoveToMouseClick },
		{ "ResetCamera", &AHero::execResetCamera },
		{ "SelectAction", &AHero::execSelectAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHero);
UClass* Z_Construct_UClass_AHero_NoRegister()
{
	return AHero::StaticClass();
}
struct Z_Construct_UClass_AHero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AHero.h" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveClickAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Components */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMoveSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_CameraZoom_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_CameraRotate_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_CameraMove_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEssence_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique Attributes */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkEssence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightEssenceThreshold_MetaData[] = {
		{ "Category", "Morality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Morality System */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Morality System" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkEssenceThreshold_MetaData[] = {
		{ "Category", "Morality" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines Light skill unlocks\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines Light skill unlocks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[] = {
		{ "Category", "Faction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Faction */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Faction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Race_MetaData[] = {
		{ "Category", "Race" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Race */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Race" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroClass_MetaData[] = {
		{ "Category", "Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hero's Class */" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hero's Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCameraDetached_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/AHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraFollowsHero_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True when camera is freely moving\n" },
#endif
		{ "ModuleRelativePath", "Public/AHero.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True when camera is freely moving" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_CameraZoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_CameraRotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_CameraMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightEssence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DarkEssence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightEssenceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DarkEssenceThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Faction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Race_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Race;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeroClass_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeroClass;
	static void NewProp_bIsCameraDetached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraDetached;
	static void NewProp_bCameraFollowsHero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraFollowsHero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHero_MoveFreely, "MoveFreely" }, // 2740233490
		{ &Z_Construct_UFunction_AHero_MoveToLocation, "MoveToLocation" }, // 3948838682
		{ &Z_Construct_UFunction_AHero_MoveToMouseClick, "MoveToMouseClick" }, // 3755118779
		{ &Z_Construct_UFunction_AHero_ResetCamera, "ResetCamera" }, // 1198772494
		{ &Z_Construct_UFunction_AHero_SelectAction, "SelectAction" }, // 3642879891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_HeroMappingContext = { "HeroMappingContext", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, HeroMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroMappingContext_MetaData), NewProp_HeroMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_MoveClickAction = { "MoveClickAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, MoveClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveClickAction_MetaData), NewProp_MoveClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraMoveSpeed = { "CameraMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CameraMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMoveSpeed_MetaData), NewProp_CameraMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, CameraRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationSpeed_MetaData), NewProp_CameraRotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraZoom = { "IA_CameraZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, IA_CameraZoom), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_CameraZoom_MetaData), NewProp_IA_CameraZoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraRotate = { "IA_CameraRotate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, IA_CameraRotate), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_CameraRotate_MetaData), NewProp_IA_CameraRotate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraMove = { "IA_CameraMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, IA_CameraMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_CameraMove_MetaData), NewProp_IA_CameraMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_LightEssence = { "LightEssence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, LightEssence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEssence_MetaData), NewProp_LightEssence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_DarkEssence = { "DarkEssence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, DarkEssence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkEssence_MetaData), NewProp_DarkEssence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_LightEssenceThreshold = { "LightEssenceThreshold", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, LightEssenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightEssenceThreshold_MetaData), NewProp_LightEssenceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_DarkEssenceThreshold = { "DarkEssenceThreshold", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, DarkEssenceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkEssenceThreshold_MetaData), NewProp_DarkEssenceThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Faction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Faction), Z_Construct_UEnum_StrategyRPG_EFaction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faction_MetaData), NewProp_Faction_MetaData) }; // 4280729339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Race_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_Race = { "Race", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, Race), Z_Construct_UEnum_StrategyRPG_ERace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Race_MetaData), NewProp_Race_MetaData) }; // 3520262559
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHero_Statics::NewProp_HeroClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_HeroClass = { "HeroClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHero, HeroClass), Z_Construct_UEnum_StrategyRPG_EHeroClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroClass_MetaData), NewProp_HeroClass_MetaData) }; // 158982506
void Z_Construct_UClass_AHero_Statics::NewProp_bIsCameraDetached_SetBit(void* Obj)
{
	((AHero*)Obj)->bIsCameraDetached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_bIsCameraDetached = { "bIsCameraDetached", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHero), &Z_Construct_UClass_AHero_Statics::NewProp_bIsCameraDetached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCameraDetached_MetaData), NewProp_bIsCameraDetached_MetaData) };
void Z_Construct_UClass_AHero_Statics::NewProp_bCameraFollowsHero_SetBit(void* Obj)
{
	((AHero*)Obj)->bCameraFollowsHero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHero_Statics::NewProp_bCameraFollowsHero = { "bCameraFollowsHero", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHero), &Z_Construct_UClass_AHero_Statics::NewProp_bCameraFollowsHero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraFollowsHero_MetaData), NewProp_bCameraFollowsHero_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_HeroMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_MoveClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_CameraRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraRotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_IA_CameraMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_LightEssence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_DarkEssence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_LightEssenceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_DarkEssenceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Faction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Race_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_Race,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_HeroClass_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_HeroClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_bIsCameraDetached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHero_Statics::NewProp_bCameraFollowsHero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHero_Statics::ClassParams = {
	&AHero::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHero_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHero_Statics::Class_MetaDataParams), Z_Construct_UClass_AHero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHero()
{
	if (!Z_Registration_Info_UClass_AHero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHero.OuterSingleton, Z_Construct_UClass_AHero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHero.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<AHero>()
{
	return AHero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHero);
AHero::~AHero() {}
// End Class AHero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHero, AHero::StaticClass, TEXT("AHero"), &Z_Registration_Info_UClass_AHero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHero), 3957001817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_268307741(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_AHero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
