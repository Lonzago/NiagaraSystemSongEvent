// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NiagaraSystemSongEvent.h"

#define LOCTEXT_NAMESPACE "FNiagaraSystemSongEventModule"

DEFINE_LOG_CATEGORY(LogNSSE);

void FNiagaraSystemSongEventModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(LogNSSE, Warning, TEXT("NIAGARA SYSTEM SONG EVENT::--> Start Module"));
}

void FNiagaraSystemSongEventModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UE_LOG(LogNSSE, Warning, TEXT("NIAGARA SYSTEM SONG EVENT::--> ShotDown Module"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNiagaraSystemSongEventModule, NiagaraSystemSongEvent)