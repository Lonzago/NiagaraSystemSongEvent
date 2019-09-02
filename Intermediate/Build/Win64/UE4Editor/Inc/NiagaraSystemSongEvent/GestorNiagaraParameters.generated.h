// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FNSSE_ParametersChangeData;
#ifdef NIAGARASYSTEMSONGEVENT_GestorNiagaraParameters_generated_h
#error "GestorNiagaraParameters.generated.h already included, missing '#pragma once' in GestorNiagaraParameters.h"
#endif
#define NIAGARASYSTEMSONGEVENT_GestorNiagaraParameters_generated_h

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_ParametersChangeData>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_InputParametersChangeData>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartParameterChanges) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraCompoRef); \
		P_GET_STRUCT_REF(FNSSE_ParametersChangeData,Z_Param_Out_DataRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartParameterChanges(Z_Param_NiagaraCompoRef,Z_Param_Out_DataRef); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartParameterChanges) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraCompoRef); \
		P_GET_STRUCT_REF(FNSSE_ParametersChangeData,Z_Param_Out_DataRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartParameterChanges(Z_Param_NiagaraCompoRef,Z_Param_Out_DataRef); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGestorNiagaraParameters(); \
	friend struct Z_Construct_UClass_UGestorNiagaraParameters_Statics; \
public: \
	DECLARE_CLASS(UGestorNiagaraParameters, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_INCLASS \
private: \
	static void StaticRegisterNativesUGestorNiagaraParameters(); \
	friend struct Z_Construct_UClass_UGestorNiagaraParameters_Statics; \
public: \
	DECLARE_CLASS(UGestorNiagaraParameters, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_STANDARD_CONSTRUCTORS \
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


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestorNiagaraParameters(UGestorNiagaraParameters&&); \
	NO_API UGestorNiagaraParameters(const UGestorNiagaraParameters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestorNiagaraParameters); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestorNiagaraParameters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestorNiagaraParameters)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_PRIVATE_PROPERTY_OFFSET
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_171_PROLOG
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_RPC_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_INCLASS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_INCLASS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class UGestorNiagaraParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_GestorNiagaraParameters_h


#define FOREACH_ENUM_ENSSE_PARAMETERCHANGE(op) \
	op(ENSSE_ParameterChange::EPC_SinglerParameter) \
	op(ENSSE_ParameterChange::EPC_MultipleParameters) 

enum class ENSSE_ParameterChange : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_ParameterChange>();

#define FOREACH_ENUM_ENSSE_PARAMETERTYPE(op) \
	op(ENSSE_ParameterType::EPT_Actor) \
	op(ENSSE_ParameterType::EPT_Bool) \
	op(ENSSE_ParameterType::EPT_Float) \
	op(ENSSE_ParameterType::EPT_Int32) \
	op(ENSSE_ParameterType::EPT_LinearColor) \
	op(ENSSE_ParameterType::EPT_Quaternion) \
	op(ENSSE_ParameterType::EPT_Vector2) \
	op(ENSSE_ParameterType::EPT_Vector3) \
	op(ENSSE_ParameterType::EPT_Vector4) 

enum class ENSSE_ParameterType : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_ParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
