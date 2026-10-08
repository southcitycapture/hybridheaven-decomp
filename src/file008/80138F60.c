#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_80138F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_80139034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_801390A0.s")


typedef struct func_8013910C_Struct {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 pad1[6];
    u32 unk14;
    u32 unk18;
} func_8013910C_Struct;

extern void func_8014ADB4(f32, f32, f32, s16, u32, s32, u32);

void func_8013910C(void *arg0, s32 arg1) {
    u32 temp_v1;
    func_8013910C_Struct *temp_v0;

    temp_v0 = *(func_8013910C_Struct **) ((u8 *) arg0 + 0x38);
    temp_v1 = temp_v0->unk14;
    func_8014ADB4((f32) ((f64) (f32) temp_v0->unk6 / 10.0), (f32) ((f64) (f32) temp_v0->unk8 / 10.0), (f32) ((f64) (f32) temp_v0->unkA / 10.0), temp_v0->unkC, temp_v1 >> 0x10, temp_v1 & 0xFFFF, temp_v0->unk18 >> 0x10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_801391B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_80139254.s")

