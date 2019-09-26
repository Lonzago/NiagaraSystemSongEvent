// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
 
#ifdef NIAGARASYSTEMSONGEVENT_NSSE_DataStrucTypes_generated_h
#error "NSSE_DataStrucTypes.generated.h already included, missing '#pragma once' in NSSE_DataStrucTypes.h"
#endif
#define NIAGARASYSTEMSONGEVENT_NSSE_DataStrucTypes_generated_h

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_ManagerEventList_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_ManagerEventList>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_ManagerEvent_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_ManagerEvent>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_DataTableActionGestor_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_DataTableActionGestor>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_NiagaraGestorData_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_NiagaraGestorData>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_SinglerParameterData_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_SinglerParameterData>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNSSE_UnitParameterType_Statics; \
	NIAGARASYSTEMSONGEVENT_API static class UScriptStruct* StaticStruct();


template<> NIAGARASYSTEMSONGEVENT_API UScriptStruct* StaticStruct<struct FNSSE_UnitParameterType>();

#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameterTypeByName) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NigaraSystem); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UNSSE_DataStrucTypes::GetParameterTypeByName(Z_Param_NigaraSystem,Z_Param_NameParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParametersType) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNamesVar); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UNSSE_DataStrucTypes::GetParametersType(Z_Param_NiagaraSystem,Z_Param_Out_OutNamesVar,Z_Param_Out_OutMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSystemOverrideParams) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UNSSE_DataStrucTypes::GetSystemOverrideParams(Z_Param_NiagaraSystem); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameterTypeByName) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NigaraSystem); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NameParam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UNSSE_DataStrucTypes::GetParameterTypeByName(Z_Param_NigaraSystem,Z_Param_NameParam); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParametersType) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNamesVar); \
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UNSSE_DataStrucTypes::GetParametersType(Z_Param_NiagaraSystem,Z_Param_Out_OutNamesVar,Z_Param_Out_OutMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSystemOverrideParams) \
	{ \
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UNSSE_DataStrucTypes::GetSystemOverrideParams(Z_Param_NiagaraSystem); \
		P_NATIVE_END; \
	}


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNSSE_DataStrucTypes(); \
	friend struct Z_Construct_UClass_UNSSE_DataStrucTypes_Statics; \
public: \
	DECLARE_CLASS(UNSSE_DataStrucTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_DataStrucTypes)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_INCLASS \
private: \
	static void StaticRegisterNativesUNSSE_DataStrucTypes(); \
	friend struct Z_Construct_UClass_UNSSE_DataStrucTypes_Statics; \
public: \
	DECLARE_CLASS(UNSSE_DataStrucTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraSystemSongEvent"), NO_API) \
	DECLARE_SERIALIZER(UNSSE_DataStrucTypes)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNSSE_DataStrucTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNSSE_DataStrucTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_DataStrucTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_DataStrucTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_DataStrucTypes(UNSSE_DataStrucTypes&&); \
	NO_API UNSSE_DataStrucTypes(const UNSSE_DataStrucTypes&); \
public:


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNSSE_DataStrucTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNSSE_DataStrucTypes(UNSSE_DataStrucTypes&&); \
	NO_API UNSSE_DataStrucTypes(const UNSSE_DataStrucTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNSSE_DataStrucTypes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNSSE_DataStrucTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNSSE_DataStrucTypes)


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_PRIVATE_PROPERTY_OFFSET
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_241_PROLOG
#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_RPC_WRAPPERS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_INCLASS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_PRIVATE_PROPERTY_OFFSET \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_RPC_WRAPPERS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_INCLASS_NO_PURE_DECLS \
	DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARASYSTEMSONGEVENT_API UClass* StaticClass<class UNSSE_DataStrucTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DanceParticles4_22_Plugins_NiagaraSystemSongEvent_Source_NiagaraSystemSongEvent_Public_NSSE_DataStrucTypes_h


#define FOREACH_ENUM_ENSSE_NIAGARAGESTORACTIONS(op) \
	op(ENSSE_NiagaraGestorActions::NGA_KillSlow) \
	op(ENSSE_NiagaraGestorActions::NGA_KillInstan) \
	op(ENSSE_NiagaraGestorActions::NGA_SpawmSlow) \
	op(ENSSE_NiagaraGestorActions::NGA_SpawnInstan) \
	op(ENSSE_NiagaraGestorActions::NGA_FadeParticles) \
	op(ENSSE_NiagaraGestorActions::NGA_SwitchHardParticles) \
	op(ENSSE_NiagaraGestorActions::NGA_SwitchParticles) \
	op(ENSSE_NiagaraGestorActions::NGA_ModifierParamInstan) \
	op(ENSSE_NiagaraGestorActions::NGA_ModifierParamByTime) 

enum class ENSSE_NiagaraGestorActions : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_NiagaraGestorActions>();

#define FOREACH_ENUM_ENSSE_INSTANTRANSTIMING(op) \
	op(ENSSE_InstanTransTiming::EITT_AtStart) \
	op(ENSSE_InstanTransTiming::ETII_Middle) \
	op(ENSSE_InstanTransTiming::ETII_AtEnd) 

enum class ENSSE_InstanTransTiming : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_InstanTransTiming>();

#define FOREACH_ENUM_ENSSE_NUMBERPARAMETERCHANGE(op) \
	op(ENSSE_NumberParameterChange::EPC_SinglerParameter) \
	op(ENSSE_NumberParameterChange::EPC_MultipleParameters) \
	op(ENSSE_NumberParameterChange::EPC_ErrorParameters) 

enum class ENSSE_NumberParameterChange : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_NumberParameterChange>();

#define FOREACH_ENUM_ENSSE_PARAMETERTYPE(op) \
	op(ENSSE_ParameterType::EPT_Actor) \
	op(ENSSE_ParameterType::EPT_Bool) \
	op(ENSSE_ParameterType::EPT_Float) \
	op(ENSSE_ParameterType::EPT_Int32) \
	op(ENSSE_ParameterType::EPT_LinearColor) \
	op(ENSSE_ParameterType::EPT_Quaternion) \
	op(ENSSE_ParameterType::EPT_Vector2) \
	op(ENSSE_ParameterType::EPT_Vector3) \
	op(ENSSE_ParameterType::EPT_Vector4) 

enum class ENSSE_ParameterType : uint8;
template<> NIAGARASYSTEMSONGEVENT_API UEnum* StaticEnum<ENSSE_ParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
