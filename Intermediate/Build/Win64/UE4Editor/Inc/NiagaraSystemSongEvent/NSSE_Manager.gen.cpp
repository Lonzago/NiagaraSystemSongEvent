// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemSongEvent/Public/NSSE_Manager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNSSE_Manager() {}
// Cross Module References
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_ANSSE_Manager_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_ANSSE_Manager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_ANSSE_Manager_StartManager();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_ANSSE_Manager_StopManager();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ManagerEventList();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics
	{
		struct _Script_NiagaraSystemSongEvent_eventEventManagerTrigger_Parms
		{
			FString EventName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NiagaraSystemSongEvent_eventEventManagerTrigger_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent, nullptr, "EventManagerTrigger__DelegateSignature", sizeof(_Script_NiagaraSystemSongEvent_eventEventManagerTrigger_Parms), Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NiagaraSystemSongEvent_EventManagerTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ANSSE_Manager_ReciveEventSend = FName(TEXT("ReciveEventSend"));
	void ANSSE_Manager::ReciveEventSend(const FString& NameEvent)
	{
		NSSE_Manager_eventReciveEventSend_Parms Parms;
		Parms.NameEvent=NameEvent;
		ProcessEvent(FindFunctionChecked(NAME_ANSSE_Manager_ReciveEventSend),&Parms);
	}
	void ANSSE_Manager::StaticRegisterNativesANSSE_Manager()
	{
		UClass* Class = ANSSE_Manager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagFloatParamByName", &ANSSE_Manager::execGetNiagFloatParamByName },
			{ "GetParametersOverrride", &ANSSE_Manager::execGetParametersOverrride },
			{ "StartManager", &ANSSE_Manager::execStartManager },
			{ "StopManager", &ANSSE_Manager::execStopManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics
	{
		struct NSSE_Manager_eventGetNiagFloatParamByName_Parms
		{
			const UNiagaraComponent* NiagCompoRef;
			FName ParamName;
			float OutFloat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFloat;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagCompoRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagCompoRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NSSE_Manager_eventGetNiagFloatParamByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NSSE_Manager_eventGetNiagFloatParamByName_Parms), &Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_OutFloat = { "OutFloat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventGetNiagFloatParamByName_Parms, OutFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventGetNiagFloatParamByName_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_NiagCompoRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_NiagCompoRef = { "NiagCompoRef", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventGetNiagFloatParamByName_Parms, NiagCompoRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_NiagCompoRef_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_NiagCompoRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_OutFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::NewProp_NiagCompoRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANSSE_Manager, nullptr, "GetNiagFloatParamByName", sizeof(NSSE_Manager_eventGetNiagFloatParamByName_Parms), Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics
	{
		struct NSSE_Manager_eventGetParametersOverrride_Parms
		{
			const UNiagaraComponent* NiagCompoRef;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagCompoRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagCompoRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventGetParametersOverrride_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_NiagCompoRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_NiagCompoRef = { "NiagCompoRef", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventGetParametersOverrride_Parms, NiagCompoRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_NiagCompoRef_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_NiagCompoRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::NewProp_NiagCompoRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANSSE_Manager, nullptr, "GetParametersOverrride", sizeof(NSSE_Manager_eventGetParametersOverrride_Parms), Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::NewProp_NameEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::NewProp_NameEvent = { "NameEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_Manager_eventReciveEventSend_Parms, NameEvent), METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::NewProp_NameEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::NewProp_NameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::NewProp_NameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE_Manager" },
		{ "DisplayName", "OnEventSend" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANSSE_Manager, nullptr, "ReciveEventSend", sizeof(NSSE_Manager_eventReciveEventSend_Parms), Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANSSE_Manager, nullptr, "StartManager", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANSSE_Manager_StartManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANSSE_Manager_StartManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANSSE_Manager, nullptr, "StopManager", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANSSE_Manager_StopManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANSSE_Manager_StopManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANSSE_Manager_NoRegister()
	{
		return ANSSE_Manager::StaticClass();
	}
	struct Z_Construct_UClass_ANSSE_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresitionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresitionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToleranceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANSSE_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANSSE_Manager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANSSE_Manager_GetNiagFloatParamByName, "GetNiagFloatParamByName" }, // 3826659815
		{ &Z_Construct_UFunction_ANSSE_Manager_GetParametersOverrride, "GetParametersOverrride" }, // 1562885810
		{ &Z_Construct_UFunction_ANSSE_Manager_ReciveEventSend, "ReciveEventSend" }, // 4136710549
		{ &Z_Construct_UFunction_ANSSE_Manager_StartManager, "StartManager" }, // 3835462464
		{ &Z_Construct_UFunction_ANSSE_Manager_StopManager, "StopManager" }, // 3342082742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANSSE_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NSSE_Manager.h" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_PresitionValue_MetaData[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_PresitionValue = { "PresitionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANSSE_Manager, PresitionValue), METADATA_PARAMS(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_PresitionValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_PresitionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_ToleranceRange_MetaData[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_ToleranceRange = { "ToleranceRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANSSE_Manager, ToleranceRange), METADATA_PARAMS(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_ToleranceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_ToleranceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable_MetaData[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable = { "EventTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANSSE_Manager, EventTable), METADATA_PARAMS(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable_Inner = { "EventTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNSSE_ManagerEventList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_GroupManager_MetaData[] = {
		{ "Category", "NSSE_Manager" },
		{ "ModuleRelativePath", "Public/NSSE_Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_GroupManager = { "GroupManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANSSE_Manager, GroupManager), METADATA_PARAMS(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_GroupManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_GroupManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANSSE_Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_PresitionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_ToleranceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_EventTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANSSE_Manager_Statics::NewProp_GroupManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANSSE_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANSSE_Manager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANSSE_Manager_Statics::ClassParams = {
		&ANSSE_Manager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANSSE_Manager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANSSE_Manager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANSSE_Manager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANSSE_Manager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANSSE_Manager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANSSE_Manager, 3163747613);
	template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<ANSSE_Manager>()
	{
		return ANSSE_Manager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANSSE_Manager(Z_Construct_UClass_ANSSE_Manager, &ANSSE_Manager::StaticClass, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ANSSE_Manager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANSSE_Manager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
