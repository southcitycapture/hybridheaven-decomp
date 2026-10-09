#include "common.h"

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E69C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01AABCCB) != 0) {
        func_801CC470(0, 0x03480046, 0, 0x100, 5.0f);
        return 0x25;
    }
    return 0x24;
}
