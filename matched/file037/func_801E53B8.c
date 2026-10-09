#include "context.h"

extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E53B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = -42.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 42.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0xB3E;
        func_801CC4D8(1, 0x02A80032, 0, 0, 5.0f);
        return 4;
    }
    return 3;
}
