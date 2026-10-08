#include "common.h"

extern s32 func_801CE274();
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E6CC4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B80032, 0, 0, 10.0f);
        return 9;
    }
    return 8;
}
