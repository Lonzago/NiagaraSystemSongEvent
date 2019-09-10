// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "GestorNiagaraParameters.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class FTimerManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UGestorNiagaraParameters : public USceneComponent
{
	GENERATED_BODY()

public:	

	UGestorNiagaraParameters();
	
protected:

	
	UNiagaraComponent* TargetNiagCompo;
	ENSSE_NumberParameterChange NumParamChange;
	FNSSE_ChangeParamsActionData EventData;

	bool bDoStart;
	float StartTime;
	float CurrentTime;
	float TotalTimeTrasition;
	bool bForceInstanTrans;

	
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	////		TimerControl		////
	void StopCountTime();
	float GetRemainTime();
	float GetCurrentTime();
	float GetPercentage();
	float GetAlphaTime();

	////////////////////
	//				CUSTOM METHODS
	////////////////////

	UFUNCTION(BlueprintCallable, Category = "Gestor Params Niagara")
	void SetUpGestorParticleEvent(UNiagaraComponent* NiagaraCompoTargert,const FNSSE_ChangeParamsActionData& DataParticleChange);

	void StartParameterChanges();

	void ChangeSingleParameter(int32 IndexParam, const FNSSE_ChangeParamsActionData& InputData);

	void InstanNiagaraChanges(ENSSE_InstanTransTiming InstaTiming, FString ParameterName, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
	void LerpNiagaraChanges(FString ParameterName, const FNSSE_UnitParameterType& InputInicial ,const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
};
