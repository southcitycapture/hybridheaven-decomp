#include "common.h"

typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;
typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;
extern func_8024A4FC_Outer *D_801BBCD0;
extern const u8 D_8025CC18[];
extern const u8 D_8025CC50[];
extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8024A33C(void *arg0, s32 arg1);
extern void func_8024A418();
void func_8024A1B4(void *arg0, s32 arg1) {
    f32 v;

    v = *(f32 *)((u8 *)D_801BBCD0->unk2C + 4);
    if (v >= -560.0f) {
        func_8011AAF4(D_8025CC18, 0x291, arg0, 0, 1, 0.0f, (-549.0f), -184.0f, -29.0f, 0.0f, -300.0f, -500.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A418);
        return;
    }
    if (v <= -620.0f) {
        func_8011AAF4(D_8025CC50, 0x298, arg0, 0, 1, 0.0f, (-550.0f), -180.0f, 0.0f, 0.0f, (-605.0f), -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A33C);
    }
}
