#include "context.h"

extern u8 D_80247898[];
extern u8 D_802478D4[];
extern f32 D_80248280;
extern f32 D_80248284;
extern f32 D_80248288;
extern f32 D_8024828C;
extern f32 D_80248290;
extern f32 D_80248294;
extern f32 D_80248298;
extern f32 D_8024829C;
extern void func_80242488();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8024231C(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247898, 0x435, arg0, 0, 2, D_80248280, D_80248284, 13.0f, -3.0f, 4294967296.0f, D_80248288, 16.0f, D_8024828C, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_802478D4, 0x43A, arg0, 0, 1, 0.0f, D_80248290, D_80248294, 27.5f, 0.0f, D_80248298, 15.0f, D_8024829C, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242488);
    }
}
