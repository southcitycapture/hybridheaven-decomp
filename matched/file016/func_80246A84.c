#include "context.h"

extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80020718(s32);
s32 func_80126944(void);
extern f32 D_8024F12C;
extern f32 D_8024F500;
extern void func_80246ADC(s32 arg0, s32 arg1);

void func_80246A84(s32 arg0, s32 arg1) {
    D_8024F500 = D_8024F12C;
    if (func_80126944() == 1) {
        func_80020718(0x65B);
        func_800058DC(arg0, func_80246ADC);
    }
}
