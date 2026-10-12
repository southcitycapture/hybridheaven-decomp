#include "context.h"
extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

extern s32 D_801E1400;
extern s32 D_801DB258;
extern s32 D_801DB25C;
extern s32 D_801DB280;
extern s32 D_801DB240;
extern void func_801D2304();

void func_801D22A0(s32 arg0, s32 arg1) {
    D_801E1400 = arg0;
    D_801DB258 = 0;
    D_801DB25C = 0;
    D_801DB280 = 1;
    D_801DB240 = 0;
    func_8013B570(arg0, 0x32, 0, 4, func_801D2304);
}
