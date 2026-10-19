#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DC250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DC510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DC700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DC9C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DCC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DCCB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DCDBC.s")


s32 func_801DC250();                                /* extern */
s32 func_801DCC50(u16, u8, u16 *);                  /* extern */

typedef struct func_801DE464_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DE464_Struct;

extern func_801DE464_Struct D_801BBBF0;
extern u8 D_801E15E0[];
extern u8 D_801E16A0[];
extern u8 D_801E177C[];
extern f32 D_801E3F2C;

void func_801DE464(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_a1;
    u8 var_a1;
    u16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    func_801DE464_Struct *var_v0;

    temp_v0 = func_801DC250();
    temp_a1 = temp_v0;
    if (temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        var_v0 = &D_801BBBF0;
        temp_a0 = *(u16 *)(D_801E15E0 + ((D_801E16A0[var_v0->unk4] * 0x10) + (var_v0->unk35B * 2)));
        var_a1 = temp_a1;
        temp_v0_2 = func_801DCC50(temp_a0, temp_a1, (u16 *)arg1);
        if (temp_a1 == 2) {
            *(f32 *)arg2 = 0.75f;
        }
        if (var_a1 == 3) {
            temp_a1--;
        }
        if (temp_v0_2 >= 4) {
            *(u16 *)arg1 = temp_a0;
        } else {
            *(u16 *)arg1 = *(u16 *)(D_801E177C + ((temp_a1 * 0xC) + (temp_v0_2 * 2)));
        }
        if (*(s32 *)arg0 == 0x01900220 || *(s32 *)arg0 == 0x019001E6) {
            *(f32 *)arg2 = D_801E3F2C;
        }
        return;
    }
    *(u16 *)arg1 = 0;
}


extern void func_801DCCB0(s32, s32, s32);
extern s32 D_801BBCCC;

void func_801DE590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == D_801BBCCC) {
        func_801DCCB0(arg1, arg2, arg3);
        return;
    }
    func_801DE464(arg1, arg2, arg3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DE5E4.s")


typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;
typedef struct func_801DE6F4_StructTable {
    u16 values[2][2];
} func_801DE6F4_StructTable;

extern s32 func_801DC700(s32, void *);
extern void func_801DC9C4(func_801DE6F4_StructVec, u16, f32);
extern u8 D_801E1FD0[];
extern func_801DE6F4_StructTable D_801E2008;

u16 func_801DE6F4(s32 arg0, func_801DE6F4_StructVec arg1, f32 *arg4, u8 arg5) {
    func_801DE6F4_StructTable table = D_801E2008;
    u8 result;

    result = func_801DC700(arg0, D_801E1FD0);
    if (result == 0) {
        return 0;
    }
    arg5 &= 1;
    if (result == 3) {
        func_801DC9C4(arg1, table.values[arg5][0], *arg4);
    }
    *arg4 = (f64)*arg4 * 1.5;
    return table.values[arg5][result - 1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DE7EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFAA4.s")


extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);

void func_801DFCAC(s32 arg0, u8 *arg1, u8 *arg2) {
    f32 *p;
    u16 v;

    p = *(f32 **)(*(s32 *)(arg0 + 0x24) + 0x2C);
    *arg1 = 0;
    *arg2 = 0;
    if (func_801C5A1C(p[1], p[2] + 2.0, p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        v = *(u16 *)(D_801E15E0 + D_801E16A0[D_801BBBF0.unk4] * 16 + D_801BBBF0.unk35B * 2);
        if (v == 0x677 || v == 0x67B || v == 0x676 || v == 0x67A || v == 0x66E || v == 0x672 || v == 0x66F || v == 0x673 || v == 0x661 || v == 0x67F) {
            *arg1 = 1;
        }
        if (v == 0x67B || v == 0x67A || v == 0x67D || v == 0x67C || v == 0x67F || v == 0x67E) {
            *arg2 = 1;
        }
    }
}



u8 func_801DFE00(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1F;
}



u8 func_801DFE28(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFE50.s")

