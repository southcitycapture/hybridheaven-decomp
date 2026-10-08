#include "common.h"

s32 func_801C0D04(s32 arg0, s32 arg1);
s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E8468;
extern f32 D_801E846C;
extern s32 func_801DAAF0[];

s32 func_801E7158(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01F7080B) != 0) {
        D_801E8468 = 0;
        D_801E846C = *(f32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
        func_801CC4D8(1, 0x02A80039, 0, 0, 5.0f);
        func_801C0D04(4, 1);
        return 6;
    }
    return 5;
}
