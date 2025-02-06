// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Interaction/InteractionText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionText() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UInteractionText();
IST_API UClass* Z_Construct_UClass_UInteractionText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UInteractionText
void UInteractionText::StaticRegisterNativesUInteractionText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionText);
UClass* Z_Construct_UClass_UInteractionText_NoRegister()
{
	return UInteractionText::StaticClass();
}
struct Z_Construct_UClass_UInteractionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n **/" },
#endif
		{ "IncludePath", "UserInterface/Interaction/InteractionText.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionText, Name), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionText_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionText_Statics::ClassParams = {
	&UInteractionText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractionText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionText_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionText_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionText()
{
	if (!Z_Registration_Info_UClass_UInteractionText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionText.OuterSingleton, Z_Construct_UClass_UInteractionText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionText.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInteractionText>()
{
	return UInteractionText::StaticClass();
}
UInteractionText::UInteractionText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionText);
UInteractionText::~UInteractionText() {}
// End Class UInteractionText

// Begin Registration
struct Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_Interaction_InteractionText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionText, UInteractionText::StaticClass, TEXT("UInteractionText"), &Z_Registration_Info_UClass_UInteractionText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionText), 2045025106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_Interaction_InteractionText_h_581057118(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_Interaction_InteractionText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_Public_UserInterface_Interaction_InteractionText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
