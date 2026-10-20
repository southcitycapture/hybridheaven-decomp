#include "context.h"

extern u8 D_8025CC88[];
extern f32 D_8025CD5C;
extern f32 D_8025CD60;
extern f32 D_8025CD64;
extern void func_8024A1B4(void *, s32);

void func_8024A33C(void *arg0, s32 arg1) {
    if (D_8025CD5C <= *(f32 *)((u8 *)D_801BBCD0->unk2C + 4)) {
        func_8011AAF4(D_8025CC88, 0x2A6, arg0, 0, 1,
            0.0f, D_8025CD60, -180.0f, -30.0f, 0.0f,
            D_8025CD64, -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A1B4);
    }
}
