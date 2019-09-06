// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENSSE_NiagaraGestorActions : uint8;
struct FNSSE_EventParameterChange;
#ifdef NIAGARASYSTEMSONGEVENT_NSSE_NiagGestorCompo_generated_h
#error "NSSE_NiagGestorCompo.generated.h already included, missing '#pragma once' in NSSE_NiagGestorCompo.h"
#endif
#define NIAGARASYSTEMSONGEVENT_NSSE_NiagGestorCompo_generated_h

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNSSE_DoNiagaraAction) \
	{ \
		P_GET_ENUM(ENSSE_NiagaraGestorActions,Z_Param_Action); \
		P_GET_STRUCT_REF(FNSSE_EventParameterChange,Z_Param_Out_EventParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions(Z_Param_Action),Z_Param_Out_EventParameters); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNSSE_DoNiagaraAction) \
	{ \
		P_GET_ENUM(ENSSE_NiagaraGestorActions,Z_Param_Action); \
		P_GET_STRUCT_REF(FNSSE_EventParameterChange,Z_Param_Out_EventParameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions(Z_Param_Action),Z_Param_Out_EventParameters); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNSSE_NiagGestorCompo(); \
	friend struct Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics; \
public: \
	DECLARE_CLASS(UNSSE_NiagGestorCompo, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_NiagGestorCompo)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUNSSE_NiagGestorCompo(); \
	friend struct Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics; \
public: \
	DECLARE_CLASS(UNSSE_NiagGestorCompo, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_NiagGestorCompo)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNSSE_NiagGestorCompo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNSSE_NiagGestorCompo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_NiagGestorCompo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_NiagGestorCompo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_NiagGestorCompo(UNSSE_NiagGestorCompo&&); \
	NO_API UNSSE_NiagGestorCompo(const UNSSE_NiagGestorCompo&); \
public:


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_NiagGestorCompo(UNSSE_NiagGestorCompo&&); \
	NO_API UNSSE_NiagGestorCompo(const UNSSE_NiagGestorCompo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_NiagGestorCompo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_NiagGestorCompo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNSSE_NiagGestorCompo)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_PRIVATE_PROPERTY_OFFSET
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_18_PROLOG
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_RPC_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_INCLASS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_INCLASS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class UNSSE_NiagGestorCompo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_NiagGestorCompo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
