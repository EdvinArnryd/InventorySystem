// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Inventory/DragItemVisual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragItemVisual() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UDragItemVisual();
IST_API UClass* Z_Construct_UClass_UDragItemVisual_NoRegister();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UDragItemVisual
void UDragItemVisual::StaticRegisterNativesUDragItemVisual()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragItemVisual);
UClass* Z_Construct_UClass_UDragItemVisual_NoRegister()
{
	return UDragItemVisual::StaticClass();
}
struct Z_Construct_UClass_UDragItemVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Inventory/DragItemVisual.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Drag Item Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/DragItemVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragItemVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder = { "ItemBorder", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemBorder_MetaData), NewProp_ItemBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragItemVisual, ItemQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuantity_MetaData), NewProp_ItemQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragItemVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragItemVisual_Statics::NewProp_ItemQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDragItemVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragItemVisual_Statics::ClassParams = {
	&UDragItemVisual::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDragItemVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragItemVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragItemVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDragItemVisual()
{
	if (!Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton, Z_Construct_UClass_UDragItemVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDragItemVisual.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UDragItemVisual>()
{
	return UDragItemVisual::StaticClass();
}
UDragItemVisual::UDragItemVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDragItemVisual);
UDragItemVisual::~UDragItemVisual() {}
// End Class UDragItemVisual

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDragItemVisual, UDragItemVisual::StaticClass, TEXT("UDragItemVisual"), &Z_Registration_Info_UClass_UDragItemVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragItemVisual), 3667184622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_2298710212(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
