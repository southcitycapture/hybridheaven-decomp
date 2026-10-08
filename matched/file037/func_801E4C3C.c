#include "context.h"

extern u8 D_801DAB14[];

s32 func_801E4C3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC7E3E0) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x4) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = -2.0f;
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xF;
    }
    return 0xE;
}
