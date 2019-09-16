// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_NiagGestorCompo.generated.h"

class UNiagaraComponent;

UCLASS(ClassGroup=(NiagaraSystemSongEvent), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_NiagGestorCompo : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	/*Registro de NiagaraComponents que esten atachados a este componente*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "NSSE NiagaraComponent")
	TArray <UNiagaraComponent*> OwnNiagarasComponentsArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NSSE NiagaraComponent")
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
	bool IsArrayNiagCompoEmpty() const;


	//////////////////////////
	//Actions Functions
	//////////////////////////
	void SpawnSlow(const FNSSE_NiagaraGestorData& NiagaraGestorData);
	void SpanwInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void KillSlow(const FNSSE_NiagaraGestorData& NiagaraGestorData);
	void KillInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void SwitchHardParticles(const FNSSE_NiagaraGestorData& NiagaraGestorData);


	void ModifierParamByTime(const FNSSE_NiagaraGestorData& NiagaraGestorData);

	void CreateNewNiagaraCompo(const FNSSE_NiagaraGestorData& NiagaraGestorData);
private:
	void CheckNiagaraComponentSystem(const FNSSE_NiagaraGestorData& NiagaraGestorData);
};
