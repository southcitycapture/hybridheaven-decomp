#include "context.h"
s32 func_801C0D04(s32 arg0, s32 arg1);
extern s32 D_801E8468;
extern f32 D_801E846C;
s32 func_801C0B8C(u64 time);

s32 func_801E6F6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x14EAD16) != 0) {
        D_801E8468 = 0;
        D_801E846C = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
        func_801C0D04(4, 1);
        return 4;
    }
    return 3;
}
