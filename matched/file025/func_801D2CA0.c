#include "context.h"

extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB334;
extern s32 D_801DB338;
extern s32 D_801DB33C;
extern void func_801D2CF4();

void func_801D2CA0(s32 arg0, s32 arg1) {
    D_801DB334 = 0;
    D_801DB338 = 0;
    D_801DB33C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D2CF4);
}
