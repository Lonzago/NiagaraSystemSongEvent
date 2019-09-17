// Fill out your copyright notice in the Description page of Project Settings.


#include "NSSE_GestorNiagaraParameters.h"
#include "Engine\Engine.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "NiagaraSystemSongEvent.h"
#include "Niagara\Public\NiagaraComponent.h"


UNSSE_GestorNiagaraParameters::UNSSE_GestorNiagaraParameters()
{
	PrimaryComponentTick.bCanEverTick = true;
	bDoStart = false;
}

void UNSSE_GestorNiagaraParameters::BeginPlay()
{
	Super::BeginPlay();



}

void UNSSE_GestorNiagaraParameters::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	bool IsUnderPorcentage = GetPercentage() <= 100;

	if (bDoStart && IsUnderPorcentage)
	{
		/*Check NiagaraComponentArray and if its has more than 1 make a loop*/
		if (OwnTargetsNiagCompoArray.Num() == 1)
		{
			ExecuteChangeSingleParamByEnum(0);

		}
		else if (OwnTargetsNiagCompoArray.Num() > 1)
		{
			for (int32 i = 0; i < OwnTargetsNiagCompoArray.Num(); i++)
			{
				ExecuteChangeSingleParamByEnum(i);
			}
		}

		//#DebugText Debugeo por formato de los parametros del Gestor
		if (GEngine)
		{
			FNumberFormattingOptions NumberFormat;
			NumberFormat.MinimumIntegralDigits = 1;
			NumberFormat.MinimumFractionalDigits = 2;
			NumberFormat.MaximumFractionalDigits = 2;

			FString TimeCurrent = FText::AsNumber(GetGestorTime(), &NumberFormat).ToString();
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

void UNSSE_GestorNiagaraParameters::ExecuteChangeSingleParamByEnum(int32 IndexNiagCompoRef)
{
	//Hace el paso por multiples parametros o por uno solo.
	switch (MultiParameterType)
	{
	case ENSSE_NumberParameterChange::EPC_SinglerParameter:

		ChangeSingleParameter(OwnTargetsNiagCompoArray[IndexNiagCompoRef], 0, OwnNiagGestorData);

		break;

	case ENSSE_NumberParameterChange::EPC_MultipleParameters:

		//Pasa por todos los parametros a cambiar
		for (int i = 0; i <= OwnNiagGestorData.SingleParametersList.Num() - 1; i++)
		{
			ChangeSingleParameter(OwnTargetsNiagCompoArray[IndexNiagCompoRef], i, OwnNiagGestorData);
		}
		break;
	default:
		break;
	}
}

////////////////////
//				CUSTOM METHODS
////////////////////

void UNSSE_GestorNiagaraParameters::StopCountTime()
{
	bDoStart = false;
	//#DebugText
	UE_LOG(LogNSSE, Warning, TEXT("NiagaraParameters::StopCountTime--> Timer Is Stoped"));
}

float UNSSE_GestorNiagaraParameters::GetGestorTime()const
{
	return GetWorld()->GetTimeSeconds() - StartTime;
}

float UNSSE_GestorNiagaraParameters::GetPercentage()const
{
	return GetGestorTime() * 100 / TotalTimeTrasition;
}

float UNSSE_GestorNiagaraParameters::GetRemainTime() const
{
	return TotalTimeTrasition - GetGestorTime();
}

float UNSSE_GestorNiagaraParameters::GetAlphaTime() const
{
	FVector2D InputClamp = FVector2D(0, 100);
	FVector2D OutClamp = FVector2D(0, 1.0f);
	return FMath::GetMappedRangeValueClamped(InputClamp, OutClamp, GetPercentage());
}

bool UNSSE_GestorNiagaraParameters::IsRuningEvent() const
{
	return bDoStart;
}

void UNSSE_GestorNiagaraParameters::SetUpGestorParticleEvent(const TArray<UNiagaraComponent*>& NiagaraComposTargerts, const FNSSE_NiagaraGestorData& NiagaraGestorData)
{
	//Si esta en Evento lo para para reiniciarse
	if (IsRuningEvent()) { StopCountTime(); }

	//InicialSettings--------------------------------------
	OwnTargetsNiagCompoArray = NiagaraComposTargerts;
	OwnNiagGestorData = NiagaraGestorData;
	MultiParameterType = GetMultiParameter(NiagaraGestorData);

	////#DebugText Debug del tipo de MultiParametro
	FString enumname = FindObject<UEnum>(ANY_PACKAGE, TEXT("ENSSE_NumberParameterChange"), true)->GetNameStringByIndex(static_cast<uint8>(MultiParameterType));
	UE_LOG(LogNSSE, Warning, TEXT("Parameters : %s"), *enumname);


	//#GonDev #IncluirTimeDelay Incluir aqui un delay si queremos que empiece mas tarde el evento. Aunque estoy hay que plantearselo porque quizas no haga fata.
	/*
		Incluir.
	*/


	//InitializedEvent-------------------------------------
	StartParameterChanges();
}

ENSSE_NumberParameterChange UNSSE_GestorNiagaraParameters::GetMultiParameter(const FNSSE_NiagaraGestorData& NiagaraGestorData) const
{
	if (NiagaraGestorData.SingleParametersList.Num() != 0 && NiagaraGestorData.SingleParametersList.Num() == 1)
	{
		return ENSSE_NumberParameterChange::EPC_SinglerParameter;

	}
	else if (NiagaraGestorData.SingleParametersList.Num() != 0 && NiagaraGestorData.SingleParametersList.Num() > 1)
	{
		return ENSSE_NumberParameterChange::EPC_MultipleParameters;
	}
	else
	{
		//#DebugError
		UE_LOG(LogNSSE, Error, TEXT("GestorNiagaraParameters::GetMultiParameter --> ErrorParameters"));
		return ENSSE_NumberParameterChange::EPC_ErrorParameters;
	}
}

void UNSSE_GestorNiagaraParameters::StartParameterChanges()
{
	StartTime = GetWorld()->GetTimeSeconds();

	//#DebugText Total Time StartParams Display
	//UE_LOG(LogNSSE, Display, TEXT("GestorNiagara TotalTimeTransition = %s"), *FString::SanitizeFloat(OwnNiagGestorData.SingleParametersList[0].TiempoTrans));

	TotalTimeTrasition = OwnNiagGestorData.SingleParametersList[0].TiempoTrans;
	bDoStart = true;
}



//No soporte para algunos tipos de datos de momneto #TOFUTURE Implementar para todos los tipos de datos en niagara
void UNSSE_GestorNiagaraParameters::ChangeSingleParameter(UNiagaraComponent* NiagCompoRef, int32 IndexParam, const FNSSE_NiagaraGestorData& GestorData)
{
	//Get Name and Type
	FString ParameterName = GestorData.SingleParametersList[IndexParam].NameParam;
	ENSSE_ParameterType ParamType = GestorData.SingleParametersList[IndexParam].DataType;

	//Instan Varaibles
	bool IsInstanChange = GestorData.SingleParametersList[IndexParam].Instan;
	ENSSE_InstanTransTiming InstanMoment = GestorData.SingleParametersList[IndexParam].InstanTiming;

	//Parameters Inicial and Final
	FNSSE_UnitParameterType InputInicial = GestorData.SingleParametersList[IndexParam].ParametroInicial;
	FNSSE_UnitParameterType InputFinal = GestorData.SingleParametersList[IndexParam].ParametroFinal;

	float AlphaTime = GetAlphaTime();

	if (IsInstanChange)
	{
		InstanNiagaraChanges(NiagCompoRef, InstanMoment, ParameterName, InputFinal, ParamType, AlphaTime);
	}
	else
	{
		LerpNiagaraChanges(NiagCompoRef, ParameterName, InputInicial, InputFinal, ParamType, AlphaTime);
	}

}

void UNSSE_GestorNiagaraParameters::InstanNiagaraChanges(UNiagaraComponent* NiagCompoRef, ENSSE_InstanTransTiming InstaTiming, FString ParameterName, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime)
{
	switch (ParamType)
	{
	case ENSSE_ParameterType::EPT_Actor:
		switch (InstaTiming)
		{
		case ENSSE_InstanTransTiming::EITT_AtStart:
			if (AlphaTime < 0.1)
			{
				NiagCompoRef->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableActor(ParameterName, InputFinal.PActor);
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
				NiagCompoRef->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableBool(ParameterName, InputFinal.PBool);
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
				NiagCompoRef->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableFloat(ParameterName, InputFinal.PFloat);
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
				NiagCompoRef->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableInt(ParameterName, InputFinal.PInt);
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
				NiagCompoRef->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableLinearColor(ParameterName, InputFinal.PLinearColor);
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
				NiagCompoRef->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
			}
			break;
		case ENSSE_InstanTransTiming::ETII_Middle:
			if (AlphaTime > 0.49 && AlphaTime < 0.51)
			{
				NiagCompoRef->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
			}
			break;

		case ENSSE_InstanTransTiming::ETII_AtEnd:
			if (AlphaTime > 0.99)
			{
				NiagCompoRef->SetNiagaraVariableVec3(ParameterName, InputFinal.PVec);
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

void UNSSE_GestorNiagaraParameters::LerpNiagaraChanges(UNiagaraComponent* NiagCompoRef, FString ParameterName, const FNSSE_UnitParameterType& InputInicial, const FNSSE_UnitParameterType& InputFinal, ENSSE_ParameterType ParamType, float AlphaTime)
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
		NiagCompoRef->SetNiagaraVariableFloat(ParameterName, LerpValue);
		//UE_LOG(LogTemp, Warning, TEXT("ValueChange-> Type: Float Value: %s "), *FString::SanitizeFloat(LepValue, 2));
		break;
	}
	case ENSSE_ParameterType::EPT_Int32:
	{
		//INT SET
		float ConverInit = float(InputInicial.PInt);
		float ConverFinal = float(InputInicial.PInt);
		int32 FinalIntNumber = FMath::FloorToInt(UKismetMathLibrary::Lerp(ConverInit, ConverFinal, AlphaTime));

		NiagCompoRef->SetNiagaraVariableInt(ParameterName, FinalIntNumber);
		break;
	}
	case ENSSE_ParameterType::EPT_LinearColor:
		//LINEARCOLOR SET
		NiagCompoRef->SetNiagaraVariableLinearColor(ParameterName, UKismetMathLibrary::LinearColorLerp(InputInicial.PLinearColor, InputFinal.PLinearColor, AlphaTime));
		break;
	case ENSSE_ParameterType::EPT_Quaternion:
		break;
	case ENSSE_ParameterType::EPT_Vector2:
		break;
	case ENSSE_ParameterType::EPT_Vector3:
		//VECTOR SET
		NiagCompoRef->SetNiagaraVariableVec3(ParameterName, UKismetMathLibrary::VLerp(InputInicial.PVec, InputFinal.PVec, AlphaTime));
		break;
	case ENSSE_ParameterType::EPT_Vector4:
		break;
	default:
		break;
	}

}