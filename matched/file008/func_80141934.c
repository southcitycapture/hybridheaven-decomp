#include "context.h"

s32 func_8014150C(u8, u8 *);

s32 func_80141934(u8 arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 buf[25];

    var_v0 = func_8014150C(arg0, buf);
    var_v1 = var_v0 & 0xFF;
    if (var_v0 == 2) {
        var_v0 = func_8014150C(arg0, buf);
        var_v1 = var_v0 & 0xFF;
    }
    if (((buf[0] + buf[8] + buf[16] + buf[24]) == 0) && (var_v0 == 0)) {
        var_v1 = 0xFD;
    }
    return var_v1;
}
