// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASYSTEMSONGEVENT_NSSE_Manager_generated_h
#error "NSSE_Manager.generated.h already included, missing '#pragma once' in NSSE_Manager.h"
#endif
#define NIAGARASYSTEMSONGEVENT_NSSE_Manager_generated_h

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventList_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FEventList>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventListData_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FEventListData>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_34_DELEGATE \
struct _Script_NiagaraSystemSongEvent_eventEventSendCast_Parms \
{ \
	FString EventName; \
}; \
static inline void FEventSendCast_DelegateWrapper(const FMulticastScriptDelegate& EventSendCast, const FString& EventName) \
{ \
	_Script_NiagaraSystemSongEvent_eventEventSendCast_Parms Parms; \
	Parms.EventName=EventName; \
	EventSendCast.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_RPC_WRAPPERS \
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


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_EVENT_PARMS \
	struct NSSE_Manager_eventReciveEventSend_Parms \
	{ \
		FString NameEvent; \
	};


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_CALLBACK_WRAPPERS
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANSSE_Manager(); \
	friend struct Z_Construct_UClass_ANSSE_Manager_Statics; \
public: \
	DECLARE_CLASS(ANSSE_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(ANSSE_Manager)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesANSSE_Manager(); \
	friend struct Z_Construct_UClass_ANSSE_Manager_Statics; \
public: \
	DECLARE_CLASS(ANSSE_Manager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(ANSSE_Manager)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_STANDARD_CONSTRUCTORS \
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


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANSSE_Manager(ANSSE_Manager&&); \
	NO_API ANSSE_Manager(const ANSSE_Manager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANSSE_Manager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANSSE_Manager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANSSE_Manager)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_PRIVATE_PROPERTY_OFFSET
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_37_PROLOG \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_EVENT_PARMS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_RPC_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_CALLBACK_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_INCLASS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_CALLBACK_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_INCLASS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class ANSSE_Manager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_Manager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
