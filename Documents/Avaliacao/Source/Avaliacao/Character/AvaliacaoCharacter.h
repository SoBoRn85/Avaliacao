
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AvaliacaoCharacter.generated.h"

UCLASS(config = Game)
class AAvaliacaoCharacter : public ACharacter
{
	GENERATED_BODY()

		/** Camera boom */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;
public:
	AAvaliacaoCharacter();

	/** Base turn rate */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/* Atributos do personagem*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		float Life = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
		float Stamine = 100;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		float GetLife();

	UFUNCTION(BlueprintCallable, Category = "Attributes")
		void SetLife(float NewLife);


protected:

	/** Resets HMD  */
	void OnResetVR();

	/** Called for forwards */
	void MoveForward(float Value);

	/** Called for side */
	void MoveRight(float Value);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

