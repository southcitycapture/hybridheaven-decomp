#include "common.h"

extern void func_800058DC(s32, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_80246CF8(void);

void func_80246C90(s32 arg0, s32 arg1) {
    if (func_801C3D20(18.0f, -18.0f, 10.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800058DC(arg0, func_80246CF8);
    }
}
