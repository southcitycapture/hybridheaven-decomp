#define func_80247754 func_80247754_ctx
#include "context.h"
#undef func_80247754

extern u8 D_8025C2C8[];
extern f32 D_8025C5C4;
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_80247754_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x90 - 0x60];
    s16 unk90;
} func_80247754_Struct;

void func_80247754(func_80247754_Struct *arg0, s32 arg1) {
    s32 sp6C;
    f32 sp60[3];
    s16 t;

    sp6C = arg0->unk5C;
    if (func_80244F28((s32)arg0) == 0) {
        func_80010550(arg1, sp6C);
        func_8013A334(sp60, arg1, sp6C, 6);
        D_8011AAF4(D_8025C2C8, 0x4D8, arg0, 0, 1, 4.0f, 80.0f, 219.0f, D_8025C5C4, 4294967296.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1);
        t = arg0->unk90;
        arg0->unk90 = t - 1;
        if (t == 0) {
            arg0->unk90 = 0x40;
            func_800058DC(arg0, func_8024786C);
        }
    }
}
