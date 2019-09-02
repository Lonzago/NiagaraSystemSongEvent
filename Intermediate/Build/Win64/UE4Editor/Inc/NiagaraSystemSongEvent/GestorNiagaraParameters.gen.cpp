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
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterChange();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ParametersChangeData();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UGestorNiagaraParameters_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UGestorNiagaraParameters();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	static UEnum* ENSSE_ParameterChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterChange, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENSSE_ParameterChange"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_ParameterChange>()
	{
		return ENSSE_ParameterChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENSSE_ParameterChange(ENSSE_ParameterChange_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENSSE_ParameterChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterChange_Hash() { return 1925331850U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENSSE_ParameterChange"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENSSE_ParameterChange::EPC_SinglerParameter", (int64)ENSSE_ParameterChange::EPC_SinglerParameter },
				{ "ENSSE_ParameterChange::EPC_MultipleParameters", (int64)ENSSE_ParameterChange::EPC_MultipleParameters },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EPC_MultipleParameters.DisplayName", "Multiple Parameter" },
				{ "EPC_SinglerParameter.DisplayName", "Singler Parameter" },
				{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENSSE_ParameterChange",
				"ENSSE_ParameterChange",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENSSE_ParameterType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENSSE_ParameterType"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_ParameterType>()
	{
		return ENSSE_ParameterType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENSSE_ParameterType(ENSSE_ParameterType_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENSSE_ParameterType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType_Hash() { return 3527814047U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENSSE_ParameterType"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENSSE_ParameterType::EPT_Actor", (int64)ENSSE_ParameterType::EPT_Actor },
				{ "ENSSE_ParameterType::EPT_Bool", (int64)ENSSE_ParameterType::EPT_Bool },
				{ "ENSSE_ParameterType::EPT_Float", (int64)ENSSE_ParameterType::EPT_Float },
				{ "ENSSE_ParameterType::EPT_Int32", (int64)ENSSE_ParameterType::EPT_Int32 },
				{ "ENSSE_ParameterType::EPT_LinearColor", (int64)ENSSE_ParameterType::EPT_LinearColor },
				{ "ENSSE_ParameterType::EPT_Quaternion", (int64)ENSSE_ParameterType::EPT_Quaternion },
				{ "ENSSE_ParameterType::EPT_Vector2", (int64)ENSSE_ParameterType::EPT_Vector2 },
				{ "ENSSE_ParameterType::EPT_Vector3", (int64)ENSSE_ParameterType::EPT_Vector3 },
				{ "ENSSE_ParameterType::EPT_Vector4", (int64)ENSSE_ParameterType::EPT_Vector4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EPT_Actor.DisplayName", "Param Actor" },
				{ "EPT_Bool.DisplayName", "Param Bool" },
				{ "EPT_Float.DisplayName", "Param Float" },
				{ "EPT_Int32.DisplayName", "Param Int" },
				{ "EPT_LinearColor.DisplayName", "Param LinearColor" },
				{ "EPT_Quaternion.DisplayName", "Param Quaternion" },
				{ "EPT_Vector2.DisplayName", "Param Vector2" },
				{ "EPT_Vector3.DisplayName", "Param Vector" },
				{ "EPT_Vector4.DisplayName", "Param Vector4" },
				{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENSSE_ParameterType",
				"ENSSE_ParameterType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FNSSE_ParametersChangeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_ParametersChangeData"), sizeof(FNSSE_ParametersChangeData), Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_ParametersChangeData>()
{
	return FNSSE_ParametersChangeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_ParametersChangeData(FNSSE_ParametersChangeData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_ParametersChangeData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ParametersChangeData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ParametersChangeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_ParametersChangeData")),new UScriptStruct::TCppStructOps<FNSSE_ParametersChangeData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ParametersChangeData;
	struct Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instan_MetaData[];
#endif
		static void NewProp_Instan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Instan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoTrans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParametroFinal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParametroFinal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParametroInicial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParametroInicial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
		{ "ToolTip", "template<typename T>\nstruct FNSSE_ParametersChangeData\n{\n       T ParametroInicial;\n       T ParametroFinal;\n       float TiempoTrans;\n       bool Instan;\n\n       FNSSE_ParametersChangeData(T ParamInit, T ParamEnd, float Time, bool ForceInstan = false)\n       {\n               ParametroInicial = ParamInit;\n               ParametroFinal = ParamEnd;\n               TiempoTrans = Time;\n               Instan = ForceInstan\n       }\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ParametersChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan_SetBit(void* Obj)
	{
		((FNSSE_ParametersChangeData*)Obj)->Instan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan = { "Instan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNSSE_ParametersChangeData), &Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_TiempoTrans_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_TiempoTrans = { "TiempoTrans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, TiempoTrans), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_TiempoTrans_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_TiempoTrans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal = { "ParametroFinal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, ParametroFinal), Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial = { "ParametroInicial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, ParametroInicial), Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam = { "NameParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, NameParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_Instan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_TiempoTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_ParametersChangeData",
		sizeof(FNSSE_ParametersChangeData),
		alignof(FNSSE_ParametersChangeData),
		Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ParametersChangeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_ParametersChangeData"), sizeof(FNSSE_ParametersChangeData), Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash() { return 2535571935U; }
class UScriptStruct* FNSSE_InputParametersChangeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_InputParametersChangeData"), sizeof(FNSSE_InputParametersChangeData), Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_InputParametersChangeData>()
{
	return FNSSE_InputParametersChangeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_InputParametersChangeData(FNSSE_InputParametersChangeData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_InputParametersChangeData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_InputParametersChangeData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_InputParametersChangeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_InputParametersChangeData")),new UScriptStruct::TCppStructOps<FNSSE_InputParametersChangeData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_InputParametersChangeData;
	struct Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PVec4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PVec4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PVec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PVec2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PVec2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PQuat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PQuat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PLinearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PLinearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PBool_MetaData[];
#endif
		static void NewProp_PBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_InputParametersChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4 = { "PVec4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec = { "PVec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D = { "PVec2D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat = { "PQuat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor = { "PLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt = { "PInt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat = { "PFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_SetBit(void* Obj)
	{
		((FNSSE_InputParametersChangeData*)Obj)->PBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool = { "PBool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNSSE_InputParametersChangeData), &Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor = { "PActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType = { "PType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PType), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_InputParametersChangeData",
		sizeof(FNSSE_InputParametersChangeData),
		alignof(FNSSE_InputParametersChangeData),
		Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_InputParametersChangeData"), sizeof(FNSSE_InputParametersChangeData), Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash() { return 1294123276U; }
	void UGestorNiagaraParameters::StaticRegisterNativesUGestorNiagaraParameters()
	{
		UClass* Class = UGestorNiagaraParameters::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartParameterChanges", &UGestorNiagaraParameters::execStartParameterChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics
	{
		struct GestorNiagaraParameters_eventStartParameterChanges_Parms
		{
			UNiagaraComponent* NiagaraCompoRef;
			FNSSE_ParametersChangeData DataRef;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraCompoRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraCompoRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_DataRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_DataRef = { "DataRef", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GestorNiagaraParameters_eventStartParameterChanges_Parms, DataRef), Z_Construct_UScriptStruct_FNSSE_ParametersChangeData, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_DataRef_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_DataRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_NiagaraCompoRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_NiagaraCompoRef = { "NiagaraCompoRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GestorNiagaraParameters_eventStartParameterChanges_Parms, NiagaraCompoRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_NiagaraCompoRef_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_NiagaraCompoRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_DataRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::NewProp_NiagaraCompoRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gestor Params Niagara" },
		{ "ModuleRelativePath", "Public/GestorNiagaraParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGestorNiagaraParameters, nullptr, "StartParameterChanges", sizeof(GestorNiagaraParameters_eventStartParameterChanges_Parms), Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UGestorNiagaraParameters_StartParameterChanges, "StartParameterChanges" }, // 2399717966
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
	IMPLEMENT_CLASS(UGestorNiagaraParameters, 3988121650);
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
