#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentSpawner_Forest_B.BP_PalRandomIncidentSpawner_Forest_B_C
// (Actor)

class UClass* ABP_PalRandomIncidentSpawner_Forest_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentSpawner_Forest_B_C");

	return Clss;
}


// BP_PalRandomIncidentSpawner_Forest_B_C BP_PalRandomIncidentSpawner_Forest_B.Default__BP_PalRandomIncidentSpawner_Forest_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentSpawner_Forest_B_C* ABP_PalRandomIncidentSpawner_Forest_B_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentSpawner_Forest_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentSpawner_Forest_B_C*>(ABP_PalRandomIncidentSpawner_Forest_B_C::StaticClass()->DefaultObject);

	return Default;
}

}


