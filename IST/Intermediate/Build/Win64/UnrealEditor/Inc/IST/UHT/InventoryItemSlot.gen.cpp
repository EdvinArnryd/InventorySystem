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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
IST_API UClass* Z_Construct_UClass_UDragItemVisual_NoRegister();
IST_API UClass* Z_Construct_UClass_UInventoryItemSlot();
IST_API UClass* Z_Construct_UClass_UInventoryItemSlot_NoRegister();
IST_API UClass* Z_Construct_UClass_UInventoryToolTip_NoRegister();
IST_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragItemVisualClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipClass_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemReference_MetaData[] = {
		{ "Category", "Inventory Slot" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory Slot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/InventoryItemSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DragItemVisualClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ToolTipClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass = { "DragItemVisualClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, DragItemVisualClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragItemVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragItemVisualClass_MetaData), NewProp_DragItemVisualClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass = { "ToolTipClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ToolTipClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryToolTip_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTipClass_MetaData), NewProp_ToolTipClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference = { "ItemReference", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemReference), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemReference_MetaData), NewProp_ItemReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBorder_MetaData), NewProp_ItemBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemSlot, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuantity_MetaData), NewProp_ItemQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_DragItemVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ToolTipClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemSlot_Statics::NewProp_ItemQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemSlot_Statics::PropPointers),
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
		{ Z_Construct_UClass_UInventoryItemSlot, UInventoryItemSlot::StaticClass, TEXT("UInventoryItemSlot"), &Z_Registration_Info_UClass_UInventoryItemSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemSlot), 54518755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_2014874263(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_InventoryItemSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
