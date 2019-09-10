// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemSongEvent/Public/GestorNiagaraParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGestorNiagaraParameters() {}
// Cross Module References
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UGestorNiagaraParameters_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UGestorNiagaraParameters();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ChangeParamsActionData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	void UGestorNiagaraParameters::StaticRegisterNativesUGestorNiagaraParameters()
	{
		UClass* Class = UGestorNiagaraParameters::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUpGestorParticleEvent", &UGestorNiagaraParameters::execSetUpGestorParticleEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics
	{
		struct GestorNiagaraParameters_eventSetUpGestorParticleEvent_Parms
		{
			UNiagaraComponent* NiagaraCompoTargert;
			FNSSE_ChangeParamsActionData DataParticleChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataParticleChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataParticleChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraCompoTargert_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraCompoTargert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_DataParticleChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_DataParticleChange = { "DataParticleChange", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GestorNiagaraParameters_eventSetUpGestorParticleEvent_Parms, DataParticleChange), Z_Construct_UScriptStruct_FNSSE_ChangeParamsActionData, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_DataParticleChange_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_DataParticleChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_NiagaraCompoTargert_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_NiagaraCompoTargert = { "NiagaraCompoTargert", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GestorNiagaraParameters_eventSetUpGestorParticleEvent_Parms, NiagaraCompoTargert), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_NiagaraCompoTargert_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_NiagaraCompoTargert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_DataParticleChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::NewProp_NiagaraCompoTargert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gestor Params Niagara" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
		{ "ToolTip", "CUSTOM METHODS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGestorNiagaraParameters, nullptr, "SetUpGestorParticleEvent", sizeof(GestorNiagaraParameters_eventSetUpGestorParticleEvent_Parms), Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGestorNiagaraParameters_NoRegister()
	{
		return UGestorNiagaraParameters::StaticClass();
	}
	struct Z_Construct_UClass_UGestorNiagaraParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGestorNiagaraParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGestorNiagaraParameters_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGestorNiagaraParameters_SetUpGestorParticleEvent, "SetUpGestorParticleEvent" }, // 3484596874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGestorNiagaraParameters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GestorNiagaraParameters.h" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGestorNiagaraParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGestorNiagaraParameters>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGestorNiagaraParameters_Statics::ClassParams = {
		&UGestorNiagaraParameters::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGestorNiagaraParameters_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGestorNiagaraParameters_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGestorNiagaraParameters()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGestorNiagaraParameters_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGestorNiagaraParameters, 4021500658);
	template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<UGestorNiagaraParameters>()
	{
		return UGestorNiagaraParameters::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGestorNiagaraParameters(Z_Construct_UClass_UGestorNiagaraParameters, &UGestorNiagaraParameters::StaticClass, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("UGestorNiagaraParameters"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGestorNiagaraParameters);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
