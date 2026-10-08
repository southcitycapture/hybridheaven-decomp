#include "context.h"

extern void func_8038D5F4(f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32);
extern s32 D_801ED100;

s32 func_801EA780(s32 arg0, s32 arg1) {
    func_8038D5F4(10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0x5A, 0x677, 4, 8, 0xA);
    D_801ED100 = 0;
    return 0x2D;
}
