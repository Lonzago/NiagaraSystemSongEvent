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
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ManagerEventList();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ManagerEvent();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_SinglerParameterData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARASYSTEMSONGEVENT_API UScriptStruct* Z_Construct_UScriptStruct_FNSSE_UnitParameterType();
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
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions_Hash() { return 3411070270U; }
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
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NumberParameterChange_Hash() { return 3562263326U; }
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
				{ "ENSSE_NumberParameterChange::EPC_ErrorParameters", (int64)ENSSE_NumberParameterChange::EPC_ErrorParameters },
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
	uint32 Get_Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType_Hash() { return 3188149807U; }
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
class UScriptStruct* FNSSE_ManagerEventList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_ManagerEventList, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_ManagerEventList"), sizeof(FNSSE_ManagerEventList), Get_Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_ManagerEventList>()
{
	return FNSSE_ManagerEventList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_ManagerEventList(FNSSE_ManagerEventList::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_ManagerEventList"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEventList
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEventList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_ManagerEventList")),new UScriptStruct::TCppStructOps<FNSSE_ManagerEventList>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEventList;
	struct Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ManagerEventList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList_MetaData[] = {
		{ "Category", "NSSE_ManagerEventList" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList = { "EventsList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ManagerEventList, EventsList), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList_Inner = { "EventsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNSSE_ManagerEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::NewProp_EventsList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NSSE_ManagerEventList",
		sizeof(FNSSE_ManagerEventList),
		alignof(FNSSE_ManagerEventList),
		Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ManagerEventList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_ManagerEventList"), sizeof(FNSSE_ManagerEventList), Get_Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Hash() { return 4175083174U; }
class UScriptStruct* FNSSE_ManagerEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_ManagerEvent, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_ManagerEvent"), sizeof(FNSSE_ManagerEvent), Get_Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_ManagerEvent>()
{
	return FNSSE_ManagerEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_ManagerEvent(FNSSE_ManagerEvent::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_ManagerEvent"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEvent
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_ManagerEvent")),new UScriptStruct::TCppStructOps<FNSSE_ManagerEvent>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_ManagerEvent;
	struct Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_ManagerEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "NSSE_ManagerEvent" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ManagerEvent, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventTime_MetaData[] = {
		{ "Category", "NSSE_ManagerEvent" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_ManagerEvent, EventTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::NewProp_EventTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_ManagerEvent",
		sizeof(FNSSE_ManagerEvent),
		alignof(FNSSE_ManagerEvent),
		Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_ManagerEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_ManagerEvent"), sizeof(FNSSE_ManagerEvent), Get_Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Hash() { return 752720500U; }
class UScriptStruct* FNSSE_DataTableActionGestor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_DataTableActionGestor"), sizeof(FNSSE_DataTableActionGestor), Get_Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_DataTableActionGestor>()
{
	return FNSSE_DataTableActionGestor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_DataTableActionGestor(FNSSE_DataTableActionGestor::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_DataTableActionGestor"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_DataTableActionGestor
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_DataTableActionGestor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_DataTableActionGestor")),new UScriptStruct::TCppStructOps<FNSSE_DataTableActionGestor>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_DataTableActionGestor;
	struct Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamActionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamActionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionGestor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionGestor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionGestor_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_DataTableActionGestor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ParamActionData_MetaData[] = {
		{ "Category", "NSSE_DataTableActionGestor" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ParamActionData = { "ParamActionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_DataTableActionGestor, ParamActionData), Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ParamActionData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ParamActionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor_MetaData[] = {
		{ "Category", "NSSE_DataTableActionGestor" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor = { "ActionGestor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_DataTableActionGestor, ActionGestor), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_NiagaraGestorActions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ParamActionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::NewProp_ActionGestor_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"NSSE_DataTableActionGestor",
		sizeof(FNSSE_DataTableActionGestor),
		alignof(FNSSE_DataTableActionGestor),
		Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_DataTableActionGestor"), sizeof(FNSSE_DataTableActionGestor), Get_Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Hash() { return 3450925455U; }
class UScriptStruct* FNSSE_NiagaraGestorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_NiagaraGestorData"), sizeof(FNSSE_NiagaraGestorData), Get_Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_NiagaraGestorData>()
{
	return FNSSE_NiagaraGestorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_NiagaraGestorData(FNSSE_NiagaraGestorData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_NiagaraGestorData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraGestorData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraGestorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_NiagaraGestorData")),new UScriptStruct::TCppStructOps<FNSSE_NiagaraGestorData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_NiagaraGestorData;
	struct Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleParametersList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SingleParametersList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleParametersList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystemRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_NiagaraGestorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList_MetaData[] = {
		{ "Category", "NSSE_NiagaraGestorData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList = { "SingleParametersList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_NiagaraGestorData, SingleParametersList), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList_Inner = { "SingleParametersList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNSSE_SinglerParameterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_NiagaraSystemRef_MetaData[] = {
		{ "Category", "NSSE_NiagaraGestorData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_NiagaraSystemRef = { "NiagaraSystemRef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_NiagaraGestorData, NiagaraSystemRef), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_NiagaraSystemRef_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_NiagaraSystemRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_SingleParametersList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::NewProp_NiagaraSystemRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_NiagaraGestorData",
		sizeof(FNSSE_NiagaraGestorData),
		alignof(FNSSE_NiagaraGestorData),
		Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_NiagaraGestorData"), sizeof(FNSSE_NiagaraGestorData), Get_Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Hash() { return 2660231791U; }
class UScriptStruct* FNSSE_SinglerParameterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_SinglerParameterData"), sizeof(FNSSE_SinglerParameterData), Get_Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_SinglerParameterData>()
{
	return FNSSE_SinglerParameterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_SinglerParameterData(FNSSE_SinglerParameterData::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_SinglerParameterData"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_SinglerParameterData
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_SinglerParameterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_SinglerParameterData")),new UScriptStruct::TCppStructOps<FNSSE_SinglerParameterData>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_SinglerParameterData;
	struct Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiempoTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiempoTrans;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_SinglerParameterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroFinal_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroFinal = { "ParametroFinal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, ParametroFinal), Z_Construct_UScriptStruct_FNSSE_UnitParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroFinal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroFinal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroInicial_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroInicial = { "ParametroInicial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, ParametroInicial), Z_Construct_UScriptStruct_FNSSE_UnitParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroInicial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroInicial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_NameParam_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_NameParam = { "NameParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, NameParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_NameParam_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_NameParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, DataType), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_ParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_TiempoTrans_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_TiempoTrans = { "TiempoTrans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, TiempoTrans), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_TiempoTrans_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_TiempoTrans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming = { "InstanTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_SinglerParameterData, InstanTiming), Z_Construct_UEnum_NiagaraSystemSongEvent_ENSSE_InstanTransTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan_MetaData[] = {
		{ "Category", "NSSE_SinglerParameterData" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan_SetBit(void* Obj)
	{
		((FNSSE_SinglerParameterData*)Obj)->Instan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan = { "Instan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNSSE_SinglerParameterData), &Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroFinal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_ParametroInicial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_NameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_TiempoTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_InstanTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::NewProp_Instan,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_SinglerParameterData",
		sizeof(FNSSE_SinglerParameterData),
		alignof(FNSSE_SinglerParameterData),
		Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_SinglerParameterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_SinglerParameterData"), sizeof(FNSSE_SinglerParameterData), Get_Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Hash() { return 1060128211U; }
class UScriptStruct* FNSSE_UnitParameterType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARASYSTEMSONGEVENT_API uint32 Get_Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNSSE_UnitParameterType, Z_Construct_UPackage__Script_NiagaraSystemSongEvent(), TEXT("NSSE_UnitParameterType"), sizeof(FNSSE_UnitParameterType), Get_Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Hash());
	}
	return Singleton;
}
template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<FNSSE_UnitParameterType>()
{
	return FNSSE_UnitParameterType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNSSE_UnitParameterType(FNSSE_UnitParameterType::StaticStruct, TEXT("/Script/NiagaraSystemSongEvent"), TEXT("NSSE_UnitParameterType"), false, nullptr, nullptr);
static struct FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_UnitParameterType
{
	FScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_UnitParameterType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NSSE_UnitParameterType")),new UScriptStruct::TCppStructOps<FNSSE_UnitParameterType>);
	}
} ScriptStruct_NiagaraSystemSongEvent_StaticRegisterNativesFNSSE_UnitParameterType;
	struct Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNSSE_UnitParameterType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec4_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec4 = { "PVec4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PVec4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec = { "PVec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec2D_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec2D = { "PVec2D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PVec2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec2D_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PQuat_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PQuat = { "PQuat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PQuat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PQuat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PQuat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PLinearColor_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PLinearColor = { "PLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PLinearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PInt_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PInt = { "PInt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PInt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PFloat_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PFloat = { "PFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool_SetBit(void* Obj)
	{
		((FNSSE_UnitParameterType*)Obj)->PBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool = { "PBool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNSSE_UnitParameterType), &Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PActor_MetaData[] = {
		{ "Category", "NSSE_UnitParameterType" },
		{ "ModuleRelativePath", "Public/NSSE_DataStrucTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PActor = { "PActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNSSE_UnitParameterType, PActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PVec2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PQuat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PLinearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::NewProp_PActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSystemSongEvent,
		nullptr,
		&NewStructOps,
		"NSSE_UnitParameterType",
		sizeof(FNSSE_UnitParameterType),
		alignof(FNSSE_UnitParameterType),
		Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNSSE_UnitParameterType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NiagaraSystemSongEvent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NSSE_UnitParameterType"), sizeof(FNSSE_UnitParameterType), Get_Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Hash() { return 2503253744U; }
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
