// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Inventory/InventoryItemSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemSlot() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UInventoryItemSlot();
IST_API UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UInventoryItemSlot
void UInventoryItemSlot::StaticRegisterNativesUInventoryItemSlot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemSlot);
UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister()
{
	return UInventoryItemSlot::StaticClass();
}
struct Z_Construct_UClass_UInventoryItemSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Inventory/InventoryItemSlot.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryItemSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemSlot_Statics::ClassParams = {
	&UInventoryItemSlot::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryItemSlot()
{
	if (!Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton, Z_Construct_UClass_UInventoryItemSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryItemSlot.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInventoryItemSlot>()
{
	return UInventoryItemSlot::StaticClass();
}
UInventoryItemSlot::UInventoryItemSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemSlot);
UInventoryItemSlot::~UInventoryItemSlot() {}
// End Class UInventoryItemSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemSlot, UInventoryItemSlot::StaticClass, TEXT("UInventoryItemSlot"), &Z_Registration_Info_UClass_UInventoryItemSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemSlot), 2434805096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_1080740253(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
