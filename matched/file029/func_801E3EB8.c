#include "context.h"

extern u8 func_801DAAF0[];

s32 func_801E3EB8(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
    return 0x14;
}
