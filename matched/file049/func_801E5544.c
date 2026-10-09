#include "context.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801E7744;
extern f32 D_801E7748;
extern u8 *D_801DAB14;

s32 func_801E5544(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = D_801E7744;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = D_801E7748;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
