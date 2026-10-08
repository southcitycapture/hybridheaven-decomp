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
