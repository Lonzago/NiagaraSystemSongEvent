// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorNiagaraParameters.h"
#include "Niagara\Public\NiagaraComponent.h"

// Sets default values for this component's properties
UGestorNiagaraParameters::UGestorNiagaraParameters()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGestorNiagaraParameters::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGestorNiagaraParameters::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

template<typename T>
T UGestorNiagaraParameters::TransitionParam(T ParamIn, T ParamOut)
{
	return FMath::InterpEaseIn<T>(ParamIn, ParamOut, TransicionTime, 3);
}

template<typename T>
void UGestorNiagaraParameters::ChangeSingleParameter(FString ParameterName, ENSSE_ParameterType ParamType, T Parameter)
{
	switch (ENSSE_ParameterType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		NiagCompo->SetNiagaraVariableActor(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Bool:
		NiagCompo->SetNiagaraVariableBool(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Float:
		NiagCompo->SetNiagaraVariableFloat(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Int32:
		NiagCompo->SetNiagaraVariableInt(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_LinearColor:
		NiagCompo->SetNiagaraVariableLinearColor(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Quaternion:
		NiagCompo->SetNiagaraVariableQuat(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Vector2:
		NiagCompo->SetNiagaraVariableVec2(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Vector3:
		NiagCompo->SetNiagaraVariableVec3(ParameterName, Parameter);
		break;
	case ENSSE_ParameterType::EPT_Vector4:
		NiagCompo->SetNiagaraVariableVec4(ParameterName, Parameter);
		break;
	default:
		break;
	}

}

