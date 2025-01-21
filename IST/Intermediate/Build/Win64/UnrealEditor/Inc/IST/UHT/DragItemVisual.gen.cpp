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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragItemVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UDragItemVisual, UDragItemVisual::StaticClass, TEXT("UDragItemVisual"), &Z_Registration_Info_UClass_UDragItemVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragItemVisual), 3310386972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_3723685100(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_DragItemVisual_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
