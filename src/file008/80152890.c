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


typedef struct func_80152F7C_Struct {
    u8 pad0[0x12];
    u16 unk12;
    u8 pad1[2];
    u8 unk16;
    u8 pad2[1];
    u16 unk18[3];
    u8 pad3[4];
    u8 unk22;
} func_80152F7C_Struct;

extern s32 func_80152890(s32 arg0);
extern u16 func_80152980(s32 arg0, s32 arg1);
extern u16 D_80183AD0;

#define D_STRUCT (*(func_80152F7C_Struct *) &D_8017DD7C)

void func_80152F7C(void) {
    if (D_STRUCT.unk16 == 2) {
        if (func_80152890(0) < 3) {
            D_STRUCT.unk12 = D_80183AD0;
            return;
        }
        D_STRUCT.unk12 = func_80152980(0, (D_STRUCT.unk22 + 2) & 0xFF);
        return;
    }
    D_STRUCT.unk12 = D_STRUCT.unk18[D_STRUCT.unk22];
}


u16 func_80153008(void) {
    s32 var_v1;
    s32 stride;

    var_v1 = 0;
    stride = 0xC;
    if ((u16)D_8017DD8E != *(u16 *)((u8 *)&D_80183AD0)) {
        do {
            var_v1 = (var_v1 + 1) & 0xFF;
            stride = 0xC;
            if ((u16)D_8017DD8E == *(u16 *)((u8 *)&D_80183AD0 + var_v1 * stride)) {
                break;
            }
        } while (var_v1 < 0x29);
    }
    return *(u16 *)((u8 *)&D_80183AD0 + var_v1 * stride + 8);
}

