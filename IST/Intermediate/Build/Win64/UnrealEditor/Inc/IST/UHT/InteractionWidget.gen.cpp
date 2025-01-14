// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Interaction/InteractionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionWidget() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UInteractionWidget();
IST_API UClass* Z_Construct_UClass_UInteractionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UInteractionWidget
void UInteractionWidget::StaticRegisterNativesUInteractionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionWidget);
UClass* Z_Construct_UClass_UInteractionWidget_NoRegister()
{
	return UInteractionWidget::StaticClass();
}
struct Z_Construct_UClass_UInteractionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Interaction/InteractionWidget.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Interaction/InteractionWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionWidget_Statics::ClassParams = {
	&UInteractionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionWidget()
{
	if (!Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton, Z_Construct_UClass_UInteractionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionWidget.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInteractionWidget>()
{
	return UInteractionWidget::StaticClass();
}
UInteractionWidget::UInteractionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionWidget);
UInteractionWidget::~UInteractionWidget() {}
// End Class UInteractionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Interaction_InteractionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionWidget, UInteractionWidget::StaticClass, TEXT("UInteractionWidget"), &Z_Registration_Info_UClass_UInteractionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionWidget), 2663925064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Interaction_InteractionWidget_h_3247594530(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Interaction_InteractionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Interaction_InteractionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
