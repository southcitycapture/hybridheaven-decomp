#include "common.h"


extern void func_800266B0(s32 arg0, void *arg1, s32 arg2);
extern s32 func_800294D0(s32 arg0, void *arg1);
extern void func_80029BD0(s32 arg0, s32 arg1);
extern void func_80029C94(s32 arg0, void *arg1);
extern u8 D_8004AB54;
extern u8 D_800CC1D0[];

s32 func_80029B00(s32 arg0, s32 arg1) {
    s32 sp2C;
    s32 sp28;
    u8 sp24[4];

    D_8004AB54 = 0xFA;
    func_80029BD0(arg1, 0);
    func_800294D0(1, D_800CC1D0);
    func_800266B0(arg0, &sp28, 1);
    sp2C = func_800294D0(0, D_800CC1D0);
    func_800266B0(arg0, &sp28, 1);
    func_80029C94(arg1, sp24);
    if ((sp24[2] & 1) && (sp24[2] & 2)) {
        return 2;
    }
    if ((sp24[3] != 0) || !(sp24[2] & 1)) {
        return 1;
    }
    if (sp24[2] & 4) {
        return 4;
    }
    return sp2C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029B00/func_80029BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029B00/func_80029C94.s")

