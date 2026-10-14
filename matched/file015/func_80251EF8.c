#include "context.h"

extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern f64 D_8025A258;
extern f64 D_8025A260;
extern f32 D_8025A268;

void func_80251EF8(void) {
    u8 pad[4];
    s32 sp50;

    sp50 = func_8012C6B4(0x64);
    func_80129FB8((f32) (((f64) (sp50 - 0x32) / 10.0) + D_8025A258), -130.0f, (f32) (((f64) (func_8012C6B4(0x64) - 0x32) / 10.0) + D_8025A260), 0.0f, 1.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0xFF, 0x14, 0xFF, 0x76, 0xDC, -7, D_8025A268, 0x15, 0);
}
