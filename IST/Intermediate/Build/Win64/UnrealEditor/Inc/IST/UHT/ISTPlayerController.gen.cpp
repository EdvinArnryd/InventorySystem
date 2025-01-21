// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/Player/ISTPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
IST_API UClass* Z_Construct_UClass_AISTPlayerController();
IST_API UClass* Z_Construct_UClass_AISTPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class AISTPlayerController
void AISTPlayerController::StaticRegisterNativesAISTPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISTPlayerController);
UClass* Z_Construct_UClass_AISTPlayerController_NoRegister()
{
	return AISTPlayerController::StaticClass();
}
struct Z_Construct_UClass_AISTPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ISTPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/ISTPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AISTPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISTPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISTPlayerController_Statics::ClassParams = {
	&AISTPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISTPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AISTPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISTPlayerController()
{
	if (!Z_Registration_Info_UClass_AISTPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISTPlayerController.OuterSingleton, Z_Construct_UClass_AISTPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISTPlayerController.OuterSingleton;
}
template<> IST_API UClass* StaticClass<AISTPlayerController>()
{
	return AISTPlayerController::StaticClass();
}
AISTPlayerController::AISTPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISTPlayerController);
AISTPlayerController::~AISTPlayerController() {}
// End Class AISTPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISTPlayerController, AISTPlayerController::StaticClass, TEXT("AISTPlayerController"), &Z_Registration_Info_UClass_AISTPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISTPlayerController), 4040672840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_3285361610(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
