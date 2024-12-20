// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IS_ItemDataStructs_generated_h
#error "ItemDataStructs.generated.h already included, missing '#pragma once' in ItemDataStructs.h"
#endif
#define IS_ItemDataStructs_generated_h

#define FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStatistics_Statics; \
	IS_API static class UScriptStruct* StaticStruct();


template<> IS_API UScriptStruct* StaticStruct<struct FItemStatistics>();

#define FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTextData_Statics; \
	IS_API static class UScriptStruct* StaticStruct();


template<> IS_API UScriptStruct* StaticStruct<struct FItemTextData>();

#define FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemNumericData_Statics; \
	IS_API static class UScriptStruct* StaticStruct();


template<> IS_API UScriptStruct* StaticStruct<struct FItemNumericData>();

#define FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAssetData_Statics; \
	IS_API static class UScriptStruct* StaticStruct();


template<> IS_API UScriptStruct* StaticStruct<struct FItemAssetData>();

#define FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	IS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> IS_API UScriptStruct* StaticStruct<struct FItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_edvin_arnryd_OneDrive___Change_Maker_Education_Dokument_GitHub_InventorySystem_IS_Source_IS_Public_Data_ItemDataStructs_h


#define FOREACH_ENUM_EITEMQUALITY(op) \
	op(EItemQuality::Common) \
	op(EItemQuality::Rare) \
	op(EItemQuality::Epic) \
	op(EItemQuality::Legendary) 

enum class EItemQuality : uint8;
template<> struct TIsUEnumClass<EItemQuality> { enum { Value = true }; };
template<> IS_API UEnum* StaticEnum<EItemQuality>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Armor) \
	op(EItemType::Weapon) \
	op(EItemType::Shield) \
	op(EItemType::Consumable) \
	op(EItemType::Scroll) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> IS_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
