// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemSongEvent/Public/NSSE_NiagGestorCompo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNSSE_NiagGestorCompo() {}
// Cross Module References
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ChangeParamsActionData();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	void UNSSE_NiagGestorCompo::StaticRegisterNativesUNSSE_NiagGestorCompo()
	{
		UClass* Class = UNSSE_NiagGestorCompo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NSSE_DoNiagaraAction", &UNSSE_NiagGestorCompo::execNSSE_DoNiagaraAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics
	{
		struct NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms
		{
			ENSSE_NiagaraGestorActions Action;
			FNSSE_ChangeParamsActionData EventParameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventParameters;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_EventParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_EventParameters = { "EventParameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms, EventParameters), Z_Construct_UScriptStruct_FNSSE_ChangeParamsActionData, METADATA_PARAMS(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_EventParameters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_EventParameters_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms, Action), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_EventParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE TEST" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNSSE_NiagGestorCompo, nullptr, "NSSE_DoNiagaraAction", sizeof(NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms), Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo_NoRegister()
	{
		return UNSSE_NiagGestorCompo::StaticClass();
	}
	struct Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraS_Swip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraS_Swip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraS_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraS_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction, "NSSE_DoNiagaraAction" }, // 3540310427
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NiagaraSystemSongEvent" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NSSE_NiagGestorCompo.h" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Swip_MetaData[] = {
		{ "Category", "NSSE TEST" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Swip = { "NiagaraS_Swip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_NiagGestorCompo, NiagaraS_Swip), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Swip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Swip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Default_MetaData[] = {
		{ "Category", "NSSE TEST" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Default = { "NiagaraS_Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_NiagGestorCompo, NiagaraS_Default), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Default_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Swip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::NewProp_NiagaraS_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNSSE_NiagGestorCompo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::ClassParams = {
		&UNSSE_NiagGestorCompo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNSSE_NiagGestorCompo, 1051979893);
	template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<UNSSE_NiagGestorCompo>()
	{
		return UNSSE_NiagGestorCompo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNSSE_NiagGestorCompo(Z_Construct_UClass_UNSSE_NiagGestorCompo, &UNSSE_NiagGestorCompo::StaticClass, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("UNSSE_NiagGestorCompo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNSSE_NiagGestorCompo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
