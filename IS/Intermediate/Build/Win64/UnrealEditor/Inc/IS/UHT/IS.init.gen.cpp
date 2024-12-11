// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IS()
	{
		if (!Z_Registration_Info_UPackage__Script_IS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE63036BE,
				0x0C554019,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IS(Z_Construct_UPackage__Script_IS, TEXT("/Script/IS"), Z_Registration_Info_UPackage__Script_IS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE63036BE, 0x0C554019));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
