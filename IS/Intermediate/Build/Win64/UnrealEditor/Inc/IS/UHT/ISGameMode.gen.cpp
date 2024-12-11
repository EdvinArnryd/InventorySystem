// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IS/ISGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IS_API UClass* Z_Construct_UClass_AISGameMode();
IS_API UClass* Z_Construct_UClass_AISGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IS();
// End Cross Module References

// Begin Class AISGameMode
void AISGameMode::StaticRegisterNativesAISGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISGameMode);
UClass* Z_Construct_UClass_AISGameMode_NoRegister()
{
	return AISGameMode::StaticClass();
}
struct Z_Construct_UClass_AISGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ISGameMode.h" },
		{ "ModuleRelativePath", "ISGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AISGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISGameMode_Statics::ClassParams = {
	&AISGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AISGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISGameMode()
{
	if (!Z_Registration_Info_UClass_AISGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISGameMode.OuterSingleton, Z_Construct_UClass_AISGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISGameMode.OuterSingleton;
}
template<> IS_API UClass* StaticClass<AISGameMode>()
{
	return AISGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISGameMode);
AISGameMode::~AISGameMode() {}
// End Class AISGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_ISGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISGameMode, AISGameMode::StaticClass, TEXT("AISGameMode"), &Z_Registration_Info_UClass_AISGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISGameMode), 974325148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_ISGameMode_h_3334642363(TEXT("/Script/IS"),
	Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_ISGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_ISGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
