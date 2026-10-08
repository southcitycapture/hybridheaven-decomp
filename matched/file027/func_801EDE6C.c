#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801EDE6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(2000000) != 0) {
        func_801CC470(3, 0x0348008C, 0, 0x1000, 2.0f);
        return 3;
    }
    return 2;
}
