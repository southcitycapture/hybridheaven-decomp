#include "common.h"

extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801EDE6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(2000000) != 0) {
        func_801CC470(3, 0x0348008C, 0, 0x1000, 2.0f);
        return 3;
    }
    return 2;
}
