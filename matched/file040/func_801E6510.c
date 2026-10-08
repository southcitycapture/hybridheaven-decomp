#include "common.h"

extern s32 func_801CE274();
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E6510(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80024, 0, 0, 2.0f);
        return 0x14;
    }
    return 0x13;
}
