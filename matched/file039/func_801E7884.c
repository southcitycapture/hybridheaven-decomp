#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E7884(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0xEF901F) != 0) {
        func_801CC470(1, 0x03480016, 0, 0, 4.0f);
        return 0x20;
    }
    return 0x1F;
}
