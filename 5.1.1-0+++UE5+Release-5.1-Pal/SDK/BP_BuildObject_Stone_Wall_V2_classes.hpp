#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x590 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_Stone_Wall_V2.BP_BuildObject_Stone_Wall_V2_C
class ABP_BuildObject_Stone_Wall_V2_C : public APalBuildObject
{
public:
	class UBoxComponent*                         AffectNavigationBox;                               // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Wall_Stone;                                     // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_Stone_Wall_V2_C* GetDefaultObj();

};

}


