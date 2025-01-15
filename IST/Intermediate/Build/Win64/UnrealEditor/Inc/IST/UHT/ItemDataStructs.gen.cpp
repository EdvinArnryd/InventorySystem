// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/Data/ItemDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataStructs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IST_API UEnum* Z_Construct_UEnum_IST_EItemQuality();
IST_API UEnum* Z_Construct_UEnum_IST_EItemType();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemStatistics();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemTextData();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Enum EItemQuality
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemQuality;
static UEnum* EItemQuality_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IST_EItemQuality, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("EItemQuality"));
	}
	return Z_Registration_Info_UEnum_EItemQuality.OuterSingleton;
}
template<> IST_API UEnum* StaticEnum<EItemQuality>()
{
	return EItemQuality_StaticEnum();
}
struct Z_Construct_UEnum_IST_EItemQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "EItemQuality::Common" },
		{ "Epic.DisplayName", "Epic" },
		{ "Epic.Name", "EItemQuality::Epic" },
		{ "Legendary.DisplayName", "Legendary" },
		{ "Legendary.Name", "EItemQuality::Legendary" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Rare.DisplayName", "Rare" },
		{ "Rare.Name", "EItemQuality::Rare" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemQuality::Common", (int64)EItemQuality::Common },
		{ "EItemQuality::Rare", (int64)EItemQuality::Rare },
		{ "EItemQuality::Epic", (int64)EItemQuality::Epic },
		{ "EItemQuality::Legendary", (int64)EItemQuality::Legendary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IST_EItemQuality_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	"EItemQuality",
	"EItemQuality",
	Z_Construct_UEnum_IST_EItemQuality_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemQuality_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IST_EItemQuality_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IST_EItemQuality()
{
	if (!Z_Registration_Info_UEnum_EItemQuality.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemQuality.InnerSingleton, Z_Construct_UEnum_IST_EItemQuality_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemQuality.InnerSingleton;
}
// End Enum EItemQuality

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IST_EItemType, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> IST_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_IST_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "EItemType::Armor" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Scroll.DisplayName", "Scroll" },
		{ "Scroll.Name", "EItemType::Scroll" },
		{ "Shield.DisplayName", "Shield" },
		{ "Shield.Name", "EItemType::Shield" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItemType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Armor", (int64)EItemType::Armor },
		{ "EItemType::Weapon", (int64)EItemType::Weapon },
		{ "EItemType::Shield", (int64)EItemType::Shield },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Scroll", (int64)EItemType::Scroll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IST_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_IST_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IST_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IST_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_IST_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin ScriptStruct FItemStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStatistics;
class UScriptStruct* FItemStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStatistics, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStatistics.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemStatistics>()
{
	return FItemStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorValue_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellValue_MetaData[] = {
		{ "Category", "ItemStatistics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SellValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ArmorValue = { "ArmorValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatistics, ArmorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorValue_MetaData), NewProp_ArmorValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatistics, DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageValue_MetaData), NewProp_DamageValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue = { "SellValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatistics, SellValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellValue_MetaData), NewProp_SellValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_ArmorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_DamageValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatistics_Statics::NewProp_SellValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"ItemStatistics",
	Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::PropPointers),
	sizeof(FItemStatistics),
	alignof(FItemStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton, Z_Construct_UScriptStruct_FItemStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemStatistics.InnerSingleton;
}
// End ScriptStruct FItemStatistics

// Begin ScriptStruct FItemTextData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemTextData;
class UScriptStruct* FItemTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTextData, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemTextData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemTextData>()
{
	return FItemTextData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemTextData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UsageText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTextData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, UsageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageText_MetaData), NewProp_UsageText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTextData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"ItemTextData",
	Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers),
	sizeof(FItemTextData),
	alignof(FItemTextData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemTextData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton, Z_Construct_UScriptStruct_FItemTextData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton;
}
// End ScriptStruct FItemTextData

// Begin ScriptStruct FItemNumericData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemNumericData;
class UScriptStruct* FItemNumericData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemNumericData, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemNumericData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemNumericData>()
{
	return FItemNumericData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemNumericData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemNumericData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
void Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((FItemNumericData*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemNumericData), &Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemNumericData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"ItemNumericData",
	Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers),
	sizeof(FItemNumericData),
	alignof(FItemNumericData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton, Z_Construct_UScriptStruct_FItemNumericData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton;
}
// End ScriptStruct FItemNumericData

// Begin ScriptStruct FItemAssetData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAssetData;
class UScriptStruct* FItemAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAssetData, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemAssetData>()
{
	return FItemAssetData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAssetData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAssetData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"ItemAssetData",
	Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers),
	sizeof(FItemAssetData),
	alignof(FItemAssetData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton, Z_Construct_UScriptStruct_FItemAssetData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton;
}
// End ScriptStruct FItemAssetData

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStatistics_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStatistics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumericData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_IST_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 3990869223
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemQuality), Z_Construct_UEnum_IST_EItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuality_MetaData), NewProp_ItemQuality_MetaData) }; // 3722990116
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics = { "ItemStatistics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemStatistics), Z_Construct_UScriptStruct_FItemStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStatistics_MetaData), NewProp_ItemStatistics_MetaData) }; // 1234684013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData = { "TextData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, TextData), Z_Construct_UScriptStruct_FItemTextData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextData_MetaData), NewProp_TextData_MetaData) }; // 1076149086
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData = { "NumericData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, NumericData), Z_Construct_UScriptStruct_FItemNumericData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericData_MetaData), NewProp_NumericData_MetaData) }; // 2923867555
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, AssetData), Z_Construct_UScriptStruct_FItemAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) }; // 3086951985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatistics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TextData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NumericData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_AssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemQuality_StaticEnum, TEXT("EItemQuality"), &Z_Registration_Info_UEnum_EItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3722990116U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3990869223U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemStatistics::StaticStruct, Z_Construct_UScriptStruct_FItemStatistics_Statics::NewStructOps, TEXT("ItemStatistics"), &Z_Registration_Info_UScriptStruct_ItemStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStatistics), 1234684013U) },
		{ FItemTextData::StaticStruct, Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps, TEXT("ItemTextData"), &Z_Registration_Info_UScriptStruct_ItemTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemTextData), 1076149086U) },
		{ FItemNumericData::StaticStruct, Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps, TEXT("ItemNumericData"), &Z_Registration_Info_UScriptStruct_ItemNumericData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemNumericData), 2923867555U) },
		{ FItemAssetData::StaticStruct, Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps, TEXT("ItemAssetData"), &Z_Registration_Info_UScriptStruct_ItemAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAssetData), 3086951985U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2374481009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_899894740(TEXT("/Script/IST"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Data_ItemDataStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
