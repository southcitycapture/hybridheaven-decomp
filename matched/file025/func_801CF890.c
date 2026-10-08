#include "context.h"

extern s32 D_801DAEB0;
extern s32 D_801DAECC;
extern s32 D_801DAED0;
extern s32 D_801DAEF0;
extern s32 D_801DAEF4;
extern void func_801CF8F4(void);

void func_801CF890(s32 arg0, s32 arg1) {
    D_801DAEB0 = arg0;
    D_801DAECC = 0;
    D_801DAED0 = 0;
    D_801DAEF0 = 1;
    D_801DAEF4 = 0;
    func_8013B570(arg0, 0x11C, 0, 4, func_801CF8F4);
}
