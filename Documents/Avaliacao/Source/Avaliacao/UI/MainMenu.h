

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"
#include "MainMenu.generated.h"

/**
 *
 */
UCLASS()
class AVALIACAO_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetMenuInterface(IMenuInterface* MenuInterface);

protected:
	virtual bool Initialize() override;

private:
	UPROPERTY(meta = (BindWidget))
		class UButton* Host;

	UPROPERTY(meta = (BindWidget))
		class UButton* Join;

	UFUNCTION()
		void HostServer();

	IMenuInterface* MenuInterface;

};