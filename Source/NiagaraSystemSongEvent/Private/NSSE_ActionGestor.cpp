// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_ActionGestor.h"
#include "NSSE_Manager.h"
#include "EngineUtils.h"
#include "Engine/DataTable.h"
#include "NSSE_NiagGestorCompo.h"
#include "Engine/Engine.h"


UNSSE_ActionGestor::UNSSE_ActionGestor(const FObjectInitializer& OI)
	:Super(OI)
{
	PrimaryComponentTick.bCanEverTick = false;

	//#TOFUTURE :: Inicializar un componente de NSSE_NiagaraGestorCompo por default y registarlo dentro del Blueprint..
	/*
		Añadir aqui
	*/

	
}

void UNSSE_ActionGestor::BeginPlay()
{
	Super::BeginPlay();
	
	//Get Names from Datatable--------------
	if (ActionEventList)
	{
		EventRowNames = ActionEventList->GetRowNames();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NSSE_ActionGestor::GetRowNames DataTable No Asigned"));
	}

	//Looking NSSE_Manager------------------
	EventManager = GetManagerWithGroup(GetWorld(), GroupName);

	if (EventManager)
	{
		//#DebugText
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, TEXT("Manager Encontrado"));
		EventManagerBind();

	}
	else
	{
		//#DebugText
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, TEXT("Manager Not Found"));
	}
}

void UNSSE_ActionGestor::Activate(bool bReset)
{
	
}

void UNSSE_ActionGestor::OnRegister()
{
	UE_LOG(LogTemp, Warning, TEXT("ActionGestor::OnRegister OwnerName --> %s"), *GetOwner()->GetName());
	GetAllNiagaraGestors();
	Super::OnRegister();
	
}

void UNSSE_ActionGestor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{

	Super::PostEditChangeProperty(PropertyChangedEvent);

	//GetAllNiagaraGestors();
}

void UNSSE_ActionGestor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

TArray<FString> UNSSE_ActionGestor::GetRegisterNiagaraGestorNames()
{
	TArray<FString> Names;

	for (UNSSE_NiagGestorCompo* Compo : OwnNiagaraGestorArray)
	{
		Names.Add(Compo->GetName());
	}

	return Names;
}

//////////////
//Custon Methos

void UNSSE_ActionGestor::EventNiagaraCalled(FString NameEvent)
{
	//Called Event
	//#DebugText
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Mensaje: %s en %s"), *NameEvent, *GetOwner()->GetName()));
	
	FName NEvent = FName(*NameEvent);

	if (CheckEventName(NEvent))
	{
		FString Context = "Action Event";
		FNSSE_DataTableActionGestor* DataTableActionEvent = ActionEventList->FindRow<FNSSE_DataTableActionGestor>(NEvent,*Context,true);

		
  		if (OwnNiagaraGestorArray.Num()>=1)
		{
			for (UNSSE_NiagGestorCompo* Gestor : OwnNiagaraGestorArray)
			{
				Gestor->NSSE_DoNiagaraAction(DataTableActionEvent->ActionGestor, DataTableActionEvent->ParamActionData);
			}
		}
		else
		{
			//#DebugError 
			UE_LOG(LogTemp, Error, TEXT("ActionGestor::EventNiagaraCalledtoNiagaraGestorCompo NiagaraGestorCompo NO ASSIGNED"));
		}
	}
}

ANSSE_Manager* UNSSE_ActionGestor::GetManagerWithGroup(UWorld* Wold, FString NameGroup)
{
	ANSSE_Manager* FirstMatch = nullptr;

	for (TActorIterator<ANSSE_Manager> It(Wold); It; ++It)
	{
		ANSSE_Manager* ManagerFound = *It;

		if (ManagerFound->GroupManager == NameGroup)
		{
			return ManagerFound;
		}
		else if (FirstMatch == nullptr)
		{
			FirstMatch = ManagerFound;
		}
	}

	return FirstMatch;
}

void UNSSE_ActionGestor::EventManagerBind()
{
	EventManager->EventCast.AddDynamic(this, &UNSSE_ActionGestor::EventNiagaraCalled); //Bindeo de la funcion 
}

bool UNSSE_ActionGestor::CheckEventName(FName NameEvent)
{
	return EventRowNames[0]==NameEvent;
}

void UNSSE_ActionGestor::GetAllNiagaraGestors()
{
	AActor* Owner = this->GetOwner();
	TArray<USceneComponent*> ArrayComponents;

	if (!Owner) { //#DebugError
					UE_LOG(LogTemp, Error, TEXT("ActionGestor::GetAllNiagaraGestor  Owner NOT FOUND¡")); 
					return; }

	Owner->GetRootComponent()->GetChildrenComponents(true, ArrayComponents);

	//Clear previous array and ensure that is empty
	OwnNiagaraGestorArray.Empty();
	


	for (USceneComponent* Compo : ArrayComponents)
	{
		UNSSE_NiagGestorCompo* NigCompo = Cast<UNSSE_NiagGestorCompo>(Compo);
		if (NigCompo)
		{	
			//Add To array the component
			if (!OwnNiagaraGestorArray.Contains(NigCompo))
			{
				OwnNiagaraGestorArray.Add(NigCompo);
			}
			//#DebugText
			UE_LOG(LogTemp, Warning, TEXT("ActionGestor::GetAllNiagaragestors  Add component --> %s"), *Compo->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ActionGestor::GetAllNiagaragestors NO Added component --> %s"), *Compo->GetName());
		}
	}
}
