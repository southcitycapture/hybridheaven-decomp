#include "context.h"

extern void func_8013B570(s32, s32, s32, s32, s32);
extern s32 D_801DB880;
extern s32 D_801DB89C;
extern s32 D_801DB8A0;
extern s32 D_801DB8A8;
extern s32 D_801DB884;
extern s32 D_801E16F0;
extern void func_801D606C();

void func_801D6000(s32 arg0, s32 arg1) {
    D_801E16F0 = arg0;
    D_801DB89C = 0;
    D_801DB8A0 = 0;
    D_801DB8A8 = 1;
    D_801DB880 = 0;
    D_801DB884 = 0;
    func_8013B570(arg0, 0x36, 0, 4, (s32)func_801D606C);
}
