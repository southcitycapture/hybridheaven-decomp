#include "common.h"


extern s32 func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_801CE7D4(void);
extern s32 D_801DAD10;
extern s32 D_801DAD28;
extern s32 D_801DAD2C;
extern s32 D_801DAD34;
extern s32 D_801DAD38;
extern s32 D_801DAD3C;
extern s32 D_801E11F0;

void func_801CE760(s32 arg0, s32 arg1) {
    D_801E11F0 = arg0;
    D_801DAD28 = 0;
    D_801DAD2C = 0;
    D_801DAD34 = 1;
    D_801DAD10 = 0;
    D_801DAD38 = 0;
    D_801DAD3C = 0;
    func_8013B570(arg0, 0x2D, 0, 4, func_801CE7D4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CE7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CE830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEA50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CED5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEDBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEDC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEDD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEDE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEE24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEE30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEE68.s")


void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801CEE74(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E11F0);
        func_801C3370(D_801E11F0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DAD3C = 1;
        return;
    }
    D_801DAD3C = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEF04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEF10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CEF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF180.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF3BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF40C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF4B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF860.s")


extern s32 D_801DAEB0;
extern s32 D_801DAECC;
extern s32 D_801DAED0;
extern s32 D_801DAEF0;
extern s32 D_801DAEF4;
extern void func_801CF8F4(void);

void func_801CF890(s32 arg0, s32 arg1) {
    D_801DAEB0 = arg0;
    D_801DAECC = 0;
    D_801DAED0 = 0;
    D_801DAEF0 = 1;
    D_801DAEF4 = 0;
    func_8013B570(arg0, 0x11C, 0, 4, func_801CF8F4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CF950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFAC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFD9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFE90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801CFF24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D003C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D01B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D03E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D03EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D03F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D048C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0498.s")


extern u8 D_8008DA88[];
extern s32 D_801E12C0;

void func_801D04F8(void) {
    func_80006214(D_801E12C0);
    *(u8 *)(*(u8 **)(D_8008DA88 + 0x4C) + 0x22) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CE760/func_801D0528.s")

