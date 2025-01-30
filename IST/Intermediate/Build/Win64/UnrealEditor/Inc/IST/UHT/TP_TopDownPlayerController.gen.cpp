// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/TP_TopDownPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TopDownPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
IST_API UClass* Z_Construct_UClass_AISTHud_NoRegister();
IST_API UClass* Z_Construct_UClass_ATP_TopDownPlayerController();
IST_API UClass* Z_Construct_UClass_ATP_TopDownPlayerController_NoRegister();
IST_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
IST_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
IST_API UScriptStruct* Z_Construct_UScriptStruct_Finter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin ScriptStruct Finter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_inter;
class UScriptStruct* Finter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_inter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_inter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_Finter, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("inter"));
	}
	return Z_Registration_Info_UScriptStruct_inter.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<Finter>()
{
	return Finter::StaticStruct();
}
struct Z_Construct_UScriptStruct_Finter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);\n" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Finter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_Finter_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Finter, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Finter_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Finter, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractionCheckTime_MetaData), NewProp_LastInteractionCheckTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Finter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Finter_Statics::NewProp_CurrentInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Finter_Statics::NewProp_LastInteractionCheckTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Finter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_Finter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"inter",
	Z_Construct_UScriptStruct_Finter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Finter_Statics::PropPointers),
	sizeof(Finter),
	alignof(Finter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Finter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_Finter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_Finter()
{
	if (!Z_Registration_Info_UScriptStruct_inter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_inter.InnerSingleton, Z_Construct_UScriptStruct_Finter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_inter.InnerSingleton;
}
// End ScriptStruct Finter

// Begin Class ATP_TopDownPlayerController
void ATP_TopDownPlayerController::StaticRegisterNativesATP_TopDownPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_TopDownPlayerController);
UClass* Z_Construct_UClass_ATP_TopDownPlayerController_NoRegister()
{
	return ATP_TopDownPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATP_TopDownPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TP_TopDownPlayerController.h" },
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractable_MetaData[] = {
		{ "Category", "Character | Interaction" },
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Character | Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "TP_TopDownPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TargetInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PickupRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TopDownPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, HUD), Z_Construct_UClass_AISTHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_TargetInteractable = { "TargetInteractable", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, TargetInteractable), Z_Construct_UClass_UInteractionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInteractable_MetaData), NewProp_TargetInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, PlayerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInventory_MetaData), NewProp_PlayerInventory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_PickupRange = { "PickupRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TopDownPlayerController, PickupRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupRange_MetaData), NewProp_PickupRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_TopDownPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_SetDestinationTouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_TargetInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_CurrentInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_PlayerInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TopDownPlayerController_Statics::NewProp_PickupRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATP_TopDownPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_TopDownPlayerController_Statics::ClassParams = {
	&ATP_TopDownPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATP_TopDownPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_TopDownPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_TopDownPlayerController()
{
	if (!Z_Registration_Info_UClass_ATP_TopDownPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_TopDownPlayerController.OuterSingleton, Z_Construct_UClass_ATP_TopDownPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_TopDownPlayerController.OuterSingleton;
}
template<> IST_API UClass* StaticClass<ATP_TopDownPlayerController>()
{
	return ATP_TopDownPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TopDownPlayerController);
ATP_TopDownPlayerController::~ATP_TopDownPlayerController() {}
// End Class ATP_TopDownPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Finter::StaticStruct, Z_Construct_UScriptStruct_Finter_Statics::NewStructOps, TEXT("inter"), &Z_Registration_Info_UScriptStruct_inter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(Finter), 1136290650U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_TopDownPlayerController, ATP_TopDownPlayerController::StaticClass, TEXT("ATP_TopDownPlayerController"), &Z_Registration_Info_UClass_ATP_TopDownPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_TopDownPlayerController), 4162004266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_13510970(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownPlayerController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
