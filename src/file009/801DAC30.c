#include "common.h"


extern void func_8013B570(void *, s32, s32, s32, void *);
extern u8 D_801BBBF0[];
extern void func_801DAC84(void);

void func_801DAC30(void *arg0, s32 arg1) {
    *(s8 *)((u8 *)arg0 + 0x35) = *(u16 *)(D_801BBBF0 + 0x104);
    *(u16 *)(D_801BBBF0 + 0x104) = *(u16 *)(D_801BBBF0 + 0x104) + 1;
    func_8013B570(arg0, 0x29, 0, 0, func_801DAC84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DAC84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DAE70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DAEE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DAC30/func_801DB190.s")

