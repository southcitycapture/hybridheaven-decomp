#include "context.h"
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
void func_801D2710();
extern u8 func_801DAAF0[];

s32 func_801E70B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x19F0A0) != 0) {
        func_801D2710(1);
        func_801CC470(2, 0x0320000E, 0, 0, 2.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1D79;
        return 0x25;
    }
    return 0x24;
}
