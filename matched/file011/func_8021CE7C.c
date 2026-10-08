#include "context.h"

extern void func_800058DC(void *obj, void *fn);
extern void func_8021CEF4();

void func_8021CE7C(func_8021CDE8_Struct *arg0, s32 arg1) {
    if (arg0->unkAE != 0 && arg0->unkAF == 0 && arg0->unk9B == 0) {
        arg0->unkB0 = arg0->unkB0 - 1;
        if (arg0->unkB0 < 0) {
            func_80126E88(0x125);
            func_800058DC(arg0, func_8021CEF4);
        }
    }
}
