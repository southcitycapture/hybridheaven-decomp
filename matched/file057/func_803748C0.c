#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8037488C(s32);
extern u8 D_801BBBF0[];

void func_803748C0(s32 arg0) {
    u8 *temp_a2;
    u8 *temp_v0;

    temp_a2 = *(u8 **)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x2C);
    temp_v0 = *(u8 **)(*(u8 **)(temp_a2 + 0x24) + 0x2C);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x34) = *(f32 *)(temp_v0 + 0x4);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x38) = *(f32 *)(temp_v0 + 0x8);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x3C) = *(f32 *)(temp_v0 + 0xC);
    *(s16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x40) = *(s16 *)(temp_v0 + 0x12);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x44) = func_8001EAD0(*(s16 *)(temp_v0 + 0x12));
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x48) = func_8001EB64(*(s16 *)(temp_v0 + 0x12));
    func_8037488C(arg0);
}
