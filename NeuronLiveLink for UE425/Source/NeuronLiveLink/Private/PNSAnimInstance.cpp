// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.


#include "PNSAnimInstance.h"

void UPNSAnimInstance::SetSubjectName_Implementation(FLiveLinkSubjectName Subject)
{
	if (!(Subject == SubjectName))
	{
		SubjectName = Subject;
	}
}
