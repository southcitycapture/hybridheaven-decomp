#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800146A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014990.s")


void func_80014990(void *a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6);
void func_80029D30(void *a0, s32 a1);

void func_80014B2C(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 sp28[16];

    func_80014990(sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_80029D30(sp28, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_80014F10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001500C.s")


extern void func_80014B88(void *, s16, s16, s16);
extern void func_80014E14(void *, void *, s32, s32, f32);

struct func_80015088_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
    u8 tail[4];
};

void func_80015088(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    struct func_80015088_Struct sp20;

    func_80014B88(&sp20, arg1, arg2, arg3);
    func_80014E14(&sp20, &sp20, arg4, arg5, arg6);
    sp20.f30 = arg7;
    sp20.f34 = arg8;
    sp20.f38 = arg9;
    func_80029D30(&sp20, arg0);
}


struct func_80015110_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};

struct func_80015110_Local {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
};


void func_80015110(s32 arg0, struct func_80015110_Struct *arg1) {
    struct func_80015110_Local sp28;

    func_80014B88(&sp28, arg1->unk10, arg1->unk12, arg1->unk14);
    func_80014E14(&sp28, &sp28, arg1->unk18, arg1->unk1C, arg1->unk20);
    sp28.unk30 = arg1->unk4;
    sp28.unk34 = arg1->unk8;
    sp28.unk38 = arg1->unkC;
    func_80029D30(&sp28, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_8001518C.s")


f32 func_8001518C();                                /* extern */

f32 func_80015214(f32 arg0) {
    if (((f64) arg0 < -180.0) || (180.0 <= (f64) arg0)) {
        if (((f64) arg0 < 0.0) || (360.0 <= (f64) arg0)) {
            arg0 = func_8001518C();
        }
        if (180.0 <= (f64) arg0) {
            arg0 = (f32) ((f64) arg0 - 360.0);
        }
    }
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800146A0/func_800152C8.s")

