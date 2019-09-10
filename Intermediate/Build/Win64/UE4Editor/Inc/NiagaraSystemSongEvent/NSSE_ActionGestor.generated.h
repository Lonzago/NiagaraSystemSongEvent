// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASYSTEMSONGEVENT_NSSE_ActionGestor_generated_h
#error "NSSE_ActionGestor.generated.h already included, missing '#pragma once' in NSSE_ActionGestor.h"
#endif
#define NIAGARASYSTEMSONGEVENT_NSSE_ActionGestor_generated_h

#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEventNiagaraCalled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EventNiagaraCalled(Z_Param_NameEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegisterNiagaraGestorNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetRegisterNiagaraGestorNames(); \
		P_NATIVE_END; \
	}


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEventNiagaraCalled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EventNiagaraCalled(Z_Param_NameEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegisterNiagaraGestorNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetRegisterNiagaraGestorNames(); \
		P_NATIVE_END; \
	}


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNSSE_ActionGestor(); \
	friend struct Z_Construct_UClass_UNSSE_ActionGestor_Statics; \
public: \
	DECLARE_CLASS(UNSSE_ActionGestor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_ActionGestor)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNSSE_ActionGestor(); \
	friend struct Z_Construct_UClass_UNSSE_ActionGestor_Statics; \
public: \
	DECLARE_CLASS(UNSSE_ActionGestor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_ActionGestor)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNSSE_ActionGestor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNSSE_ActionGestor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_ActionGestor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_ActionGestor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_ActionGestor(UNSSE_ActionGestor&&); \
	NO_API UNSSE_ActionGestor(const UNSSE_ActionGestor&); \
public:


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_ActionGestor(UNSSE_ActionGestor&&); \
	NO_API UNSSE_ActionGestor(const UNSSE_ActionGestor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_ActionGestor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_ActionGestor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNSSE_ActionGestor)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_PRIVATE_PROPERTY_OFFSET
#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_11_PROLOG
#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_RPC_WRAPPERS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_INCLASS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_INCLASS_NO_PURE_DECLS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class UNSSE_ActionGestor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_ActionGestor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
