#include "context.h"

extern u8 func_801DAAF0[];

s32 func_801F7B88(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 4) {
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 0x24) + 0x2C) + 0x12) = 0;
        return 5;
    }
    return 4;
}
