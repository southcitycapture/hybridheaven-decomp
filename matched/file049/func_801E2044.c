#include "common.h"

extern void func_8038BD50(f32, f32, f32);
extern void D_8038BD88(f32, f32, f32);
extern u8 func_801DAAF0[];
extern f32 D_801E7770[];
extern f32 D_801E7780[];

void func_801E2044(void) {
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    func_8038BD50(D_801E7770[0] + *(f32 *)(temp_v0 + 0x4), D_801E7770[1] + *(f32 *)(temp_v0 + 0x8), D_801E7770[2] + *(f32 *)(temp_v0 + 0xC));
    temp_v0_2 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    D_8038BD88(D_801E7780[0] + *(f32 *)(temp_v0_2 + 0x4), D_801E7780[1] + *(f32 *)(temp_v0_2 + 0x8), D_801E7780[2] + *(f32 *)(temp_v0_2 + 0xC));
}
