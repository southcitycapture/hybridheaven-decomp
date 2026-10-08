#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DB480.s")


typedef struct func_801DB6B8_StructA {
    u8 pad[0x10];
    f32 unk10;
    u8 pad2[0x1C];
    u32 unk30;
} func_801DB6B8_StructA;

void func_801DB480(s32 arg0, s32 arg1, f32 arg2, s32 arg3);
extern s32 D_801BBCCC;
extern func_801DB6B8_StructA D_801BC03C;
extern func_801DB6B8_StructA D_801BC3D8;

void func_801DB6B8(s32 arg0, s32 arg1, u8 arg2) {
    func_801DB6B8_StructA *var_v0;
    s32 var_a3;
    f64 var_dbl;
    f32 var_fv0;

    if (arg0 == D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    if (arg2) {
        var_fv0 = (f32) (f64) var_v0->unk10;
    } else {
        var_dbl = 1.0;
        var_fv0 = (f32) var_dbl;
    }
    if (((u32) (var_v0->unk30 << 9) >> 0x1E) == 3) {
        var_a3 = 1;
    } else {
        var_a3 = 0;
    }
    func_801DB480(arg0, arg1, var_fv0, var_a3);
}


void func_801DB74C(f32 arg0, f32 *arg1, f32 *arg2) {
    if (*arg1 < arg0) {
        *arg1 = arg0;
        return;
    }
    if (arg0 < *arg2) {
        *arg2 = arg0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DB788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DB868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DBE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DB480/func_801DBEE4.s")

