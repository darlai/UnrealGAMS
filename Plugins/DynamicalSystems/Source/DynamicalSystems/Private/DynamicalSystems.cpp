#include "DynamicalSystems.h"
#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FDynamicalSystemsModule"

void FDynamicalSystemsModule::StartupModule()
{
}

void FDynamicalSystemsModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDynamicalSystemsModule, DynamicalSystems)
