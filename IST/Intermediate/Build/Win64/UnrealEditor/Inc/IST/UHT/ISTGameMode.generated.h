// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISTGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_ISTGameMode_generated_h
#error "ISTGameMode.generated.h already included, missing '#pragma once' in ISTGameMode.h"
#endif
#define IST_ISTGameMode_generated_h

#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISTGameMode(); \
	friend struct Z_Construct_UClass_AISTGameMode_Statics; \
public: \
	DECLARE_CLASS(AISTGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IST"), IST_API) \
	DECLARE_SERIALIZER(AISTGameMode)


#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISTGameMode(AISTGameMode&&); \
	AISTGameMode(const AISTGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IST_API, AISTGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AISTGameMode) \
	IST_API virtual ~AISTGameMode();


#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_9_PROLOG
#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class AISTGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_ISTGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
