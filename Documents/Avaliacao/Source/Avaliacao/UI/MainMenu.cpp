


#include "MainMenu.h"
#include "Components/Button.h"

bool UMainMenu::Initialize()
{

	bool Success = Super::Initialize();
	if (!Success) return false;

	//FString nome = Host->GetName();
	if (!ensure(Host != nullptr)) return false;

	Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	return true;
}

void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
	this->MenuInterface = MenuInterface;
}

void UMainMenu::HostServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Indo para o servidor"));

	if (MenuInterface != nullptr)
	{
		MenuInterface->Host();
	}

}