#include "common.h"

extern s32 func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801CE274();

s32 func_801E6694(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006E, 0, 0, 5.0f);
        return 0x18;
    }
    return 0x17;
}
