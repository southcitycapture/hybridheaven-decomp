#include "common.h"

extern s32 func_801CE274();
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E3A8C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480019, 0, 0, 1.0f);
        return 8;
    }
    return 7;
}
