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


template<typename T>
struct FNSSE_ParametersChangeData
{
	T ParametroInicial;
	T ParametroFinal;
	float TiempoTrans;
	bool Instan;

	FNSSE_ParametersChangeData(T ParamInit, T ParamEnd, float Time, bool ForceInstan = false)
	{
		ParametroInicial = ParamInit;
		ParametroFinal = ParamEnd;
		TiempoTrans = Time;
		Instan = ForceInstan
	}
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UGestorNiagaraParameters : public USceneComponent
{
	GENERATED_BODY()

public:	


	
	float TransicionTime;

	UGestorNiagaraParameters();

protected:

	UNiagaraComponent* NiagCompo;

	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	template<typename T>
	T TransitionParam(T ParamIn, T ParamOut);

	template<typename T>
	void ChangeSingleParameter(FString ParameterName,ENSSE_ParameterType ParamType, T Parameter);

	void StartParameterChanges(UNiagaraSystem* NiagaraSysRef, ENSSE_ParameterChange Change, ENSSE_ParameterType Type)

};
