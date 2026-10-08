#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152980.s")


extern s8 D_8017DD8A;
extern s8 D_8017DD8B;

void func_80152BC8(u8 arg0, s8 arg1) {
    s8 *var_v0;

    if (!arg0) {
        var_v0 = &D_8017DD8A;
    } else {
        var_v0 = &D_8017DD8B;
    }
    *var_v0 += arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152C04.s")


extern u8 D_8017DC89;
extern u8 D_8017DD27;

u8 func_80152C68(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (!arg0) {
        return D_8017DC89;
    }
    return D_8017DD27;
}


extern u8 D_8017DD7C;
extern u8 D_8017DD7D;

u8 func_80152C90(s32 arg0) {
    u8 var_v1;
    s32 *sp;

    sp = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 == 0) {
        var_v1 = D_8017DD7C;
    } else {
        var_v1 = D_8017DD7D;
    }
    if ((s32) var_v1 >= 0x64) {
        var_v1 = 0x63;
    }
    return var_v1;
}


extern s16 D_8017DD8C;
extern s16 D_8017DD8E;

void func_80152CC8(u8 arg0, u16 arg1) {
    s16 *var_v0;

    if (arg0 == 0) {
        var_v0 = &D_8017DD8C;
    } else {
        var_v0 = &D_8017DD8E;
    }
    *var_v0 = arg1;
}


extern s8 D_8017DD92;

void func_80152CF8(s32 arg0) {
    s32 *p;
    p = &arg0;
    D_8017DD92 = arg0 + 1;
}



void func_80152D0C(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0) {
        D_8017DD8C = 0x29;
        return;
    }
    D_8017DD8C = 0x11C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80152F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80152890/func_80153008.s")

