// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NSSE_Manager.generated.h"


USTRUCT(BlueprintType)
struct FEventListData {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float EventTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventName;
};


USTRUCT(BlueprintType)
struct FEventList {

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventListData> EventsList;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventSendCast, FString, EventName);


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
		TArray<FEventListData> EventTable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		float ToleranceRange=0.001f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE_Manager")
		int32 PresitionValue = 2;

	FEventSendCast EventCast;		

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
		
	
		

};
