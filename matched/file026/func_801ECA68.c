#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 scale);

s32 func_801ECA68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0508189AULL) != 0) {
        func_801CC470(0, 0x01B8000D, 0, 0, 2.5f);
        return 0xF;
    }
    return 0xE;
}
