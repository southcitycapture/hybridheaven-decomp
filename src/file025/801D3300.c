#include "common.h"


extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);
extern s32 D_801DB374;
extern s32 D_801DB378;
extern s32 D_801DB37C;
extern s32 D_801DB380;
extern s32 D_801DB384;
extern s32 D_801DB388;
extern s32 D_801DB38C;
extern s32 D_801E14A0;
extern void func_801D33A4(void);

void func_801D3300(s32 arg0, s32 arg1) {
    D_801E14A0 = arg0;
    D_801DB374 = 0;
    D_801DB378 = 0;
    D_801DB37C = 1;
    D_801DB384 = 0;
    D_801DB388 = 0;
    D_801DB38C = 0;
    if (D_801DB380 != 0) {
        func_8013B570(arg0, 0x2F, 0, 4, &func_801D33A4);
        return;
    }
    func_8013B570(arg0, 0x148, 0, 4, &func_801D33A4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D33A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D33EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D367C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3688.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3718.s")


void func_801D4008(s32, s32);

void func_801D3750(s32 arg0) {
    if (arg0 != 0) {
        func_801D4008(D_801E14A0, arg0);
    }
    D_801DB38C = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D38B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D3FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D44A4.s")

