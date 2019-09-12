// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_NiagGestorCompo.generated.h"



UCLASS(ClassGroup=(NiagaraSystemSongEvent), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_NiagGestorCompo : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	/*Registro de NiagaraComponents que esten atachados a este componente*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "NSSE NiagaraComponent")
	TArray <class UNiagaraComponent*> NiagarasComponentsArray;

	UGestorNiagaraParameters* OwnGestorParameters;
	
	UNSSE_NiagGestorCompo();

protected:
	virtual void BeginPlay() override;
	virtual void OnRegister()override;
	

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "NSSE TEST")
	void NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions Action, const FNSSE_NiagaraGestorData& NiagaraGestorData);
	void GetNigarasComponentsAttached();
	bool IsRefNiagaraCompoEmpty() const;


	//////////////////////////
	//Actions Functions
	//////////////////////////
	void SpawnSlow();
	void SpanwInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void KillSlow();
	void KillInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void SwitchHardParticles(const FNSSE_NiagaraGestorData& NiagaraGestorData);


	void ModifierParamByTime(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void CreateNewNiagaraCompo(const FNSSE_NiagaraGestorData& NiagaraGestorData);
};
