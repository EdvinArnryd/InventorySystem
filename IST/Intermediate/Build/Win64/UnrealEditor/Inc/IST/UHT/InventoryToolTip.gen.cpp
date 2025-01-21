// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Inventory/InventoryToolTip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryToolTip() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UInventoryToolTip();
IST_API UClass* Z_Construct_UClass_UInventoryToolTip_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UInventoryToolTip
void UInventoryToolTip::StaticRegisterNativesUInventoryToolTip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryToolTip);
UClass* Z_Construct_UClass_UInventoryToolTip_NoRegister()
{
	return UInventoryToolTip::StaticClass();
}
struct Z_Construct_UClass_UInventoryToolTip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Inventory/InventoryToolTip.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryToolTip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryToolTip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryToolTip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryToolTip_Statics::ClassParams = {
	&UInventoryToolTip::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryToolTip_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryToolTip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryToolTip()
{
	if (!Z_Registration_Info_UClass_UInventoryToolTip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryToolTip.OuterSingleton, Z_Construct_UClass_UInventoryToolTip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryToolTip.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInventoryToolTip>()
{
	return UInventoryToolTip::StaticClass();
}
UInventoryToolTip::UInventoryToolTip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryToolTip);
UInventoryToolTip::~UInventoryToolTip() {}
// End Class UInventoryToolTip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryToolTip, UInventoryToolTip::StaticClass, TEXT("UInventoryToolTip"), &Z_Registration_Info_UClass_UInventoryToolTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryToolTip), 2062004397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_477455197(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
