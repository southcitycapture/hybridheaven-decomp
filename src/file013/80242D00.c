#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242D00/func_80242D00.s")


void func_80129554(s32 a, s32 b, s32 c);
extern s32 D_8008D5D4;

void func_80242D50(void) {
    func_80129554(D_8008D5D4, 0xFF, 0x40);
}


typedef struct func_80242D7C_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
} func_80242D7C_StructB;

typedef struct func_80242D7C_StructA {
    u8 pad0[0x2C];
    func_80242D7C_StructB *unk2C;
} func_80242D7C_StructA;

typedef struct func_80242D7C_StructC {
    u8 pad0[0xE0];
    func_80242D7C_StructA *unkE0;
    u8 pad1[0xB9A - 0xE4];
    u16 unkB9A;
} func_80242D7C_StructC;

extern func_80242D7C_StructC D_801BBBF0;
extern f32 D_80249B30;

void func_80242D7C(void) {
    D_801BBBF0.unkE0->unk2C->unk4 = D_80249B30;
    D_801BBBF0.unkE0->unk2C->unkC = -328.0f;
    D_801BBBF0.unkB9A = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242D00/func_80242DB4.s")


extern void func_800058DC(s32 arg0, void (*arg1)());
extern void func_80203830(s32 arg0, void *arg1);
extern void func_8020394C();
extern s32 D_801BCC78;
extern u8 D_80245E78[];
extern void func_80242E90();

void func_80242E44(s32 arg0, s32 arg1) {
    func_80203830(arg0, D_80245E78);
    D_801BCC78 = arg0;
    func_8020394C();
    func_800058DC(arg0, func_80242E90);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242D00/func_80242E90.s")

