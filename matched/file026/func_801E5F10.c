#include "common.h"

extern u8 *D_801DAC4C;

s32 func_801E5F10(s32 arg0, s32 arg1) {
    u8 **pp;

    pp = (u8 **)&D_801DAC4C;
    *(s32 *)(*(u8 **)(*(u8 **)(*pp + 0x4) + 0x30) + 0x30) = 0;
    *(s32 *)(*(u8 **)(*(u8 **)(*pp + 0x4) + 0x30) + 0x28) = 0;
    if (func_801C0B8C(0x0294B4A0) != 0) {
        return 4;
    }
    return 3;
}
