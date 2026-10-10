#include "common.h"


extern s32 func_80001EA0();
extern s32 func_80032BE0();
extern s32 D_8005CD98;
extern s32 D_8005CD9C;

void func_80001E70(void) {
    D_8005CD98 = func_80032BE0();
    D_8005CD9C = func_80001EA0();
}


struct func_80001EA0_Struct {
    u8 pad0[4];
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u32 unkC;
    u32 unk10;
};

extern void func_800279F0(void *, s32, void *);
extern void func_80029580(void *);
extern struct func_80001EA0_Struct D_8005CDA0;
extern u8 D_8005CDB4[];

s32 func_80001EA0(void) {
    if (D_8005CDA0.unkC == 0xA8000000) {
        return (s32)&D_8005CDA0;
    }
    D_8005CDA0.unk4 = 3;
    D_8005CDA0.unkC = 0xA8000000;
    D_8005CDA0.unk5 = 5;
    D_8005CDA0.unk8 = 0xC;
    D_8005CDA0.unk6 = 0xD;
    D_8005CDA0.unk7 = 2;
    D_8005CDA0.unk9 = 1;
    D_8005CDA0.unk10 = 0;
    func_800279F0(D_8005CDB4, 0x60, &D_8005CDA0);
    func_80029580(&D_8005CDA0);
    return (s32)&D_8005CDA0;
}


extern s32 func_800266B0(void *, s32, s32);
extern void func_80028A90(s32, s32);
extern void func_800304F0(s32, void *, s32);
extern void func_80030640(s32, s32);
extern void func_800306C0(s32, s32);
extern u8 D_8005C268[];
extern u8 D_8005CD80[];

void func_80001F30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 == 0) {
        func_80028A90(arg2, arg4);
        func_800306C0(arg2, arg4);
        func_80030640(arg2, arg4);
    } else {
        func_80028A90(arg2, arg4);
    }
    *(D_8005CD80 + 2) = 0;
    *(void **)(D_8005CD80 + 4) = D_8005C268;
    *(s32 *)(D_8005CD80 + 8) = arg2;
    *(s32 *)(D_8005CD80 + 12) = arg3;
    *(s32 *)(D_8005CD80 + 16) = arg4;
    func_800304F0(arg0, D_8005CD80, arg1);
    func_800266B0(D_8005C268, 0, 1);
}



void func_80001FE8(s32 arg0, s32 arg1, s32 arg2) {
    func_80001F30(D_8005CD98, 0, arg1, arg0, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80001E70/func_80002028.s")



void func_80002068(s32 arg0, s32 arg1, s32 arg2) {
    func_80001F30(D_8005CD9C, 1, arg0, arg1, arg2);
}

