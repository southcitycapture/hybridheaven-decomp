#include "common.h"

extern u16 D_8017DC40;

s32 func_803879D0(u8 arg0, u16 arg1) {
    s32 temp_lo;

    temp_lo = (D_8017DC40 * arg0) / 100;
    if (temp_lo < arg1) {
        return arg1;
    }
    return temp_lo & 0xFFFF;
}
