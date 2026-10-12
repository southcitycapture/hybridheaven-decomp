#include "context.h"

extern u8 D_801BBD5B;

s32 func_80151BD0(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 < 5) {
        D_801BBD5B = arg0;
        return 1;
    }
    return 0;
}
