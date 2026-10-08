#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801EF268(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04B05BAA) != 0) {
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 6.0f);
        return 6;
    }
    return 5;
}
