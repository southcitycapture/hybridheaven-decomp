#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern u8 func_801DAAF0[];

s32 func_801E4BBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB4D110) != 0) {
        func_801CC470(0, 0x01680040, 0, 1, 1.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1BD2;
        return 0xE;
    }
    return 0xD;
}
