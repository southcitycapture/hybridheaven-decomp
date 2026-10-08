#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
extern f64 D_801E5080;

s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 1, 0x40200000) != 0) {
        func_801C0EB0(4, 1);
        return 4;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *) func_801DAAF0.unk24 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 1)) / D_801E5080) / 2.5f) * 13.0f) + -32.0f);
    return 3;
}
