#include "context.h"

extern f32 D_80208DD0;

s32 func_801FE690(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0x84C060) != 0) {
        temp = D_80208DD0;
        func_801C4028(0, -13.0f, 8.0f, -16.0f, 0x161, 0x14, 0x14E, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x29;
    }
    return 0x28;
}
