// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_DataStrucTypes.h"
#include "Niagara/Public/NiagaraComponent.h"

template<typename T>
bool UNSSE_DataStrucTypes::GetOverrideParam(const class UNiagaraComponent* InNiagaraCompo, const FNSSE_NiagaraGestorData& InNiagaraGestorData, T& OutValue) 
{
	TArray<FNiagaraVariable> ArrayNiagaraVars;
	InNiagaraCompo->GetOverrideParameters().GetParameters(ArrayNiagaraVars);

	if (InNiagaraGestorData.SingleParametersList[0] == NULL) return false;

	for (const FNiagaraVariable& NiagVar: ArrayNiagaraVars)
	{
		if (NiagVar.GetName() == FName(*InNiagaraGestorData.SingleParametersList[0].NameParam))
		{
			OutValue = InNiagaraCompo->GetOverrideParameters().GetParameterValue<T>(NiagVar);
			return true;
		}
	}
	return false;
}

template<typename T>
bool UNSSE_DataStrucTypes::GetOverrideParam(const class UNiagaraComponent* InNiagaraCompo, FString InNameParam, T& OutValue) 
{
	TArray<FNiagaraVariable> ArrayNiagaraVars;
	InNiagaraCompo->GetOverrideParameters().GetParameters(ArrayNiagaraVars);

	for (const FNiagaraVariable& NiagVar : ArrayNiagaraVars)
	{
		if (NiagVar.GetName() == FName(*InNameParam))
		{
			OutValue = InNiagaraCompo->GetOverrideParameters().GetParameterValue<T>(NiagVar);
			return true;
		}
	}
	return false;
}
