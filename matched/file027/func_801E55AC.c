#include "common.h"

extern s32 func_801C2F4C();
extern s32 func_801C2F60();
extern f32 D_801F3DE0;
extern u8 func_801DAAF0[];

s32 func_801E55AC(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        *(f32 *)((u8 *)*(void **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = sp1C + D_801F3DE0;
        return 0x13;
    }
    return 0x14;
}
