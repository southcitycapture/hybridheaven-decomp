#include "common.h"

extern u8 *D_801DAB14;
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801F0320(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = 2.4000001f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = (-9.60000038f);
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(0, 0x03480012, 0, 0x1001, 1.0f);
        return 3;
    }
    return 2;
}
