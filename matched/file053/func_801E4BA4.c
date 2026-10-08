#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE284();

s32 func_801E4BA4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x1C;
    }
    return 0x1B;
}
