// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define IST_Pickup_generated_h

#define FID_IST_Source_IST_Public_World_Pickup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IST"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define FID_IST_Source_IST_Public_World_Pickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickup(APickup&&); \
	APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_IST_Source_IST_Public_World_Pickup_h_15_PROLOG
#define FID_IST_Source_IST_Public_World_Pickup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IST_Source_IST_Public_World_Pickup_h_18_INCLASS_NO_PURE_DECLS \
	FID_IST_Source_IST_Public_World_Pickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IST_Source_IST_Public_World_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
