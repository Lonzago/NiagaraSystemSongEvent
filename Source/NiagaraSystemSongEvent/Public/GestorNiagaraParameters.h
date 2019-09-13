// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Niagara/Public/NiagaraComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "GestorNiagaraParameters.generated.h"

//class UNiagaraSystem;
//class UNiagaraComponent;


UCLASS( ClassGroup=(NiagaraSystemSongEvent), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UGestorNiagaraParameters : public USceneComponent
{
	GENERATED_BODY()

public:	

	UGestorNiagaraParameters();
	
protected:

	
	TArray<UNiagaraComponent*> OwnTargetsNiagCompoArray;
	ENSSE_NumberParameterChange MultiParameterType;
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
	float GetRemainTime()const;
	float GetGestorTime()const;
	float GetPercentage()const;
	float GetAlphaTime()const;


	bool IsRuningEvent()const;
	////////////////////
	//				CUSTOM METHODS
	////////////////////

	UFUNCTION(BlueprintCallable, Category = "Gestor Params Niagara")
	void SetUpGestorParticleEvent(const TArray<UNiagaraComponent*>& NiagaraCompoTargert,const FNSSE_NiagaraGestorData& NiagaraGestorData);

	ENSSE_NumberParameterChange GetMultiParameter(const FNSSE_NiagaraGestorData& NiagaraGestorData)const;

	void StartParameterChanges();
	
	void ChangeSingleParameter(UNiagaraComponent* NiagCompoRef, int32 IndexParam, const FNSSE_NiagaraGestorData& GestorData);

	void InstanNiagaraChanges(UNiagaraComponent* NiagCompoRef, ENSSE_InstanTransTiming InstaTiming, FString ParameterName, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
	void LerpNiagaraChanges(UNiagaraComponent* NiagCompoRef, FString ParameterName, const FNSSE_UnitParameterType& InputInicial ,const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime);
};
