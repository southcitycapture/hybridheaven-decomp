#include "context.h"
void func_801C5910(s32 arg0, s32 arg1);

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8013EF54();
extern u8 D_801CC9F8[];
extern u8 D_801CF190[];
extern s32 D_801CC8B4;

void func_801C5824(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 2) {
        func_8011AAF4(&D_801CF190, 0x833, arg0, 0, 1, 3.0f, 0.0f, 120.0f, -22.0f, 3.0f, 0.0f, 42.5f, 0.0f, 0.0f, 30.0f, -1, -1);
        func_8013EF54();
        D_801CC8B4 = func_80005670(arg0, D_801CC9F8);
        func_801C125C(-0x14);
        func_800058DC(arg0, (void *)func_801C5910);
    }
}
