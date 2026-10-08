#include "context.h"

extern f32 D_80208DCC;

s32 func_801FE3D8(s32 arg0, s32 arg1) {
    f32 scale;

    if (func_801C0B8C(0x7704C0) != 0) {
        scale = D_80208DCC;
        func_801C4028(0, -7.0f, 9.0f, -12.0f, 0x22, 0xB, 0x48, scale, scale, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x25;
    }
    return 0x24;
}
