// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorNiagaraParameters.h"
#include "GameFramework\Actor.h"
#include "Engine\Engine.h"
#include "TimerManager.h"
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

	bool IsUnderPorcentage = GetPercentage() <= 100;
	
	if (bDoStart&& IsUnderPorcentage)
	{	
		//#DebugText
		if (GEngine)
		{
			FNumberFormattingOptions NumberFormat;					//Text.h
			NumberFormat.MinimumIntegralDigits = 1;
			NumberFormat.MinimumFractionalDigits = 2;
			NumberFormat.MaximumFractionalDigits = 2;

			FString TimeCurrent = FText::AsNumber(GetCurrentTime(),&NumberFormat).ToString();
			FString PercentageTime = FText::AsNumber(GetAlphaTime(),&NumberFormat).ToString();
			FString RemainTime = FText::AsNumber(GetRemainTime(), &NumberFormat).ToString();
			GEngine->AddOnScreenDebugMessage(-1, 0.001, FColor::Emerald, FString::Printf(TEXT("ParameterName: %s TotalTime: %f TimeCurrent: %s  Percentage: %s  Remain: %s"),*ParameterData.NameParam,TotalTimeTrasition, *TimeCurrent,*PercentageTime,*RemainTime),true, FVector2D(1.5, 1.5));
			ChangeSingleParameter(ParameterData.NameParam, ENSSE_ParameterType::EPT_Float);
		}

		

	}

	else if (bDoStart)
	{
		StopCountTime();
	}

}

////////////////////
//				CUSTOM METHODS
////////////////////

void UGestorNiagaraParameters::StopCountTime()
{
	bDoStart = false;
	UE_LOG(LogTemp, Warning, TEXT("Timer:: Timer Is Stoped"));
}

float UGestorNiagaraParameters::GetCurrentTime()
{
	return GetWorld()->GetTimeSeconds() - StartTime;
}

float UGestorNiagaraParameters::GetPercentage()
{
	return GetCurrentTime() * 100 / TotalTimeTrasition;
}

float UGestorNiagaraParameters::GetRemainTime()
{
	return TotalTimeTrasition - GetCurrentTime();
}

float UGestorNiagaraParameters::GetAlphaTime()
{
	FVector2D InputClamp = FVector2D(0, 100);
	FVector2D OutClamp = FVector2D(0, 1.0f);
	return FMath::GetMappedRangeValueClamped(InputClamp, OutClamp, GetPercentage());
}

//#NOTWORK Al pasar los parametros a Niagara los lee como 0 hay que debugearlo
void UGestorNiagaraParameters::ChangeSingleParameter(FString ParameterName, ENSSE_ParameterType ParamType)
{

	FNSSE_InputParametersChangeData InputIni;
	FNSSE_InputParametersChangeData InputFinal;

	float alphaTime = GetAlphaTime();

	//#DebugText
	GEngine->AddOnScreenDebugMessage(-1, 0.001, FColor::Purple, FString::Printf(TEXT("Alphatime: %s"), *FString::SanitizeFloat(alphaTime,2)), true, FVector2D(1.5, 1.5));

	switch (ParamType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		break;
	case ENSSE_ParameterType::EPT_Bool:
		break;
	case ENSSE_ParameterType::EPT_Float:

		TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, FMath::LerpStable(InputIni.PFloat, InputFinal.PFloat, alphaTime));
	
		break;
	case ENSSE_ParameterType::EPT_Int32:

		TargetNiagCompo->SetNiagaraVariableInt(ParameterName, FMath::Lerp(InputIni.PInt,InputFinal.PInt, alphaTime));

		break;
	case ENSSE_ParameterType::EPT_LinearColor:

		TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, FMath::Lerp(InputIni.PLinearColor,InputFinal.PLinearColor, alphaTime));

		break;
	case ENSSE_ParameterType::EPT_Quaternion:
		break;
	case ENSSE_ParameterType::EPT_Vector2:
		break;
	case ENSSE_ParameterType::EPT_Vector3:

		TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, FMath::Lerp(InputIni.PVec,InputFinal.PVec, alphaTime));

		break;
	case ENSSE_ParameterType::EPT_Vector4:
		break;
	default:
		break;
	}

}

void UGestorNiagaraParameters::StartParameterChanges(UNiagaraComponent* NiagaraCompoRef, const FNSSE_ParametersChangeData& DataRef)
{
	ParameterData = DataRef;
	TotalTimeTrasition = DataRef.TiempoTrans;
	TargetNiagCompo = NiagaraCompoRef;
	StartTime = GetWorld()->GetTimeSeconds();
	bDoStart = true;
}


