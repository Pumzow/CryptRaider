// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UGrabber : public USceneComponent
{
	GENERATED_BODY()

public:	
	UGrabber();
private:
	UPROPERTY(EditAnywhere)
	float MaxGrabDistance = 400;
	UPROPERTY(EditAnywhere)
	float GrabRadius = 100;
	UPROPERTY(EditAnywhere)
	float HoldDistance = 200;
protected:
	virtual void BeginPlay() override;
	UPhysicsHandleComponent* GetPhysicsHandle() const;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Grab();
	UFUNCTION(BlueprintCallable)
	void Release();
};
