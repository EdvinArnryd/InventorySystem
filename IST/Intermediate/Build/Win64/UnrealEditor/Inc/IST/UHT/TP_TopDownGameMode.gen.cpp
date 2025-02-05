// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/TP_TopDownGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TopDownGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IST_API UClass* Z_Construct_UClass_ATP_TopDownGameMode();
IST_API UClass* Z_Construct_UClass_ATP_TopDownGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Class ATP_TopDownGameMode
void ATP_TopDownGameMode::StaticRegisterNativesATP_TopDownGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_TopDownGameMode);
UClass* Z_Construct_UClass_ATP_TopDownGameMode_NoRegister()
{
	return ATP_TopDownGameMode::StaticClass();
}
struct Z_Construct_UClass_ATP_TopDownGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TP_TopDownGameMode.h" },
		{ "ModuleRelativePath", "TP_TopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TopDownGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATP_TopDownGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_TopDownGameMode_Statics::ClassParams = {
	&ATP_TopDownGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TopDownGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_TopDownGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATP_TopDownGameMode()
{
	if (!Z_Registration_Info_UClass_ATP_TopDownGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_TopDownGameMode.OuterSingleton, Z_Construct_UClass_ATP_TopDownGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATP_TopDownGameMode.OuterSingleton;
}
template<> IST_API UClass* StaticClass<ATP_TopDownGameMode>()
{
	return ATP_TopDownGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TopDownGameMode);
ATP_TopDownGameMode::~ATP_TopDownGameMode() {}
// End Class ATP_TopDownGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATP_TopDownGameMode, ATP_TopDownGameMode::StaticClass, TEXT("ATP_TopDownGameMode"), &Z_Registration_Info_UClass_ATP_TopDownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_TopDownGameMode), 4085926389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownGameMode_h_2461000272(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_TP_TopDownGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
