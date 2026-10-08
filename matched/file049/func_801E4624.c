#include "common.h"

extern s32 func_801CE274();
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E7144;

s32 func_801E4624(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100034, 0, 0, 5.0f);
        D_801E7144 = 0;
        return 0x13;
    }
    return 0x12;
}
