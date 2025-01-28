// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/Inventory/ItemDragDropOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_ItemDragDropOperation_generated_h
#error "ItemDragDropOperation.generated.h already included, missing '#pragma once' in ItemDragDropOperation.h"
#endif
#define IST_ItemDragDropOperation_generated_h

#define FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDragDropOperation(); \
	friend struct Z_Construct_UClass_UItemDragDropOperation_Statics; \
public: \
	DECLARE_CLASS(UItemDragDropOperation, UDragDropOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IST"), NO_API) \
	DECLARE_SERIALIZER(UItemDragDropOperation)


#define FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemDragDropOperation(UItemDragDropOperation&&); \
	UItemDragDropOperation(const UItemDragDropOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDragDropOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemDragDropOperation) \
	NO_API virtual ~UItemDragDropOperation();


#define FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_14_PROLOG
#define FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_17_INCLASS_NO_PURE_DECLS \
	FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class UItemDragDropOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IST_Source_IST_Public_UserInterface_Inventory_ItemDragDropOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
