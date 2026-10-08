#include "common.h"

extern u8 func_801DAAF0[];

s32 func_801E6320(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 5120.0f;
    return 0x1E;
}
