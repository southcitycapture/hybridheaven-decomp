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
extern void func_801FBC28(s32 arg0, s32 *arg1);

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

#define func_801FBC28 D_801FBC28
#undef func_801FBC28
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_801451C0(void *, s32);
extern s32 func_80146208(s32, u8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_80146894(s32, s32, u8 *, f32, f32, s32);
extern u8 B_801BEC68[];
extern u8 func_801FBDF4[];

void func_801FBC28(s32 arg0, s32 *arg1) {
    u8 s0;
    u8 sp4E;

    sp4E = 0;
    func_80116E80(0x100);
    func_80116E80(0x400);
    func_80116E80(0x800);
    func_80116E80(0x200);
    B_801BEC68[0xA] = sp4E;
    s0 = func_80146208(arg0, &sp4E, 0x26, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 0);
    *(s16 *)(arg1[B_801BEC68[0xA]] + 0x28) = 0x800;
    func_801451C0((void *)arg1[B_801BEC68[0xA]], 0);
    B_801BEC68[0xB] = sp4E;
    s0 += func_80146894(arg0, 1, &sp4E, 42.0f, 35.0f, 0xB);
    B_801BEC68[0xC] = sp4E;
    s0 += func_80146208(arg0, &sp4E, 4, 0x1B, 0x13, 0x20, 0x20, 0, 0, 0xFF, 0x209, 2);
    *(s16 *)(arg1[B_801BEC68[0xC]] + 0x28) = 0x100;
    if (s0) {
        func_80005700(arg0);
        func_801170DC(0x400);
        func_801170DC(0x200);
        return;
    }
    func_800058DC(arg0, func_801FBDF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FBB20/func_801FBDF4.s")


typedef struct func_801FC0E4_Struct {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x91 - 0x28];
    u8 unk91;
} func_801FC0E4_Struct;

extern s32 func_80126A0C(func_801FC0E4_Struct *, s32, s32);
extern void func_80147148(s32, s32);

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

