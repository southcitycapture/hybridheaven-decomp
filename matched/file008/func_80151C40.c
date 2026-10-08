#include "common.h"

extern u8 D_801BBD5D;

s32 func_80151C40(u8 arg0) {
    arg0 = arg0 & 0xFF;
    if (arg0 < 4) {
        D_801BBD5D = arg0;
        return 1;
    }
    return 0;
}
