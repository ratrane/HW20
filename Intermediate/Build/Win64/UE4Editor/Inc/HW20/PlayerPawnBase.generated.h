// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW20_PlayerPawnBase_generated_h
#error "PlayerPawnBase.generated.h already included, missing '#pragma once' in PlayerPawnBase.h"
#endif
#define HW20_PlayerPawnBase_generated_h

#define HW20_Source_HW20_PlayerPawnBase_h_16_SPARSE_DATA
#define HW20_Source_HW20_PlayerPawnBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalInput); \
	DECLARE_FUNCTION(execHandlePlayerVerticalInput);


#define HW20_Source_HW20_PlayerPawnBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalInput); \
	DECLARE_FUNCTION(execHandlePlayerVerticalInput);


#define HW20_Source_HW20_PlayerPawnBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawnBase(); \
	friend struct Z_Construct_UClass_APlayerPawnBase_Statics; \
public: \
	DECLARE_CLASS(APlayerPawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW20"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawnBase)


#define HW20_Source_HW20_PlayerPawnBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawnBase(); \
	friend struct Z_Construct_UClass_APlayerPawnBase_Statics; \
public: \
	DECLARE_CLASS(APlayerPawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW20"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawnBase)


#define HW20_Source_HW20_PlayerPawnBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawnBase(APlayerPawnBase&&); \
	NO_API APlayerPawnBase(const APlayerPawnBase&); \
public:


#define HW20_Source_HW20_PlayerPawnBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawnBase(APlayerPawnBase&&); \
	NO_API APlayerPawnBase(const APlayerPawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawnBase)


#define HW20_Source_HW20_PlayerPawnBase_h_16_PRIVATE_PROPERTY_OFFSET
#define HW20_Source_HW20_PlayerPawnBase_h_13_PROLOG
#define HW20_Source_HW20_PlayerPawnBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HW20_Source_HW20_PlayerPawnBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HW20_Source_HW20_PlayerPawnBase_h_16_SPARSE_DATA \
	HW20_Source_HW20_PlayerPawnBase_h_16_RPC_WRAPPERS \
	HW20_Source_HW20_PlayerPawnBase_h_16_INCLASS \
	HW20_Source_HW20_PlayerPawnBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HW20_Source_HW20_PlayerPawnBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HW20_Source_HW20_PlayerPawnBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HW20_Source_HW20_PlayerPawnBase_h_16_SPARSE_DATA \
	HW20_Source_HW20_PlayerPawnBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HW20_Source_HW20_PlayerPawnBase_h_16_INCLASS_NO_PURE_DECLS \
	HW20_Source_HW20_PlayerPawnBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW20_API UClass* StaticClass<class APlayerPawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HW20_Source_HW20_PlayerPawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
