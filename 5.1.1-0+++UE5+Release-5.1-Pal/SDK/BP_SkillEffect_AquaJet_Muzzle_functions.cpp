#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_AquaJet_Muzzle.BP_SkillEffect_AquaJet_Muzzle_C
// (Actor)

class UClass* ABP_SkillEffect_AquaJet_Muzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_AquaJet_Muzzle_C");

	return Clss;
}


// BP_SkillEffect_AquaJet_Muzzle_C BP_SkillEffect_AquaJet_Muzzle.Default__BP_SkillEffect_AquaJet_Muzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_AquaJet_Muzzle_C* ABP_SkillEffect_AquaJet_Muzzle_C::GetDefaultObj()
{
	static class ABP_SkillEffect_AquaJet_Muzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_AquaJet_Muzzle_C*>(ABP_SkillEffect_AquaJet_Muzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


