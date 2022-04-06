// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Logging/LogMacros.h"

DECLARE_LOG_CATEGORY_EXTERN(LogNeuronLiveLink, Log, All)

#define AN_LOG(Verbosity, Format, ...) UE_LOG(LogNeuronLiveLink, Verbosity, Format, ##__VA_ARGS__)
