#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB08 (0x1118 - 0x610)
// AnimBlueprintGeneratedClass ABP_Deer_Implementation.ABP_Deer_Implementation_C
class UABP_Deer_Implementation_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x618(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x620(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x628(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x6F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x710(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x7D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x7F8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x8C0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x8E0(0xC8)(None)
	uint8                                        Pad_389C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x9B0(0x250)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC00(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xC20(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0xC40(0x250)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0xE90(0x250)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x10E0(0x20)(None)
	struct FVector                               LookAtWorldLocation;                               // 0x1100(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Deer_Implementation_C* GetDefaultObj();

	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator, struct FPoseLink* AimingOverride);
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Deer_Implementation(int32 EntryPoint);
};

}


