#include "common.h"

s32 func_801C37FC();
s32 func_8038C9D8();
extern s16 D_80089354;

s32 func_801E6CC0(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 9;
    }
    if (func_801C37FC() != 0) {
        return 9;
    }
    D_80089354 = 0;
    return 0xA;
}
