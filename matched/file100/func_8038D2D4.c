#include "common.h"

s32 func_80020DAC(s32);                             /* extern */

s32 func_8038D2D4(s32 arg0) {
    s32 var_v1;
    s32 *unused;

    unused = &arg0;
    if (func_80020DAC(arg0 & 0xFFFF) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
