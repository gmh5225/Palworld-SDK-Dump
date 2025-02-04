#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionShieldCall.BP_AIActionShieldCall_C
// (None)

class UClass* UBP_AIActionShieldCall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionShieldCall_C");

	return Clss;
}


// BP_AIActionShieldCall_C BP_AIActionShieldCall.Default__BP_AIActionShieldCall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionShieldCall_C* UBP_AIActionShieldCall_C::GetDefaultObj()
{
	static class UBP_AIActionShieldCall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionShieldCall_C*>(UBP_AIActionShieldCall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionShieldCall.BP_AIActionShieldCall_C.DoRide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionProtecting_C*    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PushChildAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionShieldCall_C::DoRide(class APawn* ControlledPawn, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UBP_AIActionProtecting_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionShieldCall_C", "DoRide");

	Params::UBP_AIActionShieldCall_C_DoRide_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_PushChildAction_ReturnValue = CallFunc_PushChildAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionShieldCall.BP_AIActionShieldCall_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionShieldCall_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionShieldCall_C", "ActionTick");

	Params::UBP_AIActionShieldCall_C_ActionTick_Params Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIActionShieldCall.BP_AIActionShieldCall_C.ExecuteUbergraph_BP_AIActionShieldCall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearTwoActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionShieldCall_C::ExecuteUbergraph_BP_AIActionShieldCall(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_IsNearTwoActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionShieldCall_C", "ExecuteUbergraph_BP_AIActionShieldCall");

	Params::UBP_AIActionShieldCall_C_ExecuteUbergraph_BP_AIActionShieldCall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsNearTwoActor_ReturnValue = CallFunc_IsNearTwoActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


