#include "context.h"

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
