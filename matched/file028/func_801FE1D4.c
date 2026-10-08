#include "context.h"

extern f32 D_80208DC4;

s32 func_801FE1D4(s32 arg0, s32 arg1) {
    f32 f;

    if (func_801C0B8C(0x73F780) != 0) {
        f = D_80208DC4;
        func_801C4028(0, -8.0f, 24.0f, -14.0f, 0, 0, 0x3C, f, f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x22;
    }
    return 0x21;
}
