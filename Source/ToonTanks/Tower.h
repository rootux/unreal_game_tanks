// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	bool IsInRange() const;
	void FireInRange();
	void HandleDestruction();
	virtual void BeginPlay() override;
private:
	class ATank* Tank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat", meta=(AllowPrivateAccess="true"))
	double FireRange = 50.f;

	FTimerHandle FireRateTimerHandle;
};
