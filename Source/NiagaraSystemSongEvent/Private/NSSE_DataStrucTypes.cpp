// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_DataStrucTypes.h"
#include "Niagara/Public/NiagaraComponent.h"

bool UNSSE_DataStrucTypes::GetOverrideParam(const class UNiagaraComponent* InNiagaraCompo, const FNSSE_NiagaraGestorData& InNiagaraGestorData, T& OutFloat) const
{
	TArray<FNiagaraVariable> ArrayNiagaraVars;
	InNiagaraCompo->GetOverrideParameters()->GetParameters(ArrayNiagaraVars);

	if (InNiagaraGestorData.SingleParametersList[0] == NULL) return false;

	for (const FNiagaraVariable& NiagVar: ArrayNiagaraVars)
	{
		if (NiagVar.GetName() == FName(*InNiagaraGestorData.SingleParametersList[0].NameParam))
		{
			OutFloat = InNiagaraCompo->GetOverrideParameters()->GetParameterData<T>(NiagVar);
			return true;
		}
	}
	return false;
}

bool UNSSE_DataStrucTypes::GetOverrideParam(const class UNiagaraComponent* InNiagaraCompo, FString InNameParam, T& OutFloat) const
{
	TArray<FNiagaraVariable> ArrayNiagaraVars;
	InNiagaraCompo->GetOverrideParameters()->GetParameters(ArrayNiagaraVars);

	for (const FNiagaraVariable& NiagVar : ArrayNiagaraVars)
	{
		if (NiagVar.GetName() == FName(*InNameParam))
		{
			OutFloat = InNiagaraCompo->GetOverrideParameters()->GetParameterData<T>(NiagVar);
			return true;
		}
	}
	return false;
}
