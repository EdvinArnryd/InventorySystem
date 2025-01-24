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
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorRating_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackWeight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryToolTip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmorRating;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SellValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StackWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryToolTip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, ItemType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, DamageValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageValue_MetaData), NewProp_DamageValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ArmorRating = { "ArmorRating", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, ArmorRating), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorRating_MetaData), NewProp_ArmorRating_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, UsageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageText_MetaData), NewProp_UsageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, ItemDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, MaxStackSize), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_SellValue = { "SellValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, SellValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellValue_MetaData), NewProp_SellValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_StackWeight = { "StackWeight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryToolTip, StackWeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackWeight_MetaData), NewProp_StackWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryToolTip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ArmorRating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_UsageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_SellValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryToolTip_Statics::NewProp_StackWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryToolTip_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UInventoryToolTip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryToolTip_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Skrivbordet_InventorySystemTut_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryToolTip, UInventoryToolTip::StaticClass, TEXT("UInventoryToolTip"), &Z_Registration_Info_UClass_UInventoryToolTip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryToolTip), 3608810996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Skrivbordet_InventorySystemTut_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_3707489617(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Skrivbordet_InventorySystemTut_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Skrivbordet_InventorySystemTut_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryToolTip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
