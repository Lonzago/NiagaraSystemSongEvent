// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_ActionGestor.h"
#include "NSSE_Manager.h"
#include "EngineUtils.h"
#include "Engine/DataTable.h"
#include "Engine\Engine.h"


// Sets default values for this component's properties
UNSSE_ActionGestor::UNSSE_ActionGestor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


void UNSSE_ActionGestor::BeginPlay()
{
	Super::BeginPlay();
	
	if (ActionEventList)
	{
		EventRowNames = ActionEventList->GetRowNames();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NSSE_ActionGestor::GetRowNames DataTable No Asigned"));
	}

	//Looking NSSE_Manager
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

void UNSSE_ActionGestor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

//////////////
//Custon Methos

void UNSSE_ActionGestor::EventNiagaraCalled(FString NameEvent)
{
	//Called Event
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("Mensaje: %s en %s"), *NameEvent, *GetOwner()->GetName()));

	if (CheckEventName(NameEvent))
	{
		FNSSE_ActionEvent ActionEventData = ActionEventList->FindRow<FNSSE_ActionEvent>(NameEvent);
		
		//#TODO Hacer la llamada al NSSE_NiagaraGestorComponent
		
		/*Aqui*/
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

bool UNSSE_ActionGestor::CheckEventName(FString NameEvent)
{
	return EventRowNames[0]==NameEvent;
}
