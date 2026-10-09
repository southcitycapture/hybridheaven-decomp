#include "context.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern f32 D_801F5A2C;
extern f32 D_801F5A30;
extern u8 *D_801DAB14;

s32 func_801F0320(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = D_801F5A2C;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = D_801F5A30;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(0, 0x03480012, 0, 0x1001, 1.0f);
        return 3;
    }
    return 2;
}
