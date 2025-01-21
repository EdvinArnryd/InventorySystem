// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/Inventory/ItemDragDropOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDragDropOperation() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_UItemDragDropOperation();
IST_API UClass* Z_Construct_UClass_UItemDragDropOperation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UItemDragDropOperation
void UItemDragDropOperation::StaticRegisterNativesUItemDragDropOperation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDragDropOperation);
UClass* Z_Construct_UClass_UItemDragDropOperation_NoRegister()
{
	return UItemDragDropOperation::StaticClass();
}
struct Z_Construct_UClass_UItemDragDropOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/Inventory/ItemDragDropOperation.h" },
		{ "ModuleRelativePath", "Public/UserInterface/Inventory/ItemDragDropOperation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDragDropOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemDragDropOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDragDropOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDragDropOperation_Statics::ClassParams = {
	&UItemDragDropOperation::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDragDropOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDragDropOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDragDropOperation()
{
	if (!Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton, Z_Construct_UClass_UItemDragDropOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDragDropOperation.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UItemDragDropOperation>()
{
	return UItemDragDropOperation::StaticClass();
}
UItemDragDropOperation::UItemDragDropOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDragDropOperation);
UItemDragDropOperation::~UItemDragDropOperation() {}
// End Class UItemDragDropOperation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDragDropOperation, UItemDragDropOperation::StaticClass, TEXT("UItemDragDropOperation"), &Z_Registration_Info_UClass_UItemDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDragDropOperation), 1601912092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_1375124310(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
