// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NSSE_DataStrucTypes.h"
#include "NSSE_ActionGestor.generated.h"


UCLASS( ClassGroup=(NiagaraSystemSongEvent), meta=(BlueprintSpawnableComponent) )
class NIAGARASYSTEMSONGEVENT_API UNSSE_ActionGestor : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	class ANSSE_Manager* EventManager;

	/**Try to find a Manager with this group name. Else will take the first found*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE ActionGestor")
	FString GroupName = "Trackers";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE ActionGestor")
	UDataTable* ActionEventList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NSSE ActionGestor")
	class UNSSE_NiagGestorCompo* MyNiagaraGestor;

	TArray<FName> EventRowNames;

	UNSSE_ActionGestor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/** Looking for NSSE_Manager in the world*/
	ANSSE_Manager* GetManagerWithGroup(UWorld* Wold, FString NameGroup);
	/**This method make a bind to recived events from NSSE_Manager*/
	void EventManagerBind();
	/**Check is recived event from NSSE_Manager has the same name form own list event name*/
	bool CheckEventName(FName NameEvent);



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	UFUNCTION()
	void EventNiagaraCalled(FString NameEvent);

};
