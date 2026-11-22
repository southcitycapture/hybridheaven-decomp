#include "common.h"

extern u8 D_80252014[];
extern u8 D_80258140[];
extern void func_800058DC(void *, void *);
extern void func_800179B0(void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80241214(void);
void func_80241130(void * volatile arg0, s32 volatile arg1) {
    if (func_8011AAF4(D_80258140, 0x14F, arg0, 0, 2,
        0.187878788f, 45.2999992f, 17.6000004f, 465.600006f,
        0.186363637f, 50.2999992f, 16.2000008f, 450.0f, 0.0f, 35.0f,
        -1, -1) == 0) {
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *)func_80241214);
    }
}
