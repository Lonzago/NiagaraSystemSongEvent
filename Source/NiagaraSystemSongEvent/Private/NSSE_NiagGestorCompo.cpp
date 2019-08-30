// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_NiagGestorCompo.h"
#include "Niagara\Public\NiagaraComponent.h"
#include "Components\BillboardComponent.h"


UNSSE_NiagGestorCompo::UNSSE_NiagGestorCompo()
{
	PrimaryComponentTick.bCanEverTick = true;

	//UBillboardComponent* Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	//Billboard->SetupAttachment(this);

	/*NiagaraC_Main = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraMain"));
	NiagaraC_Main->SetupAttachment(this);
	NiagaraC_Main->RegisterComponent();*/

}


void UNSSE_NiagGestorCompo::BeginPlay()
{
	Super::BeginPlay();

	
}


void UNSSE_NiagGestorCompo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


////////////////////////////
//					CUSTOM METHOS
////////////////////////////



void UNSSE_NiagGestorCompo::NSSE_DoNiagaraAction(ENiagaraGestorActions Action)
{
	switch (Action)
	{
	case ENiagaraGestorActions::NGA_KillSlow:
		//
		KillSlow();
		break;
	case ENiagaraGestorActions::NGA_KillInstan:
		//
		KillInstan();
		break;
	case ENiagaraGestorActions::NGA_SpawmSlow:
		//
		SpawnSlow();
		break;
	case ENiagaraGestorActions::NGA_SpawnInstan:
		//
		SpanwInstan();
		break;
	case ENiagaraGestorActions::NGA_FadeParticles:
		break;
	case ENiagaraGestorActions::NGA_SwitchParticles:
		break;
	case ENiagaraGestorActions::NGA_SwitchHardParticles:

		break;
	case ENiagaraGestorActions::NGA_ModifierParamInstan:
		break;
	case ENiagaraGestorActions::NGA_ModifierParamByTime:
		break;
	default:
		break;
	}

}



////////////////////////////
//	Actions Functions
////////////////////////////

void UNSSE_NiagGestorCompo::SpawnSlow()
{
}

void UNSSE_NiagGestorCompo::SpanwInstan()
{
	//Si ya tiene una referencia la destruye
	if (NiagaraC_Main)
	{
		KillInstan();
	}

	//Tiene que tener una particula asignada
	if (NiagaraS_Default)
	{
		UE_LOG(LogTemp, Warning, TEXT("Creando Componente"));
		NiagaraC_Main = NewObject<UNiagaraComponent>(this);
		NiagaraC_Main->SetupAttachment(this);
		NiagaraC_Main->RegisterComponentWithWorld(GetWorld());
		NiagaraC_Main->SetAsset(NiagaraS_Default);
		NiagaraC_Main->ResetSystem();
	}
}

void UNSSE_NiagGestorCompo::KillSlow()
{
}

void UNSSE_NiagGestorCompo::KillInstan()
{
	if (NiagaraC_Main)
	{
		NiagaraC_Main->DestroyComponent();
		NiagaraC_Main = nullptr;
	}

}

void UNSSE_NiagGestorCompo::SwitchHardParticles()
{
	if (NiagaraC_Main && NiagaraS_Default && NiagaraS_Swip)
	{
		NiagaraC_Main->SetAsset(NiagaraS_Swip);
		NiagaraC_Main->ResetSystem();
	}

}
