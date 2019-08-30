// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "NSSE_NiagGestorCompo.h"
#include "NSSE_ActionGestor.generated.h"


class ANSSE_Manager;

USTRUCT(BlueprintType)
struct FNSSE_ActionEvent : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ENiagaraGestorActions ActionGestor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FNSSE_EventData EventData;

};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_ActionGestor : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE Component")
		FString GroupName = "Trackers";

	ANSSE_Manager* EventManager;

	UNSSE_ActionGestor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	ANSSE_Manager* GetManagerWithGroup(UWorld* Wold, FString NameGroup);
	void EventManagerBind();


	bool CheckEventName();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	UFUNCTION()
		void EventNiagaraCalled(FString NameEvent);

};
