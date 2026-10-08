#include "common.h"

extern u8 D_80181ABC[];

s32 func_80148768(s32 arg0) {
    s32 var_v1;
    s32 *unused;
    u8 *base;

    unused = &arg0;
    base = D_80181ABC;
    for (var_v1 = 0; var_v1 < 0x3C; ) {
        if ((arg0 & 0xFF) == base[var_v1 * 6 + 1]) {
            break;
        }
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}
