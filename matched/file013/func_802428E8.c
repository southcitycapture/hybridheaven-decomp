#include "common.h"

extern void func_80005700(s32 arg0);
extern s32 func_80133A24(s32 arg0);
extern s32 func_80126CC0(s32 arg0, void *arg1);
extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);
extern void func_80242958(void);

void func_802428E8(s32 arg0, s32 arg1) {
    if (func_80133A24(8) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8013B570(arg0, 0x51, 2, 3, func_80242958);
    }
}
