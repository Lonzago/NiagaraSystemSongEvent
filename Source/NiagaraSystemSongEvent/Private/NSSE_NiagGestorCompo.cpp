// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_NiagGestorCompo.h"
#include "Niagara\Public\NiagaraComponent.h"
#include "GestorNiagaraParameters.h"
#include "NSSE_DataStrucTypes.h"
#include "Components\BillboardComponent.h"



UNSSE_NiagGestorCompo::UNSSE_NiagGestorCompo()
{
	PrimaryComponentTick.bCanEverTick = true;

	//UBillboardComponent* Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	//Billboard->SetupAttachment(this);

	/*NiagaraC_Main = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraMain"));
	NiagaraC_Main->SetupAttachment(this);
	NiagaraC_Main->RegisterComponent();*/

	OwnGestorParameters = CreateDefaultSubobject<UGestorNiagaraParameters>(TEXT("GestorParameters"));
	OwnGestorParameters->SetupAttachment(this);
}


void UNSSE_NiagGestorCompo::BeginPlay()
{
	Super::BeginPlay();

	GetNigarasComponentsAttached();

}

void UNSSE_NiagGestorCompo::OnRegister()
{
	GetNigarasComponentsAttached();
	Super::OnRegister();
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
		KillSlow(OwnNiagarasComponentsArray[0], NiagaraGestorData);
		break;
	case ENSSE_NiagaraGestorActions::NGA_KillInstan:
		//
		KillInstan(NiagaraGestorData);
		break;
	case ENSSE_NiagaraGestorActions::NGA_SpawmSlow:
		//
		SpawnSlow(NiagaraGestorData);
		break;
	case ENSSE_NiagaraGestorActions::NGA_SpawnInstan:
		//
		SpanwInstan(NiagaraGestorData);
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
	OwnNiagarasComponentsArray.Empty();

	if (ActachCompos.Num() >= 1)
	{
		for (USceneComponent* Compo : ActachCompos)
		{
			//Check if is a UNiagaraComponent
			UNiagaraComponent* Niag = Cast<UNiagaraComponent>(Compo);
			if (Niag)
			{
				OwnNiagarasComponentsArray.Add(Niag);
				//#DebugText Añadido componente
				UE_LOG(LogNSSE, Display, TEXT("NiagaraGestor::GetNiagarasComponents AddedCompo--> %s"), *Niag->GetName());
			}
		}
	}
	else
	{
		//#DebugText No NiagaraComponents Child Assigned
		UE_LOG(LogNSSE, Display, TEXT("NiagaraGestor::GetNiagarasComponents  No NiagaraComponent Child assigned."));
	}

}

bool UNSSE_NiagGestorCompo::IsRefNiagaraCompoEmpty() const
{
	return OwnNiagarasComponentsArray.Num() == 0;
}

////////////////////////////
//	Actions Functions
////////////////////////////

void UNSSE_NiagGestorCompo::SpawnSlow(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (!IsRefNiagaraCompoEmpty())
	{
		//Llamamos a la funcion de spawnslow de la strutra que lo que hace es sobreescribir el valor inicial a 0
		ModifierParamByTime(FNSSE_NiagaraGestorData::SpawnSlow(NiagaraGestorData));
	}
	else
	{
		CreateNewNiagaraCompo(NiagaraGestorData);
		ModifierParamByTime(FNSSE_NiagaraGestorData::SpawnSlow(NiagaraGestorData));
	}
}

void UNSSE_NiagGestorCompo::SpanwInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	//Si ya tiene referencias las cambia 
	if (!IsRefNiagaraCompoEmpty())
	{
		SwitchHardParticles(NiagaraGestorData);
	}
	else
	{
		//Tiene que tener una particula asignada
		CreateNewNiagaraCompo(NiagaraGestorData);
	}

}

void UNSSE_NiagGestorCompo::KillSlow(const UNiagaraComponent* NiagaraCompoRef, const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (NiagaraCompoRef==nullptr)
	{
		//#DebugText 
		UE_LOG(LogNSSE, Warning, TEXT("NiagGestorCompo::KillSlow--> No NiagaraComponent Found Can't KillSlow"));
		return;
	}

	float CurrentValue;
	UNSSE_DataStrucTypes::GetOverrideParam<float>(NiagaraCompoRef, TEXT("User.SpawnRate"), CurrentValue);

	ModifierParamByTime(FNSSE_NiagaraGestorData::KillSlow(CurrentValue, NiagaraGestorData));

}

void UNSSE_NiagGestorCompo::KillInstan(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (IsRefNiagaraCompoEmpty())
	{
		//#DebugText NiagaraComponentArry Empty
		UE_LOG(LogNSSE, Warning, TEXT("NiagaraGestor::KillInstan  NiagaraComponentArray is Empty. Nothing to remove."));
		return;
	}

	for (UNiagaraComponent* Compo : OwnNiagarasComponentsArray)
	{
		Compo->SetAsset(nullptr);
		//#DebugText 
		//UE_LOG(LogNSSE, Warning, TEXT("NiagGestorCompo::KillInstan Null Asset in --> %s  At compo %s"), *GetOwner()->GetName(), *Compo->GetName());
	}
}

void UNSSE_NiagGestorCompo::SwitchHardParticles(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (!IsRefNiagaraCompoEmpty() && NiagaraGestorData.NiagaraSystemRef)
	{
		for (int32 i = 0; i < OwnNiagarasComponentsArray.Num(); i++)
		{
			OwnNiagarasComponentsArray[i]->SetAsset(NiagaraGestorData.NiagaraSystemRef);
			OwnNiagarasComponentsArray[i]->ResetSystem();
		}
	}
}

void UNSSE_NiagGestorCompo::ModifierParamByTime(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (IsRefNiagaraCompoEmpty())
	{
		CreateNewNiagaraCompo(NiagaraGestorData);
	}
	OwnGestorParameters->SetUpGestorParticleEvent(OwnNiagarasComponentsArray, NiagaraGestorData);
}

void UNSSE_NiagGestorCompo::CreateNewNiagaraCompo(const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	if (NiagaraGestorData.NiagaraSystemRef)
	{
		//#DebugText Creacion de componentes
		UE_LOG(LogNSSE, Warning, TEXT("Creado NiagaraComponente"));
		UNiagaraComponent* NewNiagaraCompo = NewObject<UNiagaraComponent>(this);
		NewNiagaraCompo->SetupAttachment(this);
		NewNiagaraCompo->RegisterComponentWithWorld(GetWorld());
		NewNiagaraCompo->SetAsset(NiagaraGestorData.NiagaraSystemRef);
		NewNiagaraCompo->ResetSystem();
		OwnNiagarasComponentsArray.Add(NewNiagaraCompo);
	}
	else
	{
		//#DebugError No referencias de NiagaraSystem
		UE_LOG(LogNSSE, Error, TEXT("NiagaraGestorCompo::CreateNewNiagaraComponent   No NiagaraSystem asiganado. Componente no creado"));
	}
}