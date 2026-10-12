#include "context.h"

extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB354;
extern s32 D_801DB358;
extern s32 D_801DB35C;
extern void func_801D3024();

void func_801D2FD0(s32 arg0, s32 arg1) {
    D_801DB354 = 0;
    D_801DB358 = 0;
    D_801DB35C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D3024);
}
