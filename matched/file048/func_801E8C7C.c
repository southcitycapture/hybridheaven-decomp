#include "common.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801E9FFC;

s32 func_801E8C7C(s32 arg0, s32 arg1) {
    if (D_801E9FFC >= 0x13) {
        func_801CC4D8(0, 0x019100CD, 0, 0, 5.0f);
        return 0x2B;
    }
    D_801E9FFC += 1;
    return 0x2A;
}
