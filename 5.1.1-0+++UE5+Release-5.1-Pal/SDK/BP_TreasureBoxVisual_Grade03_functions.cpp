#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TreasureBoxVisual_Grade03.BP_TreasureBoxVisual_Grade03_C
// (Actor)

class UClass* ABP_TreasureBoxVisual_Grade03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TreasureBoxVisual_Grade03_C");

	return Clss;
}


// BP_TreasureBoxVisual_Grade03_C BP_TreasureBoxVisual_Grade03.Default__BP_TreasureBoxVisual_Grade03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TreasureBoxVisual_Grade03_C* ABP_TreasureBoxVisual_Grade03_C::GetDefaultObj()
{
	static class ABP_TreasureBoxVisual_Grade03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TreasureBoxVisual_Grade03_C*>(ABP_TreasureBoxVisual_Grade03_C::StaticClass()->DefaultObject);

	return Default;
}

}


