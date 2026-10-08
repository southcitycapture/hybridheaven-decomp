#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDBF0.s")


extern s32 func_801BF968(void);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801CDCD0(void);
extern s32 D_801DABCC;

void func_801CDC8C(s32 arg0, s32 arg1) {
    D_801DABCC = 1;
    if (func_801BF968() != 0) {
        func_800058DC(arg0, func_801CDCD0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDD14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDD3C.s")


extern void func_801C26C4(s32 arg0, void *arg1);
extern s32 D_801DABD0;
extern u8 D_801E1110[];

void func_801CDDF8(void) {
    D_801DABD0 = 0;
    func_801C26C4(0xA, D_801E1110);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDBF0/func_801CDE68.s")

