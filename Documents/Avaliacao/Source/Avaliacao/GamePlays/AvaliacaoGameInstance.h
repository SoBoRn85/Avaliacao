

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "../UI/MenuInterface.h"
#include "AvaliacaoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class AVALIACAO_API UAvaliacaoGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()
	
	UAvaliacaoGameInstance(const FObjectInitializer& ObjectInitializer);

	virtual void Init();

	UFUNCTION(Exec)
		void Host();

	UFUNCTION(Exec)
		void Join(const FString& Address);

	UFUNCTION(BlueprintCallable, Category = Menu)
		void LoadMenu();

private:
	TSubclassOf<class UUserWidget> MenuClass;

};
