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
