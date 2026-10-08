#include "common.h"

s32 func_8038C9D8();
extern s16 D_80089354;

s32 func_801E6AD0(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}
