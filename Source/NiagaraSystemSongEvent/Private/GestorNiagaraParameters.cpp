// Fill out your copyright notice in the Description page of Project Settings.


#include "GestorNiagaraParameters.h"
#include "GameFramework\Actor.h"
#include "Engine\Engine.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

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


	if (bDoStart && IsUnderPorcentage)
	{
		//Hace el paso por multiples parametros o por uno solo.
		switch (NumParamChange)
		{
		case ENSSE_NumberParameterChange::EPC_SinglerParameter:

			ChangeSingleParameter(0, EventData);

			break;

		case ENSSE_NumberParameterChange::EPC_MultipleParameters:

			//Pasa por todos los parametros a cambiar
			for (int i = 0 ; i< EventData.SingleParametersList.Num()-1; i++)
			{
				ChangeSingleParameter(i, EventData);
			}

			break;
		default:
			break;
		}

		//#DebugText Debugeo por formato de los parametros del Gestor
		if (GEngine)
		{
			FNumberFormattingOptions NumberFormat;
			NumberFormat.MinimumIntegralDigits = 1;
			NumberFormat.MinimumFractionalDigits = 2;
			NumberFormat.MaximumFractionalDigits = 2;

			FString TimeCurrent = FText::AsNumber(GetCurrentTime(), &NumberFormat).ToString();
			FString PercentageTime = FText::AsNumber(GetAlphaTime(), &NumberFormat).ToString();
			FString RemainTime = FText::AsNumber(GetRemainTime(), &NumberFormat).ToString();
			GEngine->AddOnScreenDebugMessage(-1, 0.001, FColor::Emerald, FString::Printf(TEXT("TotalTime: %f TimeCurrent: %s  Alphatime: %s  Remain: %s"), TotalTimeTrasition, *TimeCurrent, *PercentageTime, *RemainTime), true, FVector2D(1.5, 1.5));
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

void UGestorNiagaraParameters::SetUpGestorParticleEvent(UNiagaraComponent* NiagaraCompoTargert, const FNSSE_ChangeParamsActionData& DataParticleChange)
{

	TargetNiagCompo = NiagaraCompoTargert;
	EventData = DataParticleChange;

	if (EventData.SingleParametersList.Num() != 0 && EventData.SingleParametersList.Num() == 1)
	{
		NumParamChange = ENSSE_NumberParameterChange::EPC_SinglerParameter;

	}
	else if (EventData.SingleParametersList.Num() != 0 && EventData.SingleParametersList.Num() > 1)
	{
		NumParamChange = ENSSE_NumberParameterChange::EPC_MultipleParameters;
	}

	//#DebugText
	FString enumname = FindObject<UEnum>(ANY_PACKAGE, TEXT("ENSSE_NumberParameterChange"), true)->GetNameStringByIndex(static_cast<uint8>(NumParamChange));
	UE_LOG(LogTemp, Warning, TEXT("Parameters : %s"), *enumname);


	




	//#GonDev #IncluirTimeDelay Incluir aqui un delay si queremos que empiece mas tarde el evento. Aunque estoy hay que plantearselo porque quizas no haga fata.
	/*
		Incluir.
	*/

	StartParameterChanges();



}

void UGestorNiagaraParameters::StartParameterChanges()
{
	StartTime = GetWorld()->GetTimeSeconds();
	bDoStart = true;
}

//No soporte para algunos tipos de datos de momneto #TOFUTURE Implementar para todos los tipos de datos en niagara
void UGestorNiagaraParameters::ChangeSingleParameter(int32 IndexParam, const FNSSE_ChangeParamsActionData& InputData)
{
	//Get Name and Type
	FString ParameterName = InputData.SingleParametersList[IndexParam].NameParam;
	ENSSE_ParameterType ParamType = InputData.SingleParametersList[IndexParam].DataType;
	
	//Instan Varaibles
	bool IsInstanChange = InputData.Instan;
	ENSSE_InstanTransTiming InstanMoment = InputData.InstanTiming;

	//Parameters Inicial and Final
	FNSSE_UnitParameterType InputInicial = InputData.SingleParametersList[IndexParam].ParametroInicial;
	FNSSE_UnitParameterType InputFinal = InputData.SingleParametersList[IndexParam].ParametroFinal;

	float AlphaTime = GetAlphaTime();

	if (IsInstanChange)
	{
		InstanNiagaraChanges(InstanMoment, ParameterName, InputFinal, ParamType, AlphaTime);
	}
	else
	{
		LerpNiagaraChanges(ParameterName, InputInicial, InputFinal, ParamType, AlphaTime);
	}

}

void UGestorNiagaraParameters::InstanNiagaraChanges(ENSSE_InstanTransTiming InstaTiming, FString ParameterName, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime)
{
	switch (ParamType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_Bool:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_Float:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_Int32:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_LinearColor:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_Quaternion:

		break;
	case ENSSE_ParameterType::EPT_Vector2:

		break;
	case ENSSE_ParameterType::EPT_Vector3:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
			}
			break;
		default:
			break;
		}
		break;
	case ENSSE_ParameterType::EPT_Vector4:

		break;
	default:
		break;
	}

}

void UGestorNiagaraParameters::LerpNiagaraChanges(FString ParameterName, const FNSSE_UnitParameterType& InputInicial ,const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime)
{

	switch (ParamType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		break;
	case ENSSE_ParameterType::EPT_Bool:
		break;
	case ENSSE_ParameterType::EPT_Float:
	{
		//FLOAT SET
		float LerpValue = UKismetMathLibrary::Lerp(InputInicial.PFloat, InputFinal.PFloat, AlphaTime);
		TargetNiagCompo->SetNiagaraVariableFloat(ParameterName, LerpValue);
		//UE_LOG(LogTemp, Warning, TEXT("ValueChange-> Type: Float Value: %s "), *FString::SanitizeFloat(LepValue, 2));
		break;
	}
	case ENSSE_ParameterType::EPT_Int32:
	{
		//INT SET
		float ConverInit = float(InputInicial.PInt);
		float ConverFinal = float(InputInicial.PInt);
		int32 FinalIntNumber = FMath::FloorToInt(UKismetMathLibrary::Lerp(ConverInit, ConverFinal, AlphaTime));

		TargetNiagCompo->SetNiagaraVariableInt(ParameterName, FinalIntNumber);
		break;
	}
	case ENSSE_ParameterType::EPT_LinearColor:
		//LINEARCOLOR SET
		TargetNiagCompo->SetNiagaraVariableLinearColor(ParameterName, UKismetMathLibrary::LinearColorLerp(InputInicial.PLinearColor, InputFinal.PLinearColor, AlphaTime));
		break;
	case ENSSE_ParameterType::EPT_Quaternion:
		break;
	case ENSSE_ParameterType::EPT_Vector2:
		break;
	case ENSSE_ParameterType::EPT_Vector3:
		//VECTOR SET
		TargetNiagCompo->SetNiagaraVariableVec3(ParameterName, UKismetMathLibrary::VLerp(InputInicial.PVec, InputFinal.PVec, AlphaTime));
		break;
	case ENSSE_ParameterType::EPT_Vector4:
		break;
	default:
		break;
	}

}