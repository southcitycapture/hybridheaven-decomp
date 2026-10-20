#include "context.h"

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80258140[];
extern f32 D_80258250;
extern f32 D_80258254;
extern f32 D_80258258;
extern f32 D_8025825C;
extern f32 D_80258260;
extern f32 D_80258264;
extern f32 D_80258268;

void func_80241130(void * volatile arg0, s32 volatile arg1) {
    if (func_8011AAF4(D_80258140, 0x14F, arg0, 0, 2,
        D_80258250, D_80258254, D_80258258, D_8025825C,
        D_80258260, D_80258264, D_80258268, 450.0f, 0.0f, 35.0f,
        -1, -1) == 0) {
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *)func_80241214);
    }
}
