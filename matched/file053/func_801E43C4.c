#include "common.h"

s32 func_801CE274(void);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E43C4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}
