// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/ISTGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISTGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IST_API UClass* Z_Construct_UClass_AISTGameMode();
IST_API UClass* Z_Construct_UClass_AISTGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class AISTGameMode
void AISTGameMode::StaticRegisterNativesAISTGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISTGameMode);
UClass* Z_Construct_UClass_AISTGameMode_NoRegister()
{
	return AISTGameMode::StaticClass();
}
struct Z_Construct_UClass_AISTGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ISTGameMode.h" },
		{ "ModuleRelativePath", "ISTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISTGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AISTGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISTGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISTGameMode_Statics::ClassParams = {
	&AISTGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISTGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AISTGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISTGameMode()
{
	if (!Z_Registration_Info_UClass_AISTGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISTGameMode.OuterSingleton, Z_Construct_UClass_AISTGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISTGameMode.OuterSingleton;
}
template<> IST_API UClass* StaticClass<AISTGameMode>()
{
	return AISTGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISTGameMode);
AISTGameMode::~AISTGameMode() {}
// End Class AISTGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISTGameMode, AISTGameMode::StaticClass, TEXT("AISTGameMode"), &Z_Registration_Info_UClass_AISTGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISTGameMode), 3566885033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_1027874146(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
