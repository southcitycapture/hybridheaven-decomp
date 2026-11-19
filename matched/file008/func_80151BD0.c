#include "common.h"


extern u8 D_801BBD5B;

s32 func_80151BD0(s32 arg0) {
    s32 *p;

    p = &arg0;
    *p &= 0xFF;
    if (*p < 5) {
        D_801BBD5B = *p;
        return 1;
    }
    return 0;
}
