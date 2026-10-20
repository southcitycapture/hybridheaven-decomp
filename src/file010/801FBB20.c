#include "common.h"


extern s8 D_8021B0E4;

void func_801FBB20(void) {
    D_8021B0E4 = 1;
}


void func_801FBB30(void) {
    D_8021B0E4 = 0;
}

extern s32 func_80147598();
extern void func_80005700(s32);
extern void func_800058DC(s32, void *);
extern void func_80146CD4(s16, s32);
extern u16 D_8017DC40[];
extern s32 D_802170F4;
extern f32 D_8021B0E0;
extern u8 func_801FBC28[];

void func_801FBB3C(s32 arg0, s32 arg1) {
    s16 sp1E;
    f32 a;

    sp1E = 0x2000;
    if (func_80147598() != 0) {
        func_80005700(arg0);
        return;
    }
    func_801FBB20();
    D_802170F4 = 0;
    a = (u32)D_8017DC40[1];
    D_8021B0E0 = a;
    if (D_8017DC40[0] != 0) {
        sp1E = (s16)(s32)((a / (f32)(u32)D_8017DC40[0]) * 8192.0f);
    }
    func_80146CD4(sp1E, 0);
    func_800058DC(arg0, func_801FBC28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FBB20/func_801FBC28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FBB20/func_801FBDF4.s")


typedef struct func_801FC0E4_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x91 - 0x28];
    u8 unk91;
} func_801FC0E4_Struct;

extern s32 func_80126A0C(func_801FC0E4_Struct *, s32, s32);
extern void func_80147148(s32, s32);
extern u8 func_801FBDF4[];

void func_801FC0E4(func_801FC0E4_Struct *arg0, s32 arg1) {
    if (*(u8 *)&D_8021B0E4 == 1) {
        arg0->unk91 = 1;
    }
    if (arg0->unk91 != 0 && func_80126A0C(arg0, 0x10E, 0) != 0) {
        func_80147148(arg0->unk24, 1);
        func_800058DC(arg0, func_801FBDF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FBB20/func_801FC160.s")

