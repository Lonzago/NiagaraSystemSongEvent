// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemSongEvent/Public/NSSE_ActionGestor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNSSE_ActionGestor() {}
// Cross Module References
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_ActionGestor_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_ActionGestor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UNSSE_ActionGestor::StaticRegisterNativesUNSSE_ActionGestor()
	{
		UClass* Class = UNSSE_ActionGestor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventNiagaraCalled", &UNSSE_ActionGestor::execEventNiagaraCalled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics
	{
		struct NSSE_ActionGestor_eventEventNiagaraCalled_Parms
		{
			FString NameEvent;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::NewProp_NameEvent = { "NameEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_ActionGestor_eventEventNiagaraCalled_Parms, NameEvent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::NewProp_NameEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNSSE_ActionGestor, nullptr, "EventNiagaraCalled", sizeof(NSSE_ActionGestor_eventEventNiagaraCalled_Parms), Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNSSE_ActionGestor_NoRegister()
	{
		return UNSSE_ActionGestor::StaticClass();
	}
	struct Z_Construct_UClass_UNSSE_ActionGestor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNiagaraGestor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNiagaraGestor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionEventList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionEventList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNSSE_ActionGestor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNSSE_ActionGestor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled, "EventNiagaraCalled" }, // 1132979395
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_ActionGestor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NiagaraSystemSongEvent" },
		{ "IncludePath", "NSSE_ActionGestor.h" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_MyNiagaraGestor_MetaData[] = {
		{ "Category", "NSSE ActionGestor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_MyNiagaraGestor = { "MyNiagaraGestor", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_ActionGestor, MyNiagaraGestor), Z_Construct_UClass_UNSSE_NiagGestorCompo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_MyNiagaraGestor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_MyNiagaraGestor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_ActionEventList_MetaData[] = {
		{ "Category", "NSSE ActionGestor" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_ActionEventList = { "ActionEventList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_ActionGestor, ActionEventList), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_ActionEventList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_ActionEventList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "NSSE ActionGestor" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
		{ "ToolTip", "Try to find a Manager with this group name. Else will take the first found" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_ActionGestor, GroupName), METADATA_PARAMS(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNSSE_ActionGestor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_MyNiagaraGestor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_ActionEventList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNSSE_ActionGestor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNSSE_ActionGestor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNSSE_ActionGestor_Statics::ClassParams = {
		&UNSSE_ActionGestor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNSSE_ActionGestor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNSSE_ActionGestor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNSSE_ActionGestor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNSSE_ActionGestor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNSSE_ActionGestor, 2375833624);
	template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<UNSSE_ActionGestor>()
	{
		return UNSSE_ActionGestor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNSSE_ActionGestor(Z_Construct_UClass_UNSSE_ActionGestor, &UNSSE_ActionGestor::StaticClass, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("UNSSE_ActionGestor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNSSE_ActionGestor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
