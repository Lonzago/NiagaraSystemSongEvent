// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_DataStrucTypes.h"
#include "Niagara/Public/NiagaraComponent.h"

template<typename T>
bool UNSSE_DataStrucTypes::GetOverrideParam(const  UNiagaraComponent* InNiagaraCompo, const FNSSE_NiagaraGestorData& InNiagaraGestorData, T& OutValue) 
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
bool UNSSE_DataStrucTypes::GetOverrideParam(const  UNiagaraComponent* InNiagaraCompo, FString InNameParam, T& OutValue) 
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

TArray<FString> UNSSE_DataStrucTypes::GetSystemOverrideParams(const UNiagaraSystem* NiagaraSystem)
{
	TArray<FString> OutDataName;

	if (NiagaraSystem == nullptr) return OutDataName;

	TArray<FNiagaraVariable> ParamsUser;
	
	NiagaraSystem->GetExposedParameters().GetUserParameters(ParamsUser);

	for (const FNiagaraVariable& Var : ParamsUser)
	{
		OutDataName.Add(Var.GetName().ToString());
	}

	return OutDataName;
}

TArray<FString> UNSSE_DataStrucTypes::GetParametersType(const UNiagaraSystem* NiagaraSystem, TArray<FString>& OutNamesVar, TMap<FString, FString>& OutMap)
{
	TMap<FString, FString> Map;
	TArray<FString> TypeVar;
	TArray<FString> NamesVar;
	TArray<FNiagaraVariable> NiagVar;
	
	NiagaraSystem->GetExposedParameters().GetUserParameters(NiagVar);

	for (const FNiagaraVariable& Var : NiagVar)
	{
		Map.Add(Var.GetName().ToString(), Var.GetType().GetName());

		NamesVar.Add(Var.GetName().ToString());
		TypeVar.Add(Var.GetType().GetName());
	}

	OutMap = Map;
	OutNamesVar = NamesVar;
	return TypeVar;
}

FString UNSSE_DataStrucTypes::GetParameterTypeByName(const UNiagaraSystem* NigaraSystem, FString NameParam)
{
	TArray<FNiagaraVariable> NiagVars;
	NigaraSystem->GetExposedParameters().GetUserParameters(NiagVars);

	for (const FNiagaraVariable& Var : NiagVars)
	{
		if (Var.GetName().ToString() == NameParam)
		{
			return Var.GetType().GetName();
		}
	}
	return TEXT("NotFound");
}
