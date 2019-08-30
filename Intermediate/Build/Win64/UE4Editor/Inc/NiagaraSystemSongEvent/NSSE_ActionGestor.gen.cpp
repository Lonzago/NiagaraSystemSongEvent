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
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ActionEvent();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventData();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_ActionGestor_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_ActionGestor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UNSSE_ActionGestor_EventNiagaraCalled();
// End Cross Module References
class UScriptStruct* FNSSE_ActionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_ActionEvent, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_ActionEvent"), sizeof(FNSSE_ActionEvent), Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_ActionEvent>()
{
	return FNSSE_ActionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_ActionEvent(FNSSE_ActionEvent::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_ActionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ActionEvent
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ActionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_ActionEvent")),new UScriptStruct::TCppStructOps<FNSSE_ActionEvent>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ActionEvent;
	struct Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionGestor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionGestor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionGestor_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ActionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData[] = {
		{ "Category", "NSSE_ActionEvent" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ActionEvent, EventData), Z_Construct_UScriptStruct_FNSSE_EventData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData[] = {
		{ "Category", "NSSE_ActionEvent" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor = { "ActionGestor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ActionEvent, ActionGestor), Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NSSE_ActionEvent",
		sizeof(FNSSE_ActionEvent),
		alignof(FNSSE_ActionEvent),
		Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ActionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_ActionEvent"), sizeof(FNSSE_ActionEvent), Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash() { return 3325033162U; }
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
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NSSE_ActionGestor.h" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "NSSE Component" },
		{ "ModuleRelativePath", "Public/NSSE_ActionGestor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNSSE_ActionGestor, GroupName), METADATA_PARAMS(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNSSE_ActionGestor_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNSSE_ActionGestor_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(UNSSE_ActionGestor, 1536563838);
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
