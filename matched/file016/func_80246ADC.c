#include "common.h"

extern f32 D_8024F500;
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80020718(s32);
s32 func_80126944(void);
extern void func_80246A84(s32 arg0, s32 arg1);
void func_80246ADC(s32 arg0, s32 arg1) {
    D_8024F500 = 100000.0f;
    if (func_80126944() != 1) {
        func_80020718(0x173);
        func_800058DC(arg0, func_80246A84);
    }
}
