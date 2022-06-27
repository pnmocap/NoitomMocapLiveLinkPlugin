// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SubjectNameSetter.h"
#include "PNSAnimInstance.generated.h"

/**
 * 
 */
UCLASS( transient, Blueprintable, hideCategories = AnimInstance, BlueprintType )
class NEURONLIVELINK_API UPNSAnimInstance : public UAnimInstance, public ISubjectNameSetter
{
	GENERATED_BODY()
	
public:
	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "SubjectNameSetter" )
		void SetSubjectName( FLiveLinkSubjectName Subject );

	virtual void SetSubjectName_Implementation( FLiveLinkSubjectName Subject ) override;

private:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess), Category = "SubjectNameSetter" )
		FLiveLinkSubjectName SubjectName;
};
