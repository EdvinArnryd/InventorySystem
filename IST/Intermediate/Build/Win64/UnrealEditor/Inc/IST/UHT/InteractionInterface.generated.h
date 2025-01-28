// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IST_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define IST_InteractionInterface_generated_h

#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableData_Statics; \
	IST_API static class UScriptStruct* StaticStruct();


template<> IST_API UScriptStruct* StaticStruct<struct FInteractableData>();

#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IST_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&); \
	UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IST_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	IST_API virtual ~UInteractionInterface();


#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IST"), IST_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_GENERATED_UINTERFACE_BODY() \
	FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_53_PROLOG
#define FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h_56_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IST_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IST_Source_IST_Public_Interfaces_InteractionInterface_h


#define FOREACH_ENUM_EINTERACTABLETYPE(op) \
	op(EInteractableType::Pickup) \
	op(EInteractableType::NonPlayerCharacter) \
	op(EInteractableType::Device) \
	op(EInteractableType::Toggle) \
	op(EInteractableType::Container) 

enum class EInteractableType : uint8;
template<> struct TIsUEnumClass<EInteractableType> { enum { Value = true }; };
template<> IST_API UEnum* StaticEnum<EInteractableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
