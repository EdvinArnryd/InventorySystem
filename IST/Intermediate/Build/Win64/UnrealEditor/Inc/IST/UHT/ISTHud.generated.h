// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/ISTHud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_ISTHud_generated_h
#error "ISTHud.generated.h already included, missing '#pragma once' in ISTHud.h"
#endif
#define IST_ISTHud_generated_h

#define FID_IST_Source_IST_Public_UserInterface_ISTHud_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISTHud(); \
	friend struct Z_Construct_UClass_AISTHud_Statics; \
public: \
	DECLARE_CLASS(AISTHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IST"), NO_API) \
	DECLARE_SERIALIZER(AISTHud)


#define FID_IST_Source_IST_Public_UserInterface_ISTHud_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISTHud(AISTHud&&); \
	AISTHud(const AISTHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISTHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISTHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AISTHud) \
	NO_API virtual ~AISTHud();


#define FID_IST_Source_IST_Public_UserInterface_ISTHud_h_14_PROLOG
#define FID_IST_Source_IST_Public_UserInterface_ISTHud_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IST_Source_IST_Public_UserInterface_ISTHud_h_17_INCLASS_NO_PURE_DECLS \
	FID_IST_Source_IST_Public_UserInterface_ISTHud_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class AISTHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IST_Source_IST_Public_UserInterface_ISTHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
