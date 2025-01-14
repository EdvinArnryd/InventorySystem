// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
IST_API UClass* Z_Construct_UClass_UInteractionInterface();
IST_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
IST_API UEnum* Z_Construct_UEnum_IST_EInteractableType();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FInteractableData();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Enum EInteractableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractableType;
static UEnum* EInteractableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IST_EInteractableType, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("EInteractableType"));
	}
	return Z_Registration_Info_UEnum_EInteractableType.OuterSingleton;
}
template<> IST_API UEnum* StaticEnum<EInteractableType>()
{
	return EInteractableType_StaticEnum();
}
struct Z_Construct_UEnum_IST_EInteractableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Container.DisplayName", "Container" },
		{ "Container.Name", "EInteractableType::Container" },
		{ "Device.DisplayName", "Device" },
		{ "Device.Name", "EInteractableType::Device" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
		{ "NonPlayerCharacter.DisplayName", "NonPlayerCharacter" },
		{ "NonPlayerCharacter.Name", "EInteractableType::NonPlayerCharacter" },
		{ "Pickup.DisplayName", "Pickup" },
		{ "Pickup.Name", "EInteractableType::Pickup" },
		{ "Toggle.DisplayName", "Toggle" },
		{ "Toggle.Name", "EInteractableType::Toggle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractableType::Pickup", (int64)EInteractableType::Pickup },
		{ "EInteractableType::NonPlayerCharacter", (int64)EInteractableType::NonPlayerCharacter },
		{ "EInteractableType::Device", (int64)EInteractableType::Device },
		{ "EInteractableType::Toggle", (int64)EInteractableType::Toggle },
		{ "EInteractableType::Container", (int64)EInteractableType::Container },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IST_EInteractableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	"EInteractableType",
	"EInteractableType",
	Z_Construct_UEnum_IST_EInteractableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EInteractableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EInteractableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IST_EInteractableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IST_EInteractableType()
{
	if (!Z_Registration_Info_UEnum_EInteractableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractableType.InnerSingleton, Z_Construct_UEnum_IST_EInteractableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractableType.InnerSingleton;
}
// End Enum EInteractableType

// Begin ScriptStruct FInteractableData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractableData;
class UScriptStruct* FInteractableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractableData, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("InteractableData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractableData.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FInteractableData>()
{
	return FInteractableData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractableData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableType_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDuration_MetaData[] = {
		{ "Category", "InteractableData" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractableType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Action;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractableData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType = { "InteractableType", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, InteractableType), Z_Construct_UEnum_IST_EInteractableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableType_MetaData), NewProp_InteractableType_MetaData) }; // 681254155
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Action), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration = { "InteractionDuration", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractableData, InteractionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDuration_MetaData), NewProp_InteractionDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractableData_Statics::NewProp_InteractionDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractableData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"InteractableData",
	Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::PropPointers),
	sizeof(FInteractableData),
	alignof(FInteractableData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractableData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractableData()
{
	if (!Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton, Z_Construct_UScriptStruct_FInteractableData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractableData.InnerSingleton;
}
// End ScriptStruct FInteractableData

// Begin Interface UInteractionInterface
void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
{
	return UInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
	&UInteractionInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInteractionInterface>()
{
	return UInteractionInterface::StaticClass();
}
UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
UInteractionInterface::~UInteractionInterface() {}
// End Interface UInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInteractableType_StaticEnum, TEXT("EInteractableType"), &Z_Registration_Info_UEnum_EInteractableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 681254155U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractableData::StaticStruct, Z_Construct_UScriptStruct_FInteractableData_Statics::NewStructOps, TEXT("InteractableData"), &Z_Registration_Info_UScriptStruct_InteractableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractableData), 3679689555U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 146304837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_1099982928(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Interfaces_InteractionInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
