#include "context.h"

extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f32 D_801FC2DC;
extern f32 D_801FC2E0;
extern f32 D_801FC2E4;
extern f32 D_801FC2E8;
extern f32 D_801FC2EC;
extern f32 D_801FC2F0;
extern f32 D_801FC2F4;

s32 func_801E7DF8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x040D9900) != 0) {
        func_8038BD50(D_801FC2DC, D_801FC2E0, -40.1f);
        D_8038BD88(D_801FC2E4, D_801FC2E8, -5.7f);
        return 0xB;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + D_801FC2EC;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + D_801FC2F0;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + D_801FC2F4;
    return 0xA;
}
