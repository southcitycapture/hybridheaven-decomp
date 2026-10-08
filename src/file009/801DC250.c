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

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DE6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DE7EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFAA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFCAC.s")


extern void func_801DFCAC(s32, u8 *, u8 *);

u8 func_801DFE00(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/func_801DFE50.s")

