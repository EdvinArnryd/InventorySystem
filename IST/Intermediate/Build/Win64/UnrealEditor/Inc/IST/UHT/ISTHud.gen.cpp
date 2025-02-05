// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/ISTHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTHud() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
IST_API UClass* Z_Construct_UClass_AISTHud();
IST_API UClass* Z_Construct_UClass_AISTHud_NoRegister();
IST_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
IST_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class AISTHud
void AISTHud::StaticRegisterNativesAISTHud()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISTHud);
UClass* Z_Construct_UClass_AISTHud_NoRegister()
{
	return AISTHud::StaticClass();
}
struct Z_Construct_UClass_AISTHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UserInterface/ISTHud.h" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AISTHud_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISTHud, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuClass_MetaData), NewProp_MainMenuClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AISTHud_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISTHud, InteractionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetClass_MetaData), NewProp_InteractionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AISTHud_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISTHud, MainMenuWidget), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidget_MetaData), NewProp_MainMenuWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AISTHud_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISTHud, InteractionWidget), Z_Construct_UClass_UInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidget_MetaData), NewProp_InteractionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AISTHud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISTHud_Statics::NewProp_MainMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISTHud_Statics::NewProp_InteractionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISTHud_Statics::NewProp_MainMenuWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISTHud_Statics::NewProp_InteractionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AISTHud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISTHud_Statics::ClassParams = {
	&AISTHud::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AISTHud_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::Class_MetaDataParams), Z_Construct_UClass_AISTHud_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISTHud()
{
	if (!Z_Registration_Info_UClass_AISTHud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISTHud.OuterSingleton, Z_Construct_UClass_AISTHud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISTHud.OuterSingleton;
}
template<> IST_API UClass* StaticClass<AISTHud>()
{
	return AISTHud::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISTHud);
AISTHud::~AISTHud() {}
// End Class AISTHud

// Begin Registration
struct Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISTHud, AISTHud::StaticClass, TEXT("AISTHud"), &Z_Registration_Info_UClass_AISTHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISTHud), 3378080193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_ISTHud_h_2455717145(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
