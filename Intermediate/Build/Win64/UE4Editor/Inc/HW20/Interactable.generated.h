// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HW20_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define HW20_Interactable_generated_h

#define HW20_Source_HW20_Interactable_h_13_SPARSE_DATA
#define HW20_Source_HW20_Interactable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract);


#define HW20_Source_HW20_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract);


#define HW20_Source_HW20_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HW20_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HW20_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HW20_API UInteractable(UInteractable&&); \
	HW20_API UInteractable(const UInteractable&); \
public:


#define HW20_Source_HW20_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HW20_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HW20_API UInteractable(UInteractable&&); \
	HW20_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HW20_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define HW20_Source_HW20_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HW20"), HW20_API) \
	DECLARE_SERIALIZER(UInteractable)


#define HW20_Source_HW20_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HW20_Source_HW20_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	HW20_Source_HW20_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HW20_Source_HW20_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HW20_Source_HW20_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	HW20_Source_HW20_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HW20_Source_HW20_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HW20_Source_HW20_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HW20_Source_HW20_Interactable_h_10_PROLOG
#define HW20_Source_HW20_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HW20_Source_HW20_Interactable_h_13_SPARSE_DATA \
	HW20_Source_HW20_Interactable_h_13_RPC_WRAPPERS \
	HW20_Source_HW20_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HW20_Source_HW20_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HW20_Source_HW20_Interactable_h_13_SPARSE_DATA \
	HW20_Source_HW20_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HW20_Source_HW20_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW20_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HW20_Source_HW20_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
