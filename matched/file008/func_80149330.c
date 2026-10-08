#include "common.h"

s32 func_80126A0C(s32, u16, s32);                   /* extern */
s32 func_801492C8(s32);                             /* extern */

s32 func_80149330(s32 arg0) {
    s32 *unused;

    unused = &arg0;
    if (func_80126A0C(0, (u16)func_801492C8(arg0 & 0xFF), 0) == 0) {
        return 0;
    }
    return 1;
}
