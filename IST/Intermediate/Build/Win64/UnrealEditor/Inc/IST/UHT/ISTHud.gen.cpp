// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/UserInterface/ISTHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTHud() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
IST_API UClass* Z_Construct_UClass_AISTHud();
IST_API UClass* Z_Construct_UClass_AISTHud_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class AISTHud
void AISTHud::StaticRegisterNativesAISTHud()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISTHud);
UClass* Z_Construct_UClass_AISTHud_NoRegister()
{
	return AISTHud::StaticClass();
}
struct Z_Construct_UClass_AISTHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UserInterface/ISTHud.h" },
		{ "ModuleRelativePath", "Public/UserInterface/ISTHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AISTHud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISTHud_Statics::ClassParams = {
	&AISTHud::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISTHud_Statics::Class_MetaDataParams), Z_Construct_UClass_AISTHud_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISTHud()
{
	if (!Z_Registration_Info_UClass_AISTHud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISTHud.OuterSingleton, Z_Construct_UClass_AISTHud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISTHud.OuterSingleton;
}
template<> IST_API UClass* StaticClass<AISTHud>()
{
	return AISTHud::StaticClass();
}
AISTHud::AISTHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISTHud);
AISTHud::~AISTHud() {}
// End Class AISTHud

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISTHud, AISTHud::StaticClass, TEXT("AISTHud"), &Z_Registration_Info_UClass_AISTHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISTHud), 394200457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_ISTHud_h_1402686875(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_UserInterface_ISTHud_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
