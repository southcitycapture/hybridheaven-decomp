#include "common.h"

extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E74E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012B1280) != 0) {
        func_801CC4D8(2, 0x01900016, 0, 0x1000, 15.0f);
        return 0x22;
    }
    return 0x21;
}
