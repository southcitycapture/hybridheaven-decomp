#include "context.h"

extern struct func_801E3474_Struct0 *D_801DAB14;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E3170(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = -6.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = -32.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = -194.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1800;
        func_801CC470(0, 0x0348004B, 0, 0, 3.5f);
        return 3;
    }
    return 2;
}
