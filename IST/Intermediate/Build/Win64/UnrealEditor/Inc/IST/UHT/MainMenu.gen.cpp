// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}

// Begin Cross Module References
IST_API UClass* Z_Construct_UClass_AISTCharacter_NoRegister();
IST_API UClass* Z_Construct_UClass_UMainMenu();
IST_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class UMainMenu
void UMainMenu::StaticRegisterNativesUMainMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
UClass* Z_Construct_UClass_UMainMenu_NoRegister()
{
	return UMainMenu::StaticClass();
}
struct Z_Construct_UClass_UMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UserInterface/MainMenu.h" },
		{ "ModuleRelativePath", "Public/UserInterface/MainMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UserInterface/MainMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenu, PlayerCharacter), Z_Construct_UClass_AISTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
	&UMainMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMainMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenu()
{
	if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UMainMenu>()
{
	return UMainMenu::StaticClass();
}
UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
UMainMenu::~UMainMenu() {}
// End Class UMainMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_MainMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 585538105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_MainMenu_h_2822620448(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_MainMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
