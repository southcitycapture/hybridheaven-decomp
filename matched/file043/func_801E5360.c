#include "common.h"

extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E5360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_801CC470(1, 0x03480012, 0, 0x10, 5.0f);
        return 4;
    }
    return 3;
}
