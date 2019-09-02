// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GestorNiagaraParameters.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

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
enum class ENSSE_ParameterChange : uint8
{
	EPC_SinglerParameter	UMETA(DisplayName= "Singler Parameter"),
	EPC_MultipleParameters	UMETA(DisplayName = "Multiple Parameter")
};


USTRUCT(BlueprintType)
struct FNSSE_InputParametersChangeData
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ENSSE_ParameterType PType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor*			PActor;
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

private:

	bool bIsSetParameter;

public:

	//Retorna un valor segun el tipo
	template <typename T>
	T GetInputData()const
	{
		switch (PType)
		{
		case ENSSE_ParameterType::EPT_Actor:
			return PActor;
			break;
		case ENSSE_ParameterType::EPT_Bool:
			return PBool;
			break;
		case ENSSE_ParameterType::EPT_Float:
			return PFloat;
			break;
		case ENSSE_ParameterType::EPT_Int32:
			return PInt;
			break;
		case ENSSE_ParameterType::EPT_LinearColor:
			return PLinearColor;
			break;
		case ENSSE_ParameterType::EPT_Quaternion:
			return PQuat;
			break;
		case ENSSE_ParameterType::EPT_Vector2:
			return PVec2D;
			break;
		case ENSSE_ParameterType::EPT_Vector3:
			return PVec;
			break;
		case ENSSE_ParameterType::EPT_Vector4:
			return PVec4;
			break;
		default:
			break;
		}
	}

	bool IsSet()const{ return bIsSetParameter;}

};


//template<typename T>
//struct FNSSE_ParametersChangeData
//{
//	T ParametroInicial;
//	T ParametroFinal;
//	float TiempoTrans;
//	bool Instan;
//
//	FNSSE_ParametersChangeData(T ParamInit, T ParamEnd, float Time, bool ForceInstan = false)
//	{
//		ParametroInicial = ParamInit;
//		ParametroFinal = ParamEnd;
//		TiempoTrans = Time;
//		Instan = ForceInstan
//	}
//};
USTRUCT(BlueprintType)
struct FNSSE_ParametersChangeData
{

	GENERATED_BODY()

	
	ENSSE_ParameterType DataType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NameParam;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNSSE_InputParametersChangeData ParametroInicial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FNSSE_InputParametersChangeData ParametroFinal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiempoTrans;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Instan;

	ENSSE_ParameterType GetDataType()
	{
		if (ParametroInicial.IsSet() && ParametroFinal.IsSet())
		{
			DataType = ParametroInicial.PType;
		}
	}

	template<typename R>
	void GetInputsParameters(R& ParamIni, R& ParamFinal)
	{
		ParamIni = ParametroInicial.GetInputData<R>();
		ParamFinal = ParametroFinal.GetInputData<R>();
	}
	
};




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UGestorNiagaraParameters : public USceneComponent
{
	GENERATED_BODY()

public:	

	UGestorNiagaraParameters();

protected:

	bool bDoStart;
	float StartTime;
	float CurrentTime;


	UNiagaraComponent* TargetNiagCompo;
	float TransicionTime;
	bool ForceInstanTrans;

	FTimerHandle TimerHandler;
	FNSSE_ParametersChangeData* Data;

	
	
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void InicializerTimer();
	void EndTimer();

	float GetRemainTime(float&Porcentage);
	float GetCurrentTime();



	////////////////////
	//				CUSTOM METHODS
	////////////////////


	template<typename T>
	T TransitionParam(T ParamIn, T ParamOut);



	
	void ChangeSingleParameter(FString ParameterName,ENSSE_ParameterType ParamType);

	UFUNCTION(BlueprintCallable, Category= "Gestor Params Niagara")
	void StartParameterChanges(UNiagaraComponent* NiagaraCompoRef,const FNSSE_ParametersChangeData& DataRef);

};
