#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E5090(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1D;
    }
    return 0x1C;
}
