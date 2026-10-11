#include "context.h"

extern s8 D_801BBD5A;

s32 func_80151B98(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 < 5) {
        D_801BBD5A = arg0;
        return 1;
    }
    return 0;
}
