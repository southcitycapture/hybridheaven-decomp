#include "context.h"

extern s32 D_801DB710;
extern s32 D_801DB730;
extern s32 D_801DB734;
extern s32 D_801DB754;
extern s32 D_801DB718;
extern void func_801D5484();

void func_801D5420(s32 arg0, s32 arg1) {
    D_801DB710 = arg0;
    D_801DB730 = 0;
    D_801DB734 = 0;
    D_801DB754 = 1;
    D_801DB718 = 0;
    func_8013B570(arg0, 0x34, 0, 4, func_801D5484);
}
