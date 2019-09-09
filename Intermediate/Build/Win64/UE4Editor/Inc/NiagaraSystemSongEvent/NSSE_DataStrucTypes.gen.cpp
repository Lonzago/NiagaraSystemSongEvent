// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemSongEvent/Public/NSSE_DataStrucTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNSSE_DataStrucTypes() {}
// Cross Module References
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions();
	UPackage* Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange();
	NIAGARASYSTEMSONGEVENT_API UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventList();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventListData();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ActionEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventData();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventParameterChange();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ParametersChangeData();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_DataStrucTypes_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UClass* Z_Construct_UClass_UNSSE_DataStrucTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ENSSE_NiagaraGestorActions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENSSE_NiagaraGestorActions"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_NiagaraGestorActions>()
	{
		return ENSSE_NiagaraGestorActions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENSSE_NiagaraGestorActions(ENSSE_NiagaraGestorActions_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENSSE_NiagaraGestorActions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions_Hash() { return 2656220922U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENSSE_NiagaraGestorActions"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENSSE_NiagaraGestorActions::NGA_KillSlow", (int64)ENSSE_NiagaraGestorActions::NGA_KillSlow },
				{ "ENSSE_NiagaraGestorActions::NGA_KillInstan", (int64)ENSSE_NiagaraGestorActions::NGA_KillInstan },
				{ "ENSSE_NiagaraGestorActions::NGA_SpawmSlow", (int64)ENSSE_NiagaraGestorActions::NGA_SpawmSlow },
				{ "ENSSE_NiagaraGestorActions::NGA_SpawnInstan", (int64)ENSSE_NiagaraGestorActions::NGA_SpawnInstan },
				{ "ENSSE_NiagaraGestorActions::NGA_FadeParticles", (int64)ENSSE_NiagaraGestorActions::NGA_FadeParticles },
				{ "ENSSE_NiagaraGestorActions::NGA_SwitchHardParticles", (int64)ENSSE_NiagaraGestorActions::NGA_SwitchHardParticles },
				{ "ENSSE_NiagaraGestorActions::NGA_SwitchParticles", (int64)ENSSE_NiagaraGestorActions::NGA_SwitchParticles },
				{ "ENSSE_NiagaraGestorActions::NGA_ModifierParamInstan", (int64)ENSSE_NiagaraGestorActions::NGA_ModifierParamInstan },
				{ "ENSSE_NiagaraGestorActions::NGA_ModifierParamByTime", (int64)ENSSE_NiagaraGestorActions::NGA_ModifierParamByTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
				{ "NGA_FadeParticles.DisplayName", "Fade Partticles" },
				{ "NGA_KillInstan.DisplayName", "Kill Instan" },
				{ "NGA_KillSlow.DisplayName", "Kill Slow" },
				{ "NGA_ModifierParamByTime.DisplayName", "ModifierParam by Time" },
				{ "NGA_ModifierParamInstan.DisplayName", "ModifierParamInstan" },
				{ "NGA_SpawmSlow.DisplayName", "Spawn Slow" },
				{ "NGA_SpawnInstan.DisplayName", "Spawn Instan" },
				{ "NGA_SwitchHardParticles.DisplayName", "Switch Hard Particles" },
				{ "NGA_SwitchParticles.DisplayName", "Switch Particles" },
				{ "ToolTip", "/\n                                       NiagaraGestorCompo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENSSE_NiagaraGestorActions",
				"ENSSE_NiagaraGestorActions",
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
	static UEnum* ENSSE_InstanTransTiming_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENSSE_InstanTransTiming"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_InstanTransTiming>()
	{
		return ENSSE_InstanTransTiming_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENSSE_InstanTransTiming(ENSSE_InstanTransTiming_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENSSE_InstanTransTiming"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming_Hash() { return 660352885U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENSSE_InstanTransTiming"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENSSE_InstanTransTiming::EITT_AtStart", (int64)ENSSE_InstanTransTiming::EITT_AtStart },
				{ "ENSSE_InstanTransTiming::ETII_Middle", (int64)ENSSE_InstanTransTiming::ETII_Middle },
				{ "ENSSE_InstanTransTiming::ETII_AtEnd", (int64)ENSSE_InstanTransTiming::ETII_AtEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EITT_AtStart.DisplayName", "At Start" },
				{ "ETII_AtEnd.DisplayName", "At End" },
				{ "ETII_Middle.DisplayName", "Middle" },
				{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENSSE_InstanTransTiming",
				"ENSSE_InstanTransTiming",
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
	static UEnum* ENSSE_NumberParameterChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("ENSSE_NumberParameterChange"));
		}
		return Singleton;
	}
	template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_NumberParameterChange>()
	{
		return ENSSE_NumberParameterChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENSSE_NumberParameterChange(ENSSE_NumberParameterChange_StaticEnum, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("ENSSE_NumberParameterChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange_Hash() { return 1508568422U; }
	UEnum* Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENSSE_NumberParameterChange"), 0, Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENSSE_NumberParameterChange::EPC_SinglerParameter", (int64)ENSSE_NumberParameterChange::EPC_SinglerParameter },
				{ "ENSSE_NumberParameterChange::EPC_MultipleParameters", (int64)ENSSE_NumberParameterChange::EPC_MultipleParameters },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EPC_MultipleParameters.DisplayName", "Multiple Parameter" },
				{ "EPC_SinglerParameter.DisplayName", "Singler Parameter" },
				{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
				nullptr,
				"ENSSE_NumberParameterChange",
				"ENSSE_NumberParameterChange",
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
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType_Hash() { return 2265226672U; }
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
				{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
				{ "ToolTip", "/\n                                       GestorNiagaraParameters" },
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
class UScriptStruct* FNSSE_EventList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_EventList, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_EventList"), sizeof(FNSSE_EventList), Get_Z_Construct_UScriptStruct_FNSSE_EventList_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_EventList>()
{
	return FNSSE_EventList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_EventList(FNSSE_EventList::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_EventList"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventList
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_EventList")),new UScriptStruct::TCppStructOps<FNSSE_EventList>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventList;
	struct Z_Construct_UScriptStruct_FNSSE_EventList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventsList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_EventList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList_MetaData[] = {
		{ "Category", "NSSE_EventList" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList = { "EventsList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventList, EventsList), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList_Inner = { "EventsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNSSE_EventListData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_EventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventList_Statics::NewProp_EventsList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_EventList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_EventList",
		sizeof(FNSSE_EventList),
		alignof(FNSSE_EventList),
		Z_Construct_UScriptStruct_FNSSE_EventList_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventList_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_EventList"), sizeof(FNSSE_EventList), Get_Z_Construct_UScriptStruct_FNSSE_EventList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_EventList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventList_Hash() { return 2976777864U; }
class UScriptStruct* FNSSE_EventListData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventListData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_EventListData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_EventListData"), sizeof(FNSSE_EventListData), Get_Z_Construct_UScriptStruct_FNSSE_EventListData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_EventListData>()
{
	return FNSSE_EventListData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_EventListData(FNSSE_EventListData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_EventListData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventListData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventListData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_EventListData")),new UScriptStruct::TCppStructOps<FNSSE_EventListData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventListData;
	struct Z_Construct_UScriptStruct_FNSSE_EventListData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EventTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
		{ "ToolTip", "/\n                                       EventManager" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_EventListData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "NSSE_EventListData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventListData, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventTime_MetaData[] = {
		{ "Category", "NSSE_EventListData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventListData, EventTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::NewProp_EventTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_EventListData",
		sizeof(FNSSE_EventListData),
		alignof(FNSSE_EventListData),
		Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventListData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventListData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_EventListData"), sizeof(FNSSE_EventListData), Get_Z_Construct_UScriptStruct_FNSSE_EventListData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_EventListData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventListData_Hash() { return 4293067134U; }
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
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
		{ "ToolTip", "/\n                                       Action Gestor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ActionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData[] = {
		{ "Category", "NSSE_ActionEvent" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ActionEvent, EventData), Z_Construct_UScriptStruct_FNSSE_EventData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_EventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData[] = {
		{ "Category", "NSSE_ActionEvent" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor = { "ActionGestor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ActionEvent, ActionGestor), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ActionEvent_Statics::NewProp_ActionGestor_MetaData)) };
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
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ActionEvent_Hash() { return 1757181399U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystemRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_EventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_EventParameters_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_EventParameters = { "EventParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, EventParameters), Z_Construct_UScriptStruct_FNSSE_EventParameterChange, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_EventParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_EventParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData[] = {
		{ "Category", "NSSE_EventData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef = { "NiagaraSystemRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventData, NiagaraSystemRef), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_EventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_EventParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventData_Statics::NewProp_NiagaraSystemRef,
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
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventData_Hash() { return 1262324188U; }
class UScriptStruct* FNSSE_EventParameterChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_EventParameterChange, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_EventParameterChange"), sizeof(FNSSE_EventParameterChange), Get_Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_EventParameterChange>()
{
	return FNSSE_EventParameterChange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_EventParameterChange(FNSSE_EventParameterChange::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_EventParameterChange"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventParameterChange
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventParameterChange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_EventParameterChange")),new UScriptStruct::TCppStructOps<FNSSE_EventParameterChange>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_EventParameterChange;
	struct Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListParamChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListParamChange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListParamChange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InstanTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instan_MetaData[];
#endif
		static void NewProp_Instan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Instan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoTrans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_EventParameterChange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange_MetaData[] = {
		{ "Category", "NSSE_EventParameterChange" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange = { "ListParamChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventParameterChange, ListParamChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange_Inner = { "ListParamChange", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNSSE_ParametersChangeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming_MetaData[] = {
		{ "Category", "NSSE_EventParameterChange" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming = { "InstanTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventParameterChange, InstanTiming), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan_MetaData[] = {
		{ "Category", "NSSE_EventParameterChange" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan_SetBit(void* Obj)
	{
		((FNSSE_EventParameterChange*)Obj)->Instan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan = { "Instan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNSSE_EventParameterChange), &Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_TiempoTrans_MetaData[] = {
		{ "Category", "NSSE_EventParameterChange" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_TiempoTrans = { "TiempoTrans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_EventParameterChange, TiempoTrans), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_TiempoTrans_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_TiempoTrans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_ListParamChange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_InstanTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_Instan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::NewProp_TiempoTrans,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_EventParameterChange",
		sizeof(FNSSE_EventParameterChange),
		alignof(FNSSE_EventParameterChange),
		Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_EventParameterChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_EventParameterChange"), sizeof(FNSSE_EventParameterChange), Get_Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_EventParameterChange_Hash() { return 229238245U; }
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ParametersChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal = { "ParametroFinal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, ParametroFinal), Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial = { "ParametroInicial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, ParametroInicial), Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam = { "NameParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, NameParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "NSSE_ParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ParametersChangeData, DataType), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroFinal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_ParametroInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_NameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Statics::NewProp_DataType_Underlying,
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
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ParametersChangeData_Hash() { return 2232546845U; }
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_InputParametersChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4 = { "PVec4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec = { "PVec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D = { "PVec2D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PVec2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PVec2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat = { "PQuat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor = { "PLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PLinearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt = { "PInt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat = { "PFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PBool_MetaData[] = {
		{ "Category", "NSSE_InputParametersChangeData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
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
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor = { "PActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_InputParametersChangeData, PActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Statics::NewProp_PActor_MetaData)) };
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
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_InputParametersChangeData_Hash() { return 1314286012U; }
	void UNSSE_DataStrucTypes::StaticRegisterNativesUNSSE_DataStrucTypes()
	{
	}
	UClass* Z_Construct_UClass_UNSSE_DataStrucTypes_NoRegister()
	{
		return UNSSE_DataStrucTypes::StaticClass();
	}
	struct Z_Construct_UClass_UNSSE_DataStrucTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NSSE_DataStrucTypes.h" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
		{ "ToolTip", "Class Empty" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNSSE_DataStrucTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::ClassParams = {
		&UNSSE_DataStrucTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNSSE_DataStrucTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNSSE_DataStrucTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNSSE_DataStrucTypes, 121736456);
	template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<UNSSE_DataStrucTypes>()
	{
		return UNSSE_DataStrucTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNSSE_DataStrucTypes(Z_Construct_UClass_UNSSE_DataStrucTypes, &UNSSE_DataStrucTypes::StaticClass, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("UNSSE_DataStrucTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNSSE_DataStrucTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
