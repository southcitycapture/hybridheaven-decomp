#include "context.h"
extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_8024A4FC_Inner {
    u8 pad[0x8];
    f32 unk8;
} func_8024A4FC_Inner;
typedef struct func_8024A4FC_Outer {
    u8 pad[0x2C];
    func_8024A4FC_Inner *unk2C;
} func_8024A4FC_Outer;
extern func_8024A4FC_Outer *D_801BBCD0;

extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern u8 D_8025CB70[];
extern f32 D_8025CD38;
extern f32 D_8025CD3C;
extern void func_80249FF4();

void func_80249EF8(void *arg0, s32 arg1) {
    if (D_8025CD38 <= *(f32 *)(*(u8 **)((u8 *)D_801BBCD0 + 0x2C) + 4)) {
        func_8011AAF4(D_8025CB70, 0x25F, arg0, 0, 1, 0.0f, D_8025CD3C, -197.0f, -40.0f, 0.0f, D_8025CD38, -179.0f, -5.0f, 0.0f, 55.0f, -1, -1);
        func_801C3B2C(2);
        func_801C3B10(1);
        func_80020718(0x65D);
        func_800208C4(0x49);
        func_800058DC(arg0, &func_80249FF4);
    }
}
