#include "context.h"

extern f32 D_80208DC0;

s32 func_801FDB00(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0x5F5E10) != 0) {
        temp = D_80208DC0;
        func_801C4028(0, 30.0f, 33.0f, -19.0f, 0, 0, 7, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x17;
    }
    return 0x16;
}
