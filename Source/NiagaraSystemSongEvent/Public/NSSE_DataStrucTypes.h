// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "NSSE_DataStrucTypes.generated.h"




///////////////////
//					GestorNiagaraParameters
//////////////////////////////////////

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
	EPC_MultipleParameters	UMETA(DisplayName = "Multiple Parameter")
};

UENUM(BlueprintType)
enum class ENSSE_InstanTransTiming : uint8
{
	EITT_AtStart	UMETA(DisplayName = "At Start"),
	ETII_Middle		UMETA(DisplayName = "Middle"),
	ETII_AtEnd		UMETA(DisplayName = "At End")
};

USTRUCT(BlueprintType)
struct FNSSE_InputParametersChangeData
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

};

USTRUCT(BlueprintType)
struct FNSSE_ParametersChangeData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_ParameterType DataType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString NameParam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_InputParametersChangeData ParametroInicial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_InputParametersChangeData ParametroFinal;


};

USTRUCT(BlueprintType)
struct FNSSE_EventParameterChange
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TiempoTrans;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Instan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_InstanTransTiming InstanTiming;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FNSSE_ParametersChangeData> ListParamChange;

};

///////////////////
//					NiagaraGestorCompo
//////////////////////////////////////

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
struct FNSSE_EventData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UNiagaraSystem* NiagaraSystemRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_EventParameterChange EventParameters;
};

///////////////////
//					Action Gestor
//////////////////////////////////////

USTRUCT(BlueprintType)
struct FNSSE_ActionEventList : public FTableRowBase
{
	GENERATED_BODY()
	TArray<FNSSE_ActionEvent> ActionEvents;
};


USTRUCT(BlueprintType)
struct FNSSE_ActionEvent : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENSSE_NiagaraGestorActions ActionGestor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_EventData EventData;

};

///////////////////
//					EventManager
//////////////////////////////////////


USTRUCT(BlueprintType)
struct FNSSE_EventListData 
{

	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float EventTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString EventName;
};


USTRUCT(BlueprintType)
struct FNSSE_EventList 
{

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FNSSE_EventListData> EventsList;
};




/////////////////////////////////////////////////////////////////////////////////////////////////////////Class Empty
UCLASS()
class NIAGARASYSTEMSONGEVENT_API UNSSE_DataStrucTypes : public UObject
{
	GENERATED_BODY()
	
};
