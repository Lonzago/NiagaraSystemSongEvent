// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_NiagGestorCompo.generated.h"



UCLASS( ClassGroup=(NiagaraSystemSongEvent), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_NiagGestorCompo : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "NSSE NiagaraComponent")
	TArray <class UNiagaraComponent*> NiagarasComponentsArray;
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
	void NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions Action, const FNSSE_NiagaraGestorData& NiagaraGestorData);

	bool IsRefNiagaraCompoEmpty() const;

	//////////////////////////
	//Actions Functions
	//////////////////////////
	void SpawnSlow();
	void SpanwInstan();

	void KillSlow();
	void KillInstan();

	void SwitchHardParticles();


	void ModifierParamByTime(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void CreateNewNiagaraCompo();
};
