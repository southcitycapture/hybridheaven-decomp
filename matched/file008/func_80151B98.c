#include "common.h"
extern s8 D_801BBD5A;


s32 func_80151B98(s32 arg0) {
    s32 *p = &arg0;
    *p &= 0xFF;
    if (*p < 5) {
        D_801BBD5A = *p;
        return 1;
    }
    return 0;
}
