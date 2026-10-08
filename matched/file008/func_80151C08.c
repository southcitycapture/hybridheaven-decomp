#include "common.h"

extern u8 D_801BBD5C;

s32 func_80151C08(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 < 2) {
        D_801BBD5C = arg0;
        return 1;
    }
    return 0;
}
