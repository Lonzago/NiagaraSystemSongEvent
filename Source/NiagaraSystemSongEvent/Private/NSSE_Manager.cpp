// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_Manager.h"
#include "Engine/Engine.h"
#include "Niagara/Public/NiagaraComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NiagaraTypes.h"
#include "NiagaraSystemSongEvent.h"
#include "Engine/DataTable.h"

// Sets default values for this component's properties
ANSSE_Manager::ANSSE_Manager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryActorTick.bCanEverTick = true;
	GetEventsListData();
	// ...
}

// Called when the game starts
void ANSSE_Manager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void ANSSE_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bIsRecording)
	{
		DisplayTimeCount();
		if (CheckEventTrigger(IndexCheck, ToleranceRange) && (IndexCheck <= EventsListData.EventsList.Num()-1))
		{
			if (EventCast.IsBound())//Forma segura de llamar al Delegate
			{
				EventCast.Broadcast(EventsListData.EventsList[IndexCheck].EventName);

				//#DebugText
				GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Send Event with Index %d Event : %s"), IndexCheck, *EventsListData.EventsList[IndexCheck].EventName));
				IndexCheck++;
				if (IndexCheck >= EventsListData.EventsList.Num()-1) {
					StopManager();
				}
			}
		}
	}
}



//--------------Custom Functions
void ANSSE_Manager::StartManager()
{
	if (EventsListData.EventsList.Num() == 0)
	{
		UE_LOG(LogNSSE, Error, TEXT("NSSE_Manager::StartManager --> No EventListTableˇˇ Set a corret DataTable and Check it's not Empty"));
		return;
	}

	StartTime = GetWorld()->TimeSeconds;
	IndexCheck = 0;
	bIsRecording = true;
}

void ANSSE_Manager::StopManager()
{
	bIsRecording = false;
	//#DebugText
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, TEXT("StopedManger"));
}

TArray<FString> ANSSE_Manager::GetParametersOverrride(const class UNiagaraComponent* NiagCompoRef)
{
	TArray<FNiagaraVariable> NiagVarArray;
	NiagCompoRef->GetSystemInstance()->GetInstanceParameters().GetParameters(NiagVarArray);
		
	TArray<FString> NamesParams;

	for (const FNiagaraVariable& Var : NiagVarArray)
	{
		NamesParams.Add(Var.GetName().ToString());
	}
	return NamesParams;
}

bool ANSSE_Manager::GetNiagFloatParamByName(const class UNiagaraComponent* NiagCompoRef, FName ParamName, float& OutFloat)
{
	TArray<FNiagaraVariable> NiagVarArray;
	NiagCompoRef->GetSystemInstance()->GetInstanceParameters().GetParameters(NiagVarArray);

	for (const FNiagaraVariable& Var : NiagVarArray)
	{
		if (Var.GetName()==ParamName)
		{
			OutFloat = NiagCompoRef->GetOverrideParameters().GetParameterValue<float>(Var);
			return true;
		}
	}
	return false;
}

float ANSSE_Manager::GetTimeManager()
{
	float CurrenteTime = GetWorld()->TimeSeconds;
	return CurrenteTime - StartTime;
}

void ANSSE_Manager::GetEventsListData()
{
	if (EventListTable != nullptr)
	{
		FString Context = "Event List Table";
		FNSSE_ManagerEventList* NewList = EventListTable->FindRow<FNSSE_ManagerEventList>(FName(*GroupManager), Context, true);

		if (EventListTable->GetRowStructName().ToString() == "NSSE_ManagerEventList" && NewList != nullptr)
		{
			EventsListData = *NewList;
		}
		else
		{
			//#DebugText
			UE_LOG(LogNSSE, Display, TEXT("NSSE_Manager::GetEventsListData --> Not Corret DataTable"));
			EventsListData.ClearData();
		}
	}
}

bool ANSSE_Manager::CheckEventTrigger(int Index , float Tolerance)
{
	float CurrentTimeCheck = FloatPresition(GetTimeManager(),2);
	float ReferenceTimeCheck = FloatPresition(EventsListData.EventsList[Index].EventTime,2);

	return FMath::IsNearlyEqual(CurrentTimeCheck, ReferenceTimeCheck , Tolerance);
}

float ANSSE_Manager::FloatPresition(float NumberToPresition,float Presition)
{
	float PowPresition = 0.1f*FMath::Pow(0.1f, Presition-1);
	return ((int)(NumberToPresition/PowPresition)*PowPresition);
	
}


// ON PROPERTY CHANGE -----------------------------------------------------------
//-----------------------------------------------------------
void ANSSE_Manager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	GetEventsListData();
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
void ANSSE_Manager::PostInitProperties()
{
	GetEventsListData();
	Super::PostInitProperties();
}
//-----------------------------------------------------------
//-----------------------------------------------------------


//Display 
void ANSSE_Manager::DisplayTimeCount()
{
	float FrameTime = GetTimeManager();
	float ConvertedTime = FloatPresition(GetTimeManager(), PresitionValue);
	int32 Minuts = FrameTime / 60;
	int32 Seconds = FMath::TruncToInt(FrameTime) % 60;

	//#DebugText
	GEngine->AddOnScreenDebugMessage(-1, .01f, FColor::Red, FString::Printf(TEXT("CurrentTime: %d : %d   RawTime: %f"), Minuts, Seconds, ConvertedTime));
}
