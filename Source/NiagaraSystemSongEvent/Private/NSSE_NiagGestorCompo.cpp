// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_NiagGestorCompo.h"
#include "Niagara\Public\NiagaraComponent.h"
#include "GestorNiagaraParameters.h"
#include "Components\BillboardComponent.h"



UNSSE_NiagGestorCompo::UNSSE_NiagGestorCompo()
{
	PrimaryComponentTick.bCanEverTick = true;

	//UBillboardComponent* Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	//Billboard->SetupAttachment(this);

	/*NiagaraC_Main = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraMain"));
	NiagaraC_Main->SetupAttachment(this);
	NiagaraC_Main->RegisterComponent();*/

	MyParameterGestor = CreateDefaultSubobject<UGestorNiagaraParameters>(TEXT("GestorParameters"));
	MyParameterGestor->SetupAttachment(this);
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

void UNSSE_NiagGestorCompo::NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions Action, const FNSSE_EventParameterChange& EventParameters)
{
	switch (Action)
	{
	case ENSSE_NiagaraGestorActions::NGA_KillSlow:
		//
		KillSlow();
		break;
	case ENSSE_NiagaraGestorActions::NGA_KillInstan:
		//
		KillInstan();
		break;
	case ENSSE_NiagaraGestorActions::NGA_SpawmSlow:
		//
		SpawnSlow();
		break;
	case ENSSE_NiagaraGestorActions::NGA_SpawnInstan:
		//
		SpanwInstan();
		break;
	case ENSSE_NiagaraGestorActions::NGA_FadeParticles:
		break;
	case ENSSE_NiagaraGestorActions::NGA_SwitchParticles:
		break;
	case ENSSE_NiagaraGestorActions::NGA_SwitchHardParticles:

		break;
	case ENSSE_NiagaraGestorActions::NGA_ModifierParamInstan:
		break;
	case ENSSE_NiagaraGestorActions::NGA_ModifierParamByTime:
		//
		ModifierParamByTime(EventParameters);
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
	CreateNewNiagaraCompo();

	
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

void UNSSE_NiagGestorCompo::ModifierParamByTime(const FNSSE_EventParameterChange& EventData)
{
	if (!NiagaraC_Main)
	{
		CreateNewNiagaraCompo();
	}
	MyParameterGestor->SetUpGestorParticleEvent(NiagaraC_Main, EventData);
	
	
}

void UNSSE_NiagGestorCompo::CreateNewNiagaraCompo()
{
	if (NiagaraS_Default)
	{
		UE_LOG(LogTemp, Warning, TEXT("Creando Componente"));
		NiagaraC_Main = NewObject<UNiagaraComponent>(this);
		NiagaraC_Main->SetupAttachment(this);
		NiagaraC_Main->RegisterComponentWithWorld(GetWorld());
		NiagaraC_Main->SetAsset(NiagaraS_Default);
		NiagaraC_Main->ResetSystem();
	}
	else
	{	
		//Error si no hay una referencia de NiagaraSystem
		UE_LOG(LogTemp, Error, TEXT("NiagaraGestorCompo::CreateNewNiagaraComponent   No NiagaraSystem asiganado. Componente no creado"));
	}
}