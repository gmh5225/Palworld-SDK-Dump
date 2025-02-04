#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x414 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_SandTornadoBullet.BP_SkillEffect_SandTornadoBullet_C
class ABP_SkillEffect_SandTornadoBullet_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TargetLocation2D;                                  // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NormalizedDirection2D;                             // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotationDegree;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DotThreshold;                                      // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectDuration;                                    // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_SandTornadoBullet_C* GetDefaultObj();

	void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp, double CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void ReceiveBeginPlay();
	void EndProcess();
	void FadeOutEffect(double DeltaSecond);
	void BndEvt__BP_SkillEffect_SandTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ExecuteUbergraph_BP_SkillEffect_SandTornadoBullet(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_DeltaSecond, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable_4, class AActor* K2Node_ComponentBoundEvent_Defencer, const struct FPalDamageInfo& K2Node_ComponentBoundEvent_damageInfo, int32 K2Node_ComponentBoundEvent_hitCount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_AttackerComponent, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast_2, float CallFunc_GetFloatValue_InTime_ImplicitCast_3);
};

}


