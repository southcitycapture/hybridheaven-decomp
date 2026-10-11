#include "common.h"

extern s16 D_80089354;
extern u8 D_801BBD54;

s32 func_801F18F0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    D_80089354 = 0;
    return 4;
}
