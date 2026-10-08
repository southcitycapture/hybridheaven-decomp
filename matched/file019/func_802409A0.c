#include "common.h"

extern s32 func_801C3D90();
extern void func_800058DC(void *arg0, void *arg1);
extern void func_802409DC();

void func_802409A0(void *arg0, s32 arg1) {
    if (func_801C3D90() != 0) {
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_802409DC);
    }
}
