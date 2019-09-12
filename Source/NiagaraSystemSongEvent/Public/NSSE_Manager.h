// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_Manager.generated.h"




DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventManagerTrigger, FString, EventName);


UCLASS()
class NIAGARASYSTEMSONGEVENT_API ANSSE_Manager : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ANSSE_Manager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		FString GroupManager = "Trackers";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		TArray<FNSSE_ManagerEventList> EventTable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		float ToleranceRange=0.001f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		int32 PresitionValue = 2;

	FEventManagerTrigger EventCast;		

	float StartTime;
	int32 IndexCheck;
	bool bIsRecording = false;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float GetTimeManager();
	bool  CheckEventTrigger(int Index, float Tolerance);
	float FloatPresition(float NumberToPresition, float Presition);

	void DisplayTimeCount();


public:	

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName = "OnEventSend"), Category = "NSSE_Manager")
	void ReciveEventSend(const FString& NameEvent);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "NSSE_Manager")
		void StartManager();

	UFUNCTION(BlueprintCallable, Category = "NSSE_Manager")
		void StopManager();
		
	UFUNCTION(BlueprintCallable, Category = "NSSE_Manager")
		TArray<FString> GetParametersOverrride(const class UNiagaraComponent* NiagCompoRef);
	UFUNCTION(BlueprintCallable, Category = "NSSE_Manager")
		bool GetNiagFloatParamByName(const class UNiagaraComponent* NiagCompoRef, FName ParamName, float& OutFloat);

};
