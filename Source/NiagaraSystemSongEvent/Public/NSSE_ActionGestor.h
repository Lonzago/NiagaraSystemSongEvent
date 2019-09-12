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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NSSE ActionGestor")
	TArray<class UNSSE_NiagGestorCompo*> OwnNiagaraGestorArray;

	
	TArray<FName> EventRowNames;

	UNSSE_ActionGestor(const FObjectInitializer& OI);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void Activate(bool bReset) override;
	virtual void OnRegister() override;

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	


	/** Looking for NSSE_Manager in the world*/
	ANSSE_Manager* GetManagerWithGroup(UWorld* Wold, FString NameGroup);
	/**This method make a bind to recived events from NSSE_Manager*/
	void EventManagerBind();
	/**Check is recived event from NSSE_Manager has the same name form own list event name*/
	bool CheckEventName(FName NameEvent);
	void GetAllNiagaraGestors();


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	TArray<FString> GetRegisterNiagaraGestorNames();

	UFUNCTION()
	void EventNiagaraCalled(FString NameEvent);

};
