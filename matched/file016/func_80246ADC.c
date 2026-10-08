#include "context.h"

extern void func_80020718(s32);
extern s32 func_80126944(void);
extern f32 D_8024F130;

void func_80246ADC(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F130;
    if (func_80126944() != 1) {
        func_80020718(0x173);
        func_800058DC(arg0, func_80246A84);
    }
}
