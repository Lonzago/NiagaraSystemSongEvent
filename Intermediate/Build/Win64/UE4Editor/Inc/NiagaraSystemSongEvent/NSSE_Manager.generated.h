// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef NIAGARASYSTEMSONGEVENT_NSSE_Manager_generated_h
#error "NSSE_Manager.generated.h already included, missing '#pragma once' in NSSE_Manager.h"
#endif
#define NIAGARASYSTEMSONGEVENT_NSSE_Manager_generated_h

#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_14_DELEGATE \
struct _Script_NiagaraSystemSongEvent_eventEventManagerTrigger_Parms \
{ \
	FString EventName; \
}; \
static inline void FEventManagerTrigger_DelegateWrapper(const FMulticastScriptDelegate& EventManagerTrigger, const FString& EventName) \
{ \
	_Script_NiagaraSystemSongEvent_eventEventManagerTrigger_Parms Parms; \
	Parms.EventName=EventName; \
	EventManagerTrigger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNiagFloatParamByName) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagCompoRef); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParamName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetNiagFloatParamByName(Z_Param_NiagCompoRef,Z_Param_ParamName,Z_Param_Out_OutFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParametersOverrride) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagCompoRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetParametersOverrride(Z_Param_NiagCompoRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartManager(); \
		P_NATIVE_END; \
	}


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNiagFloatParamByName) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagCompoRef); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParamName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutFloat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetNiagFloatParamByName(Z_Param_NiagCompoRef,Z_Param_ParamName,Z_Param_Out_OutFloat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParametersOverrride) \
	{ \
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagCompoRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetParametersOverrride(Z_Param_NiagCompoRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopManager(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartManager(); \
		P_NATIVE_END; \
	}


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_EVENT_PARMS \
	struct NSSE_Manager_eventReciveEventSend_Parms \
	{ \
		FString NameEvent; \
	};


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_CALLBACK_WRAPPERS
#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANSSE_Manager(); \
	friend struct Z_Construct_UClass_ANSSE_Manager_Statics; \
public: \
	DECLARE_CLASS(ANSSE_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(ANSSE_Manager)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesANSSE_Manager(); \
	friend struct Z_Construct_UClass_ANSSE_Manager_Statics; \
public: \
	DECLARE_CLASS(ANSSE_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(ANSSE_Manager)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANSSE_Manager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANSSE_Manager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANSSE_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANSSE_Manager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANSSE_Manager(ANSSE_Manager&&); \
	NO_API ANSSE_Manager(const ANSSE_Manager&); \
public:


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANSSE_Manager(ANSSE_Manager&&); \
	NO_API ANSSE_Manager(const ANSSE_Manager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANSSE_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANSSE_Manager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANSSE_Manager)


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_PRIVATE_PROPERTY_OFFSET
#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_17_PROLOG \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_EVENT_PARMS


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_RPC_WRAPPERS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_CALLBACK_WRAPPERS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_INCLASS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_CALLBACK_WRAPPERS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_INCLASS_NO_PURE_DECLS \
	PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class ANSSE_Manager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginNiagara_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
