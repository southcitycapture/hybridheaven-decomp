#include "context.h"

extern void func_800058DC(s32, void (*)(void));
extern void func_80020718(s32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB30(void);
extern u8 D_80389854[];
extern f32 D_803898E8;
extern f32 D_803898EC;
extern f32 D_803898F0;
extern f32 D_803898F4;
extern f32 D_803898F8;
extern f32 D_803898FC;
extern void func_8037D1DC(void);

void func_8037D0F8(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80389854, 0x21C, arg0, 0, 1, 1.0f, D_803898E8, D_803898EC, D_803898F0, 1.0f, D_803898F4, D_803898F8, D_803898FC, 0.0f, 35.0f, -1, -1) == 0) {
        func_80020718(8);
        func_801FBB30();
        func_800058DC(arg0, func_8037D1DC);
    }
}
