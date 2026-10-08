#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB144;
extern s32 D_801DB148;
extern s32 D_801DB14C;
extern void func_801D1474(void);

void func_801D1420(s32 arg0, s32 arg1) {
    D_801DB144 = 0;
    D_801DB148 = 0;
    D_801DB14C = 1;
    func_8013B570(arg0, 0x2A, 0, 4, &func_801D1474);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D1474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D14D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D16C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D16D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D1714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D1420/func_801D1720.s")

