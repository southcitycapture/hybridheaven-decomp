#include "common.h"
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 D_80248800;
extern s32 D_80248804;
extern void func_800058DC(void *, void (*)(void));
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern void func_801512CC(s32, f32, f32, f32);
extern s32 func_80151790(s32);
void func_8024231C(void *arg0, s32 arg1);


/* context.h declares func_80242158 as an array, conflicting with this definition. */
extern u8 D_80247820[];
extern u8 D_8024785C[];
extern u8 D_8024684C[];
extern u8 D_8024693C[];
extern f32 D_80248254;
extern f32 D_80248258;
extern f32 D_8024825C;

void func_80242158(void *arg0, s32 arg1) {
    if (func_80151790(D_80248800) == 0) {
        func_8015122C(D_80248800, D_8024684C, 0xF);
    }
    if (D_8011AAF4(D_80247820, 0x41E, arg0, 0, 2, D_80248254, D_80248258, D_8024825C, -25.8f, 4294967296.0f, -0.7f, 15.8f, -31.8f, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_8024785C, 0x423, arg0, 0, 1, 0.0f, -9.1f, 12.2f, 7.2f, 0.0f, 0.4f, 16.0f, 12.2f, 0.0f, 35.0f, -1, -1);
        func_801512CC(D_80248804, 1.0f, 0.0f, 12.0f);
        func_8015115C(D_80248804, D_8024693C);
        func_80020718(0x215);
        func_800058DC(arg0, (void (*)(void))func_8024231C);
    }
}
