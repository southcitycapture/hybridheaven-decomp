#include "common.h"

s32 func_8023A1D4(u8 *arg0) {
    s32 var_v1;
    u8 *var_v0;

    var_v0 = arg0;
    var_v1 = 0;
    if (*arg0 != 0) {
        do {
            var_v0++;
            var_v1++;
        } while (*var_v0 != 0);
    }
    return var_v1;
}
