#include "common.h"

void func_801C09E4(u8 *arg0, u8 **arg1) {
    u8 *temp_v0;
    s16 temp_v1;

    temp_v0 = *(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C);
    temp_v1 = *(s16 *)(temp_v0 + 0x12);
    if ((temp_v1 & 0x1FFF) != 0x1000) {
        *(s16 *)(temp_v0 + 0x12) = temp_v1 + 0x10;
    }
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4C) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(s8 *)(*(u8 **)(*arg1 + 0x2C) + 0x4E) = (s8) ((s32) *(f32 *)(arg0 + 0x90) % 128);
    *(f32 *)(arg0 + 0x90) = (f32) ((f64) *(f32 *)(arg0 + 0x90) + 0.5);
}
