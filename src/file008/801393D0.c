#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_801393D0.s")

extern u8 D_801BD960[];

extern void func_800279F0(void *a0, s32 a1);

void func_801394CC(void) {
    func_800279F0(&D_801BD960, 0x20);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_801394F4.s")



void func_80139528(s32 arg0) {
    s32 *unused = &arg0;
    arg0 &= 0xFF;
    D_801BD960[arg0] = 1;
}


void func_80139544(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    D_801BD960[arg0] = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013955C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_801395E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_80139894.s")


void func_80139894(s32 a0, s32 a1, s32 a2, s32 a3);

void func_8013A194(s32 a0, s32 a1, s32 a2) {
    func_80139894(a0, a1, a2, 0x1000);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013A1B4.s")


typedef struct func_8013A28C_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8013A28C_Struct;

extern void func_8013A1B4(s32 a0, func_8013A28C_Struct v, s32 a4);

void func_8013A28C(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_8013A1B4(a0, *(func_8013A28C_Struct *)&a1, 0x3FFFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013A2E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013A334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013A5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013A7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013ADD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/801393D0/func_8013AE20.s")

