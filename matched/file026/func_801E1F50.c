#include "common.h"

extern s16 D_80089354;
extern u8 D_801BBD54;

s32 func_801E1F50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}
