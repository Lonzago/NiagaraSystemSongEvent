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
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_NiagGestorCompo();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	NIAGARASYSTEMSONGEVENT_API UFunction* Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction();
// End Cross Module References
	static UEnum* ENiagaraGestorActions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENiagaraGestorActions"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENiagaraGestorActions>()
	{
		return ENiagaraGestorActions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraGestorActions(ENiagaraGestorActions_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENiagaraGestorActions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions_Hash() { return 1709650676U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraGestorActions"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraGestorActions::NGA_KillSlow", (int64)ENiagaraGestorActions::NGA_KillSlow },
				{ "ENiagaraGestorActions::NGA_KillInstan", (int64)ENiagaraGestorActions::NGA_KillInstan },
				{ "ENiagaraGestorActions::NGA_SpawmSlow", (int64)ENiagaraGestorActions::NGA_SpawmSlow },
				{ "ENiagaraGestorActions::NGA_SpawnInstan", (int64)ENiagaraGestorActions::NGA_SpawnInstan },
				{ "ENiagaraGestorActions::NGA_FadeParticles", (int64)ENiagaraGestorActions::NGA_FadeParticles },
				{ "ENiagaraGestorActions::NGA_SwitchHardParticles", (int64)ENiagaraGestorActions::NGA_SwitchHardParticles },
				{ "ENiagaraGestorActions::NGA_SwitchParticles", (int64)ENiagaraGestorActions::NGA_SwitchParticles },
				{ "ENiagaraGestorActions::NGA_ModifierParamInstan", (int64)ENiagaraGestorActions::NGA_ModifierParamInstan },
				{ "ENiagaraGestorActions::NGA_ModifierParamByTime", (int64)ENiagaraGestorActions::NGA_ModifierParamByTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
				{ "NGA_FadeParticles.DisplayName", "Fade Partticles" },
				{ "NGA_KillInstan.DisplayName", "Kill Instan" },
				{ "NGA_KillSlow.DisplayName", "Kill Slow" },
				{ "NGA_ModifierParamByTime.DisplayName", "ModifierParam by Time" },
				{ "NGA_ModifierParamInstan.DisplayName", "ModifierParamInstan" },
				{ "NGA_SpawmSlow.DisplayName", "Spawn Slow" },
				{ "NGA_SpawnInstan.DisplayName", "Spawn Instan" },
				{ "NGA_SwitchHardParticles.DisplayName", "Switch Hard Particles" },
				{ "NGA_SwitchParticles.DisplayName", "Switch Particles" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENiagaraGestorActions",
				"ENiagaraGestorActions",
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
class UScriptStruct* FNSSE_NiagaraParamModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_NiagaraParamModifier"), sizeof(FNSSE_NiagaraParamModifier), Get_Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_NiagaraParamModifier>()
{
	return FNSSE_NiagaraParamModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_NiagaraParamModifier(FNSSE_NiagaraParamModifier::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_NiagaraParamModifier"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraParamModifier
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraParamModifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_NiagaraParamModifier")),new UScriptStruct::TCppStructOps<FNSSE_NiagaraParamModifier>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraParamModifier;
	struct Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTransition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_NiagaraParamModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_TimeTransition_MetaData[] = {
		{ "Category", "NSSE_NiagaraParamModifier" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_TimeTransition = { "TimeTransition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_NiagaraParamModifier, TimeTransition), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_TimeTransition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_TimeTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NewValue_MetaData[] = {
		{ "Category", "NSSE_NiagaraParamModifier" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_NiagaraParamModifier, NewValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NewValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NameParameter_MetaData[] = {
		{ "Category", "NSSE_NiagaraParamModifier" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NameParameter = { "NameParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_NiagaraParamModifier, NameParameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NameParameter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NameParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_TimeTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::NewProp_NameParameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_NiagaraParamModifier",
		sizeof(FNSSE_NiagaraParamModifier),
		alignof(FNSSE_NiagaraParamModifier),
		Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_NiagaraParamModifier"), sizeof(FNSSE_NiagaraParamModifier), Get_Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraParamModifier_Hash() { return 278960855U; }
class UScriptStruct* FNSSE_EventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_EventData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_EventData"), sizeof(FNSSE_EventData), Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_EventData>()
{
	return FNSSE_EventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_EventData(FNSSE_EventData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_EventData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_EventData")),new UScriptStruct::TCppStructOps<FNSSE_EventData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventData;
	struct Z_Construct_UScriptStruct_FNSSE_EventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystemRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Brush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_EventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef = { "NiagaraSystemRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, NiagaraSystemRef), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, Brush), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_Brush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_Brush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeFade_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeFade = { "TimeFade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, TimeFade), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeFade_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeLife_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeLife = { "TimeLife", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, TimeLife), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeLife_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_EventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_Brush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_TimeLife,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_EventData",
		sizeof(FNSSE_EventData),
		alignof(FNSSE_EventData),
		Z_Construct_UScriptStruct_FNSSE_EventData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_EventData"), sizeof(FNSSE_EventData), Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_EventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash() { return 1240924657U; }
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
			ENiagaraGestorActions Action;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms, Action), Z_Construct_UEnum_NiagaraSystemSongEvent_ENiagaraGestorActions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::NewProp_Action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "NSSE TEST" },
		{ "ModuleRelativePath", "Public/NSSE_NiagGestorCompo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNSSE_NiagGestorCompo, nullptr, "NSSE_DoNiagaraAction", sizeof(NSSE_NiagGestorCompo_eventNSSE_DoNiagaraAction_Parms), Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UNSSE_NiagGestorCompo_NSSE_DoNiagaraAction, "NSSE_DoNiagaraAction" }, // 3523773591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_NiagGestorCompo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
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
	IMPLEMENT_CLASS(UNSSE_NiagGestorCompo, 2428506689);
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
