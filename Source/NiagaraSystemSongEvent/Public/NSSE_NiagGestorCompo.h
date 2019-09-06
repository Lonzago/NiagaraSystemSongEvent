// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_NiagGestorCompo.generated.h"

//class UNiagaraSystem;
//class UNiagaraComponent;
//class UGestorNiagaraParameters;





UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_NiagGestorCompo : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	class UNiagaraComponent* NiagaraC_Main;
	class UNiagaraComponent* NiagaraC_Second;


	class UGestorNiagaraParameters* MyParameterGestor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE TEST")
	class UNiagaraSystem* NiagaraS_Default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE TEST")
	class UNiagaraSystem* NiagaraS_Swip;

	
	UNSSE_NiagGestorCompo();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "NSSE TEST")
	void NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions Action, const FNSSE_EventParameterChange& EventParameters);

	//////////////////////////
	//Actions Functions
	//////////////////////////
	void SpawnSlow();
	void SpanwInstan();

	void KillSlow();
	void KillInstan();

	void SwitchHardParticles();

	void ModifierParamByTime(const FNSSE_EventParameterChange& EventData);

	void CreateNewNiagaraCompo();
};
