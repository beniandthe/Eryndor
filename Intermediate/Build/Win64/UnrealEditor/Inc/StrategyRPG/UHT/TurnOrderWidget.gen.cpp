// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StrategyRPG/Public/TurnOrderWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnOrderWidget() {}

// Begin Cross Module References
STRATEGYRPG_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_ATurnManager_NoRegister();
STRATEGYRPG_API UClass* Z_Construct_UClass_UTurnOrderWidget();
STRATEGYRPG_API UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_StrategyRPG();
// End Cross Module References

// Begin Class UTurnOrderWidget Function OnEndTurnPressed
struct Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles End Turn button press */" },
#endif
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles End Turn button press" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "OnEndTurnPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execOnEndTurnPressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndTurnPressed();
	P_NATIVE_END;
}
// End Class UTurnOrderWidget Function OnEndTurnPressed

// Begin Class UTurnOrderWidget Function UpdateTurnOrder
struct Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics
{
	struct TurnOrderWidget_eventUpdateTurnOrder_Parms
	{
		TArray<AGameCharacter*> TurnOrder;
		int32 CurrentIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the turn order UI */" },
#endif
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the turn order UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TurnOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_TurnOrder_Inner = { "TurnOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGameCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventUpdateTurnOrder_Parms, TurnOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrder_MetaData), NewProp_TurnOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnOrderWidget_eventUpdateTurnOrder_Parms, CurrentIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_TurnOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_TurnOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::NewProp_CurrentIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "UpdateTurnOrder", nullptr, nullptr, Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::TurnOrderWidget_eventUpdateTurnOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execUpdateTurnOrder)
{
	P_GET_TARRAY_REF(AGameCharacter*,Z_Param_Out_TurnOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrder(Z_Param_Out_TurnOrder,Z_Param_CurrentIndex);
	P_NATIVE_END;
}
// End Class UTurnOrderWidget Function UpdateTurnOrder

// Begin Class UTurnOrderWidget Function UpdateTurnOrderDisplay
struct Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the turn order display */" },
#endif
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the turn order display" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnOrderWidget, nullptr, "UpdateTurnOrderDisplay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTurnOrderWidget::execUpdateTurnOrderDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTurnOrderDisplay();
	P_NATIVE_END;
}
// End Class UTurnOrderWidget Function UpdateTurnOrderDisplay

// Begin Class UTurnOrderWidget
void UTurnOrderWidget::StaticRegisterNativesUTurnOrderWidget()
{
	UClass* Class = UTurnOrderWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEndTurnPressed", &UTurnOrderWidget::execOnEndTurnPressed },
		{ "UpdateTurnOrder", &UTurnOrderWidget::execUpdateTurnOrder },
		{ "UpdateTurnOrderDisplay", &UTurnOrderWidget::execUpdateTurnOrderDisplay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnOrderWidget);
UClass* Z_Construct_UClass_UTurnOrderWidget_NoRegister()
{
	return UTurnOrderWidget::StaticClass();
}
struct Z_Construct_UClass_UTurnOrderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UI Widget that displays the turn order of units in combat.\n */" },
#endif
		{ "IncludePath", "TurnOrderWidget.h" },
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Widget that displays the turn order of units in combat." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnManager_MetaData[] = {
		{ "Category", "Turn Order" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Turn Manager */" },
#endif
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Turn Manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnOrderBar_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UI Elements */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Elements" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitNameText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds portraits\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds portraits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTurnButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Displays active unit name\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TurnOrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays active unit name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnOrderBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndTurnButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnOrderWidget_OnEndTurnPressed, "OnEndTurnPressed" }, // 598017938
		{ &Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrder, "UpdateTurnOrder" }, // 513528404
		{ &Z_Construct_UFunction_UTurnOrderWidget_UpdateTurnOrderDisplay, "UpdateTurnOrderDisplay" }, // 3265084961
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnManager = { "TurnManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnManager), Z_Construct_UClass_ATurnManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnManager_MetaData), NewProp_TurnManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderBar = { "TurnOrderBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, TurnOrderBar), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnOrderBar_MetaData), NewProp_TurnOrderBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_UnitNameText = { "UnitNameText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, UnitNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitNameText_MetaData), NewProp_UnitNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EndTurnButton = { "EndTurnButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTurnOrderWidget, EndTurnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTurnButton_MetaData), NewProp_EndTurnButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_TurnOrderBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_UnitNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnOrderWidget_Statics::NewProp_EndTurnButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_StrategyRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams = {
	&UTurnOrderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnOrderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnOrderWidget()
{
	if (!Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton, Z_Construct_UClass_UTurnOrderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnOrderWidget.OuterSingleton;
}
template<> STRATEGYRPG_API UClass* StaticClass<UTurnOrderWidget>()
{
	return UTurnOrderWidget::StaticClass();
}
UTurnOrderWidget::UTurnOrderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnOrderWidget);
UTurnOrderWidget::~UTurnOrderWidget() {}
// End Class UTurnOrderWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnOrderWidget, UTurnOrderWidget::StaticClass, TEXT("UTurnOrderWidget"), &Z_Registration_Info_UClass_UTurnOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnOrderWidget), 3257880895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_1766324972(TEXT("/Script/StrategyRPG"),
	Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rossm_Downloads_Eryndor_Shattered_Essence_master_Eryndor_Shattered_Essence_master_Source_StrategyRPG_Public_TurnOrderWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
