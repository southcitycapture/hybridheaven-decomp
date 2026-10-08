#include "common.h"

void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
s32 func_801CE274();

s32 func_801E4A88(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}
