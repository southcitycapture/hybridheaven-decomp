#include "common.h"

f64 func_80034C24(u64 arg0);
s32 func_801C0DE4(s32 arg0, s32 arg1, f32 arg2);
void func_801C0EB0(s32 arg0, s32 arg1);
u64 func_801C0F18(s32 arg0, s32 arg1);
extern f64 D_801E8950;
extern f32 D_801E8958;
extern u8 func_801DAAF0[];

s32 func_801E70BC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 1, 5.0f) != 0) {
        func_801C0EB0(4, 1);
        return 0x29;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = (f32) (func_80034C24(func_801C0F18(4, 1)) / D_801E8950) / 5.0f * 178.0f + D_801E8958;
    return 0x28;
}
