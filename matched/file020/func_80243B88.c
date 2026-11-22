#include "common.h"

extern const u8 D_80246B64[];
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30();
extern void func_80243C84();
void func_80243B88(s32 arg0, s32 arg1) {
    if (func_801C3D20(-65.0f, 295.0f, 25.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_80246B64, 0x249, arg0, 0, 1, 0.0f, (-138.800003f), 17.2000008f, 370.200012f, 0.0f, (-43.7999992f), 28.7999992f, 271.299988f, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, func_80243C84);
    }
}
