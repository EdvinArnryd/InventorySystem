// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IST/Public/Components/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
IST_API UClass* Z_Construct_UClass_UInventoryComponent();
IST_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
IST_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
IST_API UEnum* Z_Construct_UEnum_IST_EItemAddResult();
IST_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult();
UPackage* Z_Construct_UPackage__Script_IST();
// End Cross Module References

// Begin Enum EItemAddResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemAddResult;
static UEnum* EItemAddResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IST_EItemAddResult, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("EItemAddResult"));
	}
	return Z_Registration_Info_UEnum_EItemAddResult.OuterSingleton;
}
template<> IST_API UEnum* StaticEnum<EItemAddResult>()
{
	return EItemAddResult_StaticEnum();
}
struct Z_Construct_UEnum_IST_EItemAddResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IAR_AllItemAdded.DisplayName", "All of item added" },
		{ "IAR_AllItemAdded.Name", "EItemAddResult::IAR_AllItemAdded" },
		{ "IAR_NoItemAdded.DisplayName", "No item added" },
		{ "IAR_NoItemAdded.Name", "EItemAddResult::IAR_NoItemAdded" },
		{ "IAR_PartialAmountItemAdded.DisplayName", "Partial amount of item added" },
		{ "IAR_PartialAmountItemAdded.Name", "EItemAddResult::IAR_PartialAmountItemAdded" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemAddResult::IAR_NoItemAdded", (int64)EItemAddResult::IAR_NoItemAdded },
		{ "EItemAddResult::IAR_PartialAmountItemAdded", (int64)EItemAddResult::IAR_PartialAmountItemAdded },
		{ "EItemAddResult::IAR_AllItemAdded", (int64)EItemAddResult::IAR_AllItemAdded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IST_EItemAddResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	"EItemAddResult",
	"EItemAddResult",
	Z_Construct_UEnum_IST_EItemAddResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemAddResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IST_EItemAddResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IST_EItemAddResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IST_EItemAddResult()
{
	if (!Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton, Z_Construct_UEnum_IST_EItemAddResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemAddResult.InnerSingleton;
}
// End Enum EItemAddResult

// Begin ScriptStruct FItemAddResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAddResult;
class UScriptStruct* FItemAddResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddResult, (UObject*)Z_Construct_UPackage__Script_IST(), TEXT("ItemAddResult"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton;
}
template<> IST_API UScriptStruct* StaticStruct<FItemAddResult>()
{
	return FItemAddResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemAddResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActualAmountAdded_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actial amount if item that was added to inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actial amount if item that was added to inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationResult_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum representing the end state of an add item operation\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum representing the end state of an add item operation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultMessage_MetaData[] = {
		{ "Category", "Item Add Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Informational message that can be passed with the result\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Informational message that can be passed with the result" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActualAmountAdded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OperationResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationResult;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ResultMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded = { "ActualAmountAdded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ActualAmountAdded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActualAmountAdded_MetaData), NewProp_ActualAmountAdded_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult = { "OperationResult", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, OperationResult), Z_Construct_UEnum_IST_EItemAddResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationResult_MetaData), NewProp_OperationResult_MetaData) }; // 1534166209
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage = { "ResultMessage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ResultMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultMessage_MetaData), NewProp_ResultMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ActualAmountAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_OperationResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ResultMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
	nullptr,
	&NewStructOps,
	"ItemAddResult",
	Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers),
	sizeof(FItemAddResult),
	alignof(FItemAddResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton, Z_Construct_UScriptStruct_FItemAddResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton;
}
// End ScriptStruct FItemAddResult

// Begin Class UInventoryComponent Function FindMatchingItem
struct Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics
{
	struct InventoryComponent_eventFindMatchingItem_Parms
	{
		UItemBase* ItemIn;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindMatchingItem_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindMatchingItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ItemIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindMatchingItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::InventoryComponent_eventFindMatchingItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::InventoryComponent_eventFindMatchingItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FindMatchingItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindMatchingItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFindMatchingItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->FindMatchingItem(Z_Param_ItemIn);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FindMatchingItem

// Begin Class UInventoryComponent Function FindNextItemByID
struct Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics
{
	struct InventoryComponent_eventFindNextItemByID_Parms
	{
		UItemBase* ItemIn;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextItemByID_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextItemByID_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ItemIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindNextItemByID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::InventoryComponent_eventFindNextItemByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::InventoryComponent_eventFindNextItemByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FindNextItemByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindNextItemByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFindNextItemByID)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->FindNextItemByID(Z_Param_ItemIn);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FindNextItemByID

// Begin Class UInventoryComponent Function FindNextPartialStack
struct Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics
{
	struct InventoryComponent_eventFindNextPartialStack_Parms
	{
		UItemBase* ItemIn;
		UItemBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextPartialStack_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventFindNextPartialStack_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ItemIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "FindNextPartialStack", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::InventoryComponent_eventFindNextPartialStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::InventoryComponent_eventFindNextPartialStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execFindNextPartialStack)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemBase**)Z_Param__Result=P_THIS->FindNextPartialStack(Z_Param_ItemIn);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function FindNextPartialStack

// Begin Class UInventoryComponent Function GetInventoryContents
struct Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics
{
	struct InventoryComponent_eventGetInventoryContents_Parms
	{
		TArray<UItemBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryContents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryContents", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::InventoryComponent_eventGetInventoryContents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::InventoryComponent_eventGetInventoryContents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryContents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryContents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetInventoryContents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemBase*>*)Z_Param__Result=P_THIS->GetInventoryContents();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetInventoryContents

// Begin Class UInventoryComponent Function GetInventoryTotalWeight
struct Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics
{
	struct InventoryComponent_eventGetInventoryTotalWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryTotalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryTotalWeight", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::InventoryComponent_eventGetInventoryTotalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::InventoryComponent_eventGetInventoryTotalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetInventoryTotalWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInventoryTotalWeight();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetInventoryTotalWeight

// Begin Class UInventoryComponent Function GetSlotsCapacity
struct Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics
{
	struct InventoryComponent_eventGetSlotsCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetSlotsCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetSlotsCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::InventoryComponent_eventGetSlotsCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::InventoryComponent_eventGetSlotsCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetSlotsCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSlotsCapacity();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetSlotsCapacity

// Begin Class UInventoryComponent Function GetWeightCapacity
struct Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics
{
	struct InventoryComponent_eventGetWeightCapacity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetWeightCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::InventoryComponent_eventGetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::InventoryComponent_eventGetWeightCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetWeightCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeightCapacity();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetWeightCapacity

// Begin Class UInventoryComponent Function HandleAddItem
struct Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics
{
	struct InventoryComponent_eventHandleAddItem_Parms
	{
		UItemBase* InputItem;
		FItemAddResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_InputItem = { "InputItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHandleAddItem_Parms, InputItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHandleAddItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(0, nullptr) }; // 1611755992
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_InputItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "HandleAddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::InventoryComponent_eventHandleAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::InventoryComponent_eventHandleAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_HandleAddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_HandleAddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execHandleAddItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_InputItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemAddResult*)Z_Param__Result=P_THIS->HandleAddItem(Z_Param_InputItem);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function HandleAddItem

// Begin Class UInventoryComponent Function RemoveAmountOfItem
struct Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics
{
	struct InventoryComponent_eventRemoveAmountOfItem_Parms
	{
		UItemBase* ItemIn;
		int32 DesiredAmountToRemove;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredAmountToRemove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_DesiredAmountToRemove = { "DesiredAmountToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, DesiredAmountToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveAmountOfItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ItemIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_DesiredAmountToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveAmountOfItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::InventoryComponent_eventRemoveAmountOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::InventoryComponent_eventRemoveAmountOfItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveAmountOfItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredAmountToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveAmountOfItem(Z_Param_ItemIn,Z_Param_DesiredAmountToRemove);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveAmountOfItem

// Begin Class UInventoryComponent Function RemoveSingleInstanceOfItem
struct Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics
{
	struct InventoryComponent_eventRemoveSingleInstanceOfItem_Parms
	{
		UItemBase* ItemToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveSingleInstanceOfItem_Parms, ItemToRemove), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::NewProp_ItemToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveSingleInstanceOfItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::InventoryComponent_eventRemoveSingleInstanceOfItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::InventoryComponent_eventRemoveSingleInstanceOfItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveSingleInstanceOfItem)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveSingleInstanceOfItem(Z_Param_ItemToRemove);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveSingleInstanceOfItem

// Begin Class UInventoryComponent Function SetSlotsCapacity
struct Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics
{
	struct InventoryComponent_eventSetSlotsCapacity_Parms
	{
		int32 NewSlotsCapacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSlotsCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSlotsCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity = { "NewSlotsCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetSlotsCapacity_Parms, NewSlotsCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSlotsCapacity_MetaData), NewProp_NewSlotsCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::NewProp_NewSlotsCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetSlotsCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::InventoryComponent_eventSetSlotsCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::InventoryComponent_eventSetSlotsCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSetSlotsCapacity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSlotsCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotsCapacity(Z_Param_NewSlotsCapacity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SetSlotsCapacity

// Begin Class UInventoryComponent Function SetWeightCapacity
struct Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics
{
	struct InventoryComponent_eventSetWeightCapacity_Parms
	{
		float NewWeightCapacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWeightCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWeightCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity = { "NewWeightCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSetWeightCapacity_Parms, NewWeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWeightCapacity_MetaData), NewProp_NewWeightCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::InventoryComponent_eventSetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::InventoryComponent_eventSetWeightCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSetWeightCapacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWeightCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeightCapacity(Z_Param_NewWeightCapacity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SetWeightCapacity

// Begin Class UInventoryComponent Function SplitExistingStack
struct Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics
{
	struct InventoryComponent_eventSplitExistingStack_Parms
	{
		UItemBase* ItemIn;
		int32 AMountToSplit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AMountToSplit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AMountToSplit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSplitExistingStack_Parms, ItemIn), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AMountToSplit = { "AMountToSplit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSplitExistingStack_Parms, AMountToSplit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AMountToSplit_MetaData), NewProp_AMountToSplit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_ItemIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::NewProp_AMountToSplit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SplitExistingStack", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::InventoryComponent_eventSplitExistingStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::InventoryComponent_eventSplitExistingStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SplitExistingStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SplitExistingStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSplitExistingStack)
{
	P_GET_OBJECT(UItemBase,Z_Param_ItemIn);
	P_GET_PROPERTY(FIntProperty,Z_Param_AMountToSplit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitExistingStack(Z_Param_ItemIn,Z_Param_AMountToSplit);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SplitExistingStack

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindMatchingItem", &UInventoryComponent::execFindMatchingItem },
		{ "FindNextItemByID", &UInventoryComponent::execFindNextItemByID },
		{ "FindNextPartialStack", &UInventoryComponent::execFindNextPartialStack },
		{ "GetInventoryContents", &UInventoryComponent::execGetInventoryContents },
		{ "GetInventoryTotalWeight", &UInventoryComponent::execGetInventoryTotalWeight },
		{ "GetSlotsCapacity", &UInventoryComponent::execGetSlotsCapacity },
		{ "GetWeightCapacity", &UInventoryComponent::execGetWeightCapacity },
		{ "HandleAddItem", &UInventoryComponent::execHandleAddItem },
		{ "RemoveAmountOfItem", &UInventoryComponent::execRemoveAmountOfItem },
		{ "RemoveSingleInstanceOfItem", &UInventoryComponent::execRemoveSingleInstanceOfItem },
		{ "SetSlotsCapacity", &UInventoryComponent::execSetSlotsCapacity },
		{ "SetWeightCapacity", &UInventoryComponent::execSetWeightCapacity },
		{ "SplitExistingStack", &UInventoryComponent::execSplitExistingStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryTotalWeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotsCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWeightCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryContents_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryTotalWeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotsCapacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InventoryWeightCapacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryContents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryContents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_FindMatchingItem, "FindMatchingItem" }, // 758113865
		{ &Z_Construct_UFunction_UInventoryComponent_FindNextItemByID, "FindNextItemByID" }, // 2988503255
		{ &Z_Construct_UFunction_UInventoryComponent_FindNextPartialStack, "FindNextPartialStack" }, // 476507239
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryContents, "GetInventoryContents" }, // 3458940059
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryTotalWeight, "GetInventoryTotalWeight" }, // 2109196687
		{ &Z_Construct_UFunction_UInventoryComponent_GetSlotsCapacity, "GetSlotsCapacity" }, // 4170303598
		{ &Z_Construct_UFunction_UInventoryComponent_GetWeightCapacity, "GetWeightCapacity" }, // 2544380995
		{ &Z_Construct_UFunction_UInventoryComponent_HandleAddItem, "HandleAddItem" }, // 1600160736
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveAmountOfItem, "RemoveAmountOfItem" }, // 1417222919
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveSingleInstanceOfItem, "RemoveSingleInstanceOfItem" }, // 1219882501
		{ &Z_Construct_UFunction_UInventoryComponent_SetSlotsCapacity, "SetSlotsCapacity" }, // 913216107
		{ &Z_Construct_UFunction_UInventoryComponent_SetWeightCapacity, "SetWeightCapacity" }, // 530786760
		{ &Z_Construct_UFunction_UInventoryComponent_SplitExistingStack, "SplitExistingStack" }, // 942990844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight = { "InventoryTotalWeight", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryTotalWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryTotalWeight_MetaData), NewProp_InventoryTotalWeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity = { "InventorySlotsCapacity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySlotsCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotsCapacity_MetaData), NewProp_InventorySlotsCapacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity = { "InventoryWeightCapacity", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryWeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWeightCapacity_MetaData), NewProp_InventoryWeightCapacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_Inner = { "InventoryContents", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents = { "InventoryContents", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryContents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryContents_MetaData), NewProp_InventoryContents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryTotalWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlotsCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryWeightCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryContents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> IST_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemAddResult_StaticEnum, TEXT("EItemAddResult"), &Z_Registration_Info_UEnum_EItemAddResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1534166209U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemAddResult::StaticStruct, Z_Construct_UScriptStruct_FItemAddResult_Statics::NewStructOps, TEXT("ItemAddResult"), &Z_Registration_Info_UScriptStruct_ItemAddResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAddResult), 1611755992U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3131380084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_2776008839(TEXT("/Script/IST"),
	Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IST_Source_IST_Public_Components_InventoryComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
