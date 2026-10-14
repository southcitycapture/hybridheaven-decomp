#include "context.h"

extern void func_801FBB30();
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80246B64[];
extern f32 D_80246C10;
extern f32 D_80246C14;
extern f32 D_80246C18;
extern f32 D_80246C1C;
extern f32 D_80246C20;
extern f32 D_80246C24;
extern f32 D_80246C28;
extern void func_80243C84();

void func_80243B88(s32 arg0, s32 arg1) {
    if (func_801C3D20(-65.0f, D_80246C10, 25.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_80246B64, 0x249, arg0, 0, 1, 0.0f, D_80246C14, D_80246C18, D_80246C1C, 0.0f, D_80246C20, D_80246C24, D_80246C28, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, func_80243C84);
    }
}
