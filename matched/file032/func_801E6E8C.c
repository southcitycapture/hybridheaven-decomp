#include "common.h"

s32 func_8038C9D8();
extern s16 D_80089354;

s32 func_801E6E8C(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 13;
    }
    D_80089354 = 0;
    return 14;
}
