// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LiveLinkTypes.h"
#include "SubjectNameSetter.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class USubjectNameSetter : public UInterface
{
	GENERATED_BODY()
};

/**
 * This interface is used in Animation Blueprint to set LinkLink Subject name
 */
class ISubjectNameSetter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "SubjectNameSetter" )
		void SetSubjectName( FLiveLinkSubjectName Subject );
};
