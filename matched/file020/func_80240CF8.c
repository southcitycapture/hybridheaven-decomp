#include "context.h"

extern void func_8011AAF4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, s32 arg15, s32 arg16);
extern u8 D_802468E0[];
extern f32 D_80246A38;
extern f32 D_80246A3C;
extern f32 D_80246A40;
extern f32 D_80246A44;
extern f32 D_80246A48;
extern f32 D_80246A4C;
extern f32 D_80246A50;
extern f32 D_80246A54;
extern void func_80240DF4(void *arg0, void *arg1);

void func_80240CF8(void *arg0, s32 arg1) {
    if (func_801C3D20(D_80246A38, D_80246A3C, 5.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_802468E0, 0x1D1, arg0, 0, 1, 0.0f, D_80246A40, D_80246A44, D_80246A48, 0.0f, D_80246A4C, D_80246A50, D_80246A54, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, &func_80240DF4);
    }
}
