#include "context.h"

extern u8 D_8025CC18[];
extern u8 D_8025CC50[];
extern f32 D_8025CD50;
extern f32 D_8025CD54;
extern f32 D_8025CD58;
extern void func_8024A33C(void *arg0, s32 arg1);

void func_8024A1B4(void *arg0, s32 arg1) {
    f32 v;

    v = *(f32 *)((u8 *)D_801BBCD0->unk2C + 4);
    if (v >= -560.0f) {
        func_8011AAF4(D_8025CC18, 0x291, arg0, 0, 1, 0.0f, D_8025CD50, -184.0f, -29.0f, 0.0f, -300.0f, -500.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A418);
        return;
    }
    if (v <= -620.0f) {
        func_8011AAF4(D_8025CC50, 0x298, arg0, 0, 1, 0.0f, D_8025CD54, -180.0f, 0.0f, 0.0f, D_8025CD58, -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A33C);
    }
}
