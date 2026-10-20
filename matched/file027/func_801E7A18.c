#include "common.h"

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E7A18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2932E0) != 0) {
        func_801CC470(3, 0x01B8000B, 6, 0x1001, 1.0f);
        return 0xD;
    }
    return 0xC;
}
