#include "context.h"

extern s32 func_8013B570(s32, s32, s32, s32, void (*)());
extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801DAC50;
extern s32 D_801DAC58;
extern s32 D_801DAC70;
extern s32 D_801DAC74;
extern s32 D_801DAC78;
extern s32 D_801DAC7C;
extern s32 D_801DAC84;
extern s32 D_801DAC88;
extern s32 D_801DAC8C;
extern void func_801CDF50();

void func_801CDE80(s32 arg0, s32 arg1) {
    D_801DAC50 = arg0;
    D_801DAC70 = 0;
    D_801DAC74 = 0;
    D_801DAC78 = 1;
    D_801DAC7C = 0;
    D_801DAC58 = 0;
    D_801DAC84 = 0;
    D_801DAC88 = 0;
    D_801DAC8C = func_801CC654(arg0, 0x28, 0, 0x28, 1, 0x28, 0, 0x28, 1, 1, 0, 0);
    func_8013B570(arg0, 0x29, 0, 4, func_801CDF50);
}
