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
extern const u8 D_8025CC88[];
extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8024A1B4(void *, s32);
void func_8024A33C(void *arg0, s32 arg1) {
    if ((-610.0f) <= *(f32 *)((u8 *)D_801BBCD0->unk2C + 4)) {
        func_8011AAF4(D_8025CC88, 0x2A6, arg0, 0, 1,
            0.0f, (-550.0f), -180.0f, -30.0f, 0.0f,
            (-605.0f), -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_8024A1B4);
    }
}
