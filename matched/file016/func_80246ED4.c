#include "common.h"
extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80246C90(s32 arg0, s32 arg1);


void func_80246ED4(s32 arg0, s32 arg1) {
    if (func_801C3D20(18.0f, -18.0f, 15.0f) != 0) {
        return;
    }
    func_800058DC(arg0, func_80246C90);
}
