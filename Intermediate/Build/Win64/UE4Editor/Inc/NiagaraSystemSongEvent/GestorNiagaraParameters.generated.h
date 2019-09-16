// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FNSSE_NiagaraGestorData;
#ifdef NIAGARASYSTEMSONGEVENT_GestorNiagaraParameters_generated_h
#error "GestorNiagaraParameters.generated.h already included, missing '#pragma once' in GestorNiagaraParameters.h"
#endif
#define NIAGARASYSTEMSONGEVENT_GestorNiagaraParameters_generated_h

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUpGestorParticleEvent) \
	{ \
		P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_NiagaraComposTargerts); \
		P_GET_STRUCT_REF(FNSSE_NiagaraGestorData,Z_Param_Out_NiagaraGestorData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpGestorParticleEvent(Z_Param_Out_NiagaraComposTargerts,Z_Param_Out_NiagaraGestorData); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUpGestorParticleEvent) \
	{ \
		P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_NiagaraComposTargerts); \
		P_GET_STRUCT_REF(FNSSE_NiagaraGestorData,Z_Param_Out_NiagaraGestorData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpGestorParticleEvent(Z_Param_Out_NiagaraComposTargerts,Z_Param_Out_NiagaraGestorData); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGestorNiagaraParameters(); \
	friend struct Z_Construct_UClass_UGestorNiagaraParameters_Statics; \
public: \
	DECLARE_CLASS(UGestorNiagaraParameters, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGestorNiagaraParameters(); \
	friend struct Z_Construct_UClass_UGestorNiagaraParameters_Statics; \
public: \
	DECLARE_CLASS(UGestorNiagaraParameters, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGestorNiagaraParameters(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGestorNiagaraParameters) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestorNiagaraParameters); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestorNiagaraParameters); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestorNiagaraParameters(UGestorNiagaraParameters&&); \
	NO_API UGestorNiagaraParameters(const UGestorNiagaraParameters&); \
public:


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestorNiagaraParameters(UGestorNiagaraParameters&&); \
	NO_API UGestorNiagaraParameters(const UGestorNiagaraParameters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestorNiagaraParameters); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestorNiagaraParameters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_PRIVATE_PROPERTY_OFFSET
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_12_PROLOG
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_RPC_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_INCLASS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_INCLASS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class UGestorNiagaraParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
