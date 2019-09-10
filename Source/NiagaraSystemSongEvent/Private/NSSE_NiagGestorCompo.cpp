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

	GetNigarasComponentsAttached();
	
}


void UNSSE_NiagGestorCompo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


////////////////////////////
//					CUSTOM METHOS
////////////////////////////

void UNSSE_NiagGestorCompo::NSSE_DoNiagaraAction(ENSSE_NiagaraGestorActions Action, const FNSSE_NiagaraGestorData& NiagaraGestorData)
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
		ModifierParamByTime(NiagaraGestorData);
		break;
	default:
		break;
	}

}



void UNSSE_NiagGestorCompo::GetNigarasComponentsAttached()
{
	TArray<USceneComponent*> ActachCompos = this->GetAttachChildren();
	NiagarasComponentsArray.Empty();

	if (ActachCompos.Num() >= 1)
	{
		for (USceneComponent* Compo : ActachCompos)
		{
			NiagarasComponentsArray.Add(Cast<UNiagaraComponent>(Compo));
		}
	}
	else
	{
		//#DebugText
		UE_LOG(LogTemp, Warning, TEXT("NiagaraGestor::GetNiagarasComponents  No NiagaraComponent Child assigned."));
	}

}

bool UNSSE_NiagGestorCompo::IsRefNiagaraCompoEmpty() const
{
	return NiagarasComponentsArray.Num() >= 1;
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
	if (!IsRefNiagaraCompoEmpty())
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
	if (!IsRefNiagaraCompoEmpty())
	{
		for (UNiagaraComponent* Compo : NiagarasComponentsArray)
		{
			Compo->DestroyComponent();
		}
		NiagarasComponentsArray.Empty();
	}
	else
	{
		//#DebugText
		UE_LOG(LogTemp, Warning, TEXT("NiagaraGestor::KillInstan  NiagaraComponentArray is Empty. Nothing to remove."));
	}

}

void UNSSE_NiagGestorCompo::SwitchHardParticles()
{
	//#TODOTestSystem Cambiar las referencias para que no sean los sistemas de pruebas
	if (!IsRefNiagaraCompoEmpty() && NiagaraS_Default && NiagaraS_Swip)
	{
		for (int32 i = 0; i < NiagarasComponentsArray.Num(); i++)
		{
			NiagarasComponentsArray[i]->SetAsset(NiagaraS_Swip);
			NiagarasComponentsArray[i]->ResetSystem();
		}
	}
}

void UNSSE_NiagGestorCompo::ModifierParamByTime(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (IsRefNiagaraCompoEmpty())
	{
		CreateNewNiagaraCompo();
	}
	MyParameterGestor->SetUpGestorParticleEvent(NiagarasComponentsArray, NiagaraGestorData);	
}

void UNSSE_NiagGestorCompo::CreateNewNiagaraCompo()
{
	if (NiagaraS_Default)
	{
		UE_LOG(LogTemp, Warning, TEXT("Creando Componente"));
		UNiagaraComponent* NewNiagaraCompo = NewObject<UNiagaraComponent>(this);
		NewNiagaraCompo->SetupAttachment(this);
		NewNiagaraCompo->RegisterComponentWithWorld(GetWorld());
		
		//#TODO Ahora mismo esta puesto el Systema Test. Hay que cambiarlo a el sistema de referencia dentro de NiagaraGestorData
		NewNiagaraCompo->SetAsset(NiagaraS_Default);
		NewNiagaraCompo->ResetSystem();
		NiagarasComponentsArray.Add(NewNiagaraCompo);
	}
	else
	{	
		//#DebugError si no hay una referencia de NiagaraSystem
		UE_LOG(LogTemp, Error, TEXT("NiagaraGestorCompo::CreateNewNiagaraComponent   No NiagaraSystem asiganado. Componente no creado"));
	}
}