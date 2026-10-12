#include "context.h"

extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB314;
extern s32 D_801DB318;
extern s32 D_801DB31C;
extern void func_801D29C4();

void func_801D2970(s32 arg0, s32 arg1) {
    D_801DB314 = 0;
    D_801DB318 = 0;
    D_801DB31C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D29C4);
}
