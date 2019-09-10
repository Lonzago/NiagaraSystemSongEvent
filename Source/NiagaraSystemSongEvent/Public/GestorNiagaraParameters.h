// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "GestorNiagaraParameters.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UGestorNiagaraParameters : public USceneComponent
{
	GENERATED_BODY()

public:	

	UGestorNiagaraParameters();
	
protected:

	
	TArray<UNiagaraComponent*> OwnTargetsNiagCompoArray;
	ENSSE_NumberParameterChange NumParamChange;
	FNSSE_NiagaraGestorData OwnNiagGestorData;

	bool bDoStart;
	float StartTime;
	float CurrentTime;
	float TotalTimeTrasition;
	bool bForceInstanTrans;

	
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ExecuteChangeSingleParamByEnum(int32 IndexNiagCompoRef);

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
	void SetUpGestorParticleEvent(const TArray<UNiagaraComponent*>& NiagaraCompoTargert,const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void StartParameterChanges();

	void ChangeSingleParameter(UNiagaraComponent* NiagCompoRef, int32 IndexParam, const FNSSE_NiagaraGestorData& GestorData);

	void InstanNiagaraChanges(UNiagaraComponent* NiagCompoRef, ENSSE_InstanTransTiming InstaTiming, FString ParameterName, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
	void LerpNiagaraChanges(UNiagaraComponent* NiagCompoRef, FString ParameterName, const FNSSE_UnitParameterType& InputInicial ,const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
};
