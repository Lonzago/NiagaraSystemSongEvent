// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_Manager.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
ANSSE_Manager::ANSSE_Manager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryActorTick.bCanEverTick = true;

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
		if (CheckEventTrigger(IndexCheck, ToleranceRange) && (IndexCheck <= EventTable.Num()-1))
		{
			if (EventCast.IsBound())//Forma segura de llamar al Delegate
			{
				EventCast.Broadcast(EventTable[IndexCheck].EventName);

				//#DebugText
				GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Send Event with Index %d Event : %s"), IndexCheck, *EventTable[IndexCheck].EventName));
				IndexCheck++;
				if (IndexCheck >= EventTable.Num()) {
					StopManager();
				}
			}
		}
	}
}



//--------------Custom Functions


void ANSSE_Manager::StartManager()
{
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



float ANSSE_Manager::GetTimeManager()
{
	float CurrenteTime = GetWorld()->TimeSeconds;
	return CurrenteTime - StartTime;
}

bool ANSSE_Manager::CheckEventTrigger(int Index , float Tolerance)
{
	float CurrentTimeCheck = FloatPresition(GetTimeManager(),2);
	float ReferenceTimeCheck = FloatPresition(EventTable[Index].EventTime,2);

	return FMath::IsNearlyEqual(CurrentTimeCheck, ReferenceTimeCheck , Tolerance);
}

float ANSSE_Manager::FloatPresition(float NumberToPresition,float Presition)
{
	float PowPresition = 0.1f*FMath::Pow(0.1f, Presition-1);
	return ((int)(NumberToPresition/PowPresition)*PowPresition);
	
}



//Display 
void ANSSE_Manager::DisplayTimeCount()
{
	float FrameTime = GetTimeManager();
	float ConvertedTime = FloatPresition(GetTimeManager(),PresitionValue);
	int32 Minuts = FrameTime / 60;
	int32 Seconds = FMath::TruncToInt(FrameTime) % 60;
	
	//#DebugText
	GEngine->AddOnScreenDebugMessage(-1, .01f, FColor::Red, FString::Printf(TEXT("CurrentTime: %d : %d   RawTime: %f"), Minuts, Seconds,ConvertedTime));
}

