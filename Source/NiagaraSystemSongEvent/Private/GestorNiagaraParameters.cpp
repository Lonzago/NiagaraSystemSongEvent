// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorNiagaraParameters.h"
#include "GameFramework\Actor.h"
#include "Engine\Engine.h"
#include "Niagara\Public\NiagaraComponent.h"


UGestorNiagaraParameters::UGestorNiagaraParameters()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UGestorNiagaraParameters::BeginPlay()
{
	Super::BeginPlay();

	
}


void UGestorNiagaraParameters::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bDoStart)
	{
		ChangeSingleParameter(FString("Nada"), ENSSE_ParameterType::EPT_Float);
	}

}




////////////////////
//				CUSTOM METHODS
////////////////////


template<typename T>
T UGestorNiagaraParameters::TransitionParam(T ParamIn, T ParamOut)
{
	return FMath::InterpEaseIn<T>(ParamIn, ParamOut, TransicionTime, 3);
}

//Variables Dynamicas
template<typename T>
T DataIni ;
template<typename T>
T DataFinal ;



void UGestorNiagaraParameters::ChangeSingleParameter(FString ParameterName, ENSSE_ParameterType ParamType)
{

	FNSSE_InputParametersChangeData InputIni;
	FNSSE_InputParametersChangeData InputFinal;

	switch (ParamType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		break;
	case ENSSE_ParameterType::EPT_Bool:
		break;
	case ENSSE_ParameterType::EPT_Float:
		
		TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, TransitionParam<float>(InputIni.PFloat, InputFinal.PFloat));

		break;
	case ENSSE_ParameterType::EPT_Int32:

		TargetNiagCompo->SetNiagaraVariableInt(ParameterName, TransitionParam<int32>(InputIni.PInt, InputFinal.PInt));

		break;
	case ENSSE_ParameterType::EPT_LinearColor:

		TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, TransitionParam<FLinearColor>(InputIni.PLinearColor, InputFinal.PLinearColor));

		break;
	case ENSSE_ParameterType::EPT_Quaternion:
		break;
	case ENSSE_ParameterType::EPT_Vector2:
		break;
	case ENSSE_ParameterType::EPT_Vector3:

		TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, TransitionParam<FVector>(InputIni.PVec, InputFinal.PVec));

		break;
	case ENSSE_ParameterType::EPT_Vector4:
		break;
	default:
		break;
	}

}


void UGestorNiagaraParameters::InicializerTimer()
{
	UWorld* world = GetWorld();
	if (world)
	{
		world->GetTimerManager().SetTimer(TimerHandler, this, &UGestorNiagaraParameters::EndTimer, TransicionTime, false);
	}
	
}

float UGestorNiagaraParameters::GetRemainTime(float & Porcentage)
{
	float Current = TransicionTime - GetCurrentTime();
	Porcentage = Current * 100 / TransicionTime;
	return  Current;
}

float UGestorNiagaraParameters::GetCurrentTime()
{
	return StartTime - GetWorld()->GetTimeSeconds();
}

void UGestorNiagaraParameters::StartParameterChanges(UNiagaraComponent* NiagaraCompoRef, const FNSSE_ParametersChangeData& DataRef)
{
	TargetNiagCompo = NiagaraCompoRef;
	StartTime = GetWorld()->GetTimeSeconds();
		
	bDoStart = true;
}