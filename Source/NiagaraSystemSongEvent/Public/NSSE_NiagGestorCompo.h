// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NSSE_NiagGestorCompo.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UENUM(BlueprintType)
enum class ENiagaraGestorActions : uint8
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
		float TimeLife;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeFade;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Brush;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UNiagaraSystem* NiagaraSystemRef;
};


USTRUCT(BlueprintType)
struct FNSSE_NiagaraParamModifier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString NameParameter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float NewValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TimeTransition;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_NiagGestorCompo : public USceneComponent
{
	GENERATED_BODY()

public:	
	
	UNiagaraComponent* NiagaraC_Main;
	UNiagaraComponent* NiagaraC_Second;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE TEST")
		UNiagaraSystem* NiagaraS_Default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE TEST")
		UNiagaraSystem* NiagaraS_Swip;

	
	UNSSE_NiagGestorCompo();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "NSSE TEST")
		void NSSE_DoNiagaraAction(ENiagaraGestorActions Action);

	//////////////////////////
	//Actions Functions
	//////////////////////////
	void SpawnSlow();
	void SpanwInstan();
	void KillSlow();
	void KillInstan();

	void SwitchHardParticles();

};
