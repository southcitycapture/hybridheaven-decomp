#include "context.h"

/* Forward declaration only: the struct is defined later in the file by func_801E7ECC.
   Members are reached through byte-offset casts so no struct definition is needed here. */
struct func_801E7ECC_Struct1;
extern struct func_801E7ECC_Struct1 D_801BBBF0;
extern f32 D_801FC14C;
extern f32 D_801FC150;
extern f32 D_801FC154;
extern f32 D_801FC158;
extern f32 D_801FC15C;
extern f32 D_801FC160;

s32 func_801E755C(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    if (func_801C0B8C(0x020545E0) != 0) {
        func_8038BD50(-193.0f, D_801FC14C, -24.2f);
        D_8038BD88(D_801FC150, D_801FC154, -5.6f);
        return 6;
    }
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x30) = *(f32 *)(temp_v1 + 0x30) + D_801FC158;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x34) = *(f32 *)(temp_v1 + 0x34) + D_801FC15C;
    temp_v1 = *(u8 **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE8) + 0x2C);
    *(f32 *)(temp_v1 + 0x38) = *(f32 *)(temp_v1 + 0x38) + D_801FC160;
    return 5;
}
