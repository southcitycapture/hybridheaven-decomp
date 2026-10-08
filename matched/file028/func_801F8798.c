#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D277C();

s32 func_801F8798(s32 arg0, s32 arg1) {
    if (func_801D277C() == 0) {
        func_801CC470(3, 0x03200012, 0, 0, 3.0f);
        return 0x18;
    }
    return 0x17;
}
