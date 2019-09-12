// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "NSSE_DataStrucTypes.generated.h"


UENUM(BlueprintType)
enum class ENSSE_ParameterType : uint8
{
	EPT_Actor		UMETA(DisplayName = "Param Actor"),
	EPT_Bool		UMETA(DisplayName = "Param Bool"),
	EPT_Float		UMETA(DisplayName = "Param Float"),
	EPT_Int32		UMETA(DisplayName = "Param Int"),
	EPT_LinearColor	UMETA(DisplayName = "Param LinearColor"),
	EPT_Quaternion	UMETA(DisplayName = "Param Quaternion"),
	EPT_Vector2		UMETA(DisplayName = "Param Vector2"),
	EPT_Vector3		UMETA(DisplayName = "Param Vector"),
	EPT_Vector4		UMETA(DisplayName = "Param Vector4")
};

UENUM(BlueprintType)
enum class ENSSE_NumberParameterChange : uint8
{
	EPC_SinglerParameter	UMETA(DisplayName = "Singler Parameter"),
	EPC_MultipleParameters	UMETA(DisplayName = "Multiple Parameter"),
	EPC_ErrorParameters
};

UENUM(BlueprintType)
enum class ENSSE_InstanTransTiming : uint8
{
	EITT_AtStart	UMETA(DisplayName = "At Start"),
	ETII_Middle		UMETA(DisplayName = "Middle"),
	ETII_AtEnd		UMETA(DisplayName = "At End")
};


UENUM(BlueprintType)
enum class ENSSE_NiagaraGestorActions : uint8
{
	NGA_KillSlow			UMETA(DisplayName = "Kill Slow"),
	NGA_KillInstan			UMETA(DisplayName = "Kill Instan"),
	NGA_SpawmSlow			UMETA(DisplayName = "Spawn Slow"),
	NGA_SpawnInstan			UMETA(DisplayName = "Spawn Instan"),
	NGA_FadeParticles		UMETA(DisplayName = "Fade Partticles"),
	NGA_SwitchHardParticles	UMETA(DisplayName = "Switch Hard Particles"),
	NGA_SwitchParticles		UMETA(DisplayName = "Switch Particles"),
	NGA_ModifierParamInstan UMETA(DisplayName = "ModifierParamInstan"),
	NGA_ModifierParamByTime UMETA(DisplayName = "ModifierParam by Time")

};

USTRUCT(BlueprintType)
struct FNSSE_UnitParameterType
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AActor* PActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool			PBool;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float			PFloat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32			PInt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor	PLinearColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FQuat			PQuat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector2D		PVec2D;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector			PVec;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4		PVec4;

	FNSSE_UnitParameterType()
		: 	PActor(nullptr)
	{

	}

};

USTRUCT(BlueprintType)
struct FNSSE_SinglerParameterData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Instan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_InstanTransTiming InstanTiming;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TiempoTrans;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_ParameterType DataType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString NameParam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_UnitParameterType ParametroInicial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_UnitParameterType ParametroFinal;

	

	void SpawnSlow(float _TimeTransition, float _LastValue, FString _NameParam = TEXT("User.SpawnRate"))
	{
		Instan = false;
		TiempoTrans = _TimeTransition;
		DataType = ENSSE_ParameterType::EPT_Float;
		NameParam = _NameParam;

		ParametroInicial.PFloat = 0;
		ParametroFinal.PFloat	= _LastValue;
	}
	
	void KillSlow (float _TimeTransition, float _CurrentValue, FString _NameParam = TEXT("User.SpawnRate"))
	{
		Instan = false;
		TiempoTrans = _TimeTransition;
		DataType = ENSSE_ParameterType::EPT_Float;
		NameParam = _NameParam;

		ParametroInicial.PFloat = _CurrentValue;
		ParametroFinal.PFloat = 0;
	}

};



USTRUCT(BlueprintType)
struct FNSSE_NiagaraGestorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UNiagaraSystem* NiagaraSystemRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FNSSE_SinglerParameterData> SingleParametersList;
	

};



USTRUCT(BlueprintType)
struct FNSSE_DataTableActionGestor : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_NiagaraGestorActions ActionGestor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_NiagaraGestorData ParamActionData;

};


USTRUCT(BlueprintType)
struct FNSSE_ManagerEventList 
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float EventTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString EventName;
};


//DEPRECATED
//USTRUCT(BlueprintType)
//struct FNSSE_EventList 
//{
//
//	GENERATED_BODY()
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//		TArray<FNSSE_EventListData> EventsList;
//};




/////////////////////////////////////////////////////////////////////////////////////////////////////////Class Empty
UCLASS()
class NIAGARASYSTEMSONGEVENT_API UNSSE_DataStrucTypes : public UObject
{
	GENERATED_BODY()
	
};
