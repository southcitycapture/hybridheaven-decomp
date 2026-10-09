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

void func_80242E44(s32 arg0, s32 arg1);

typedef struct func_80242DB4_Struct {
    u8 pad0[0xA8];
    s16 unkA8;
} func_80242DB4_Struct;

extern void func_80005700(void *arg0);
extern void func_80020718(s32 arg0);
extern void func_80126968(void);
extern s32 func_80126CC0(void *arg0, void *arg1);
extern s32 func_80133A24(s32 arg0);
extern void func_8013B570(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);

void func_80242DB4(void *arg0, s32 arg1) {
    if (func_80133A24(8) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_80126968();
        func_80020718(7);
        ((func_80242DB4_Struct *) arg0)->unkA8 = 0x1E;
        func_8013B570(arg0, 0x58, 2, 4, func_80242E44);
    }
}


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

