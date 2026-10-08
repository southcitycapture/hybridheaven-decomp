#include "common.h"

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E583C;

s32 func_801E3F80(s32 arg0, s32 arg1) {
    if (D_801E583C >= 0x1F) {
        func_801CC4D8(0, 0x04100044, 0, 0, 5.0f);
        return 6;
    }
    D_801E583C += 1;
    return 5;
}
