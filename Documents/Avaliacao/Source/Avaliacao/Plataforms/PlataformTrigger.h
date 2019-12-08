

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlataformTrigger.generated.h"

UCLASS()
class AVALIACAO_API APlataformTrigger : public AActor
{
	GENERATED_BODY()

public:

	APlataformTrigger();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		class	UBoxComponent* TriggerVolume;

	UPROPERTY(EditAnywhere)
		TArray<class ASMPlataform*> PlataformsTriggers;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
