#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CE274();

s32 func_801E5E70(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480059, 0, 0, 3.0f);
        return 0x13;
    }
    return 0x12;
}
