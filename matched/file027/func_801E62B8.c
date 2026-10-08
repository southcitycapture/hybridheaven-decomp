#include "common.h"

extern u8 func_801DAAF0[];

s32 func_801E62B8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
    if ((f64) *(f32 *)(temp_v1 + 0xC) > 20.0) {
        *(f32 *)(temp_v1 + 0x4) = 5120.0f;
        return 0x24;
    }
    return 0x23;
}
