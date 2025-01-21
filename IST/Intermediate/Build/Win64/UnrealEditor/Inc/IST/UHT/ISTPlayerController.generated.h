// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ISTPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_ISTPlayerController_generated_h
#error "ISTPlayerController.generated.h already included, missing '#pragma once' in ISTPlayerController.h"
#endif
#define IST_ISTPlayerController_generated_h

#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISTPlayerController(); \
	friend struct Z_Construct_UClass_AISTPlayerController_Statics; \
public: \
	DECLARE_CLASS(AISTPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IST"), NO_API) \
	DECLARE_SERIALIZER(AISTPlayerController)


#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AISTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISTPlayerController(AISTPlayerController&&); \
	AISTPlayerController(const AISTPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISTPlayerController) \
	NO_API virtual ~AISTPlayerController();


#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_12_PROLOG
#define FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class AISTPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Edvin_Desktop_InventorySystemTutorial_InventorySystemTutorial_IST_Source_IST_Public_Player_ISTPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
