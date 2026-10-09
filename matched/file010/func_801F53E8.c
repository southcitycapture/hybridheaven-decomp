#include "context.h"

s32 func_801F47EC(s32);

s32 func_801F53E8(s32 arg0) {
    u8 sp1E[3];
    s32 temp_v0;
    s32 var_v1;

    sp1E[2] = func_801F48C8(arg0, 0x1E);
    temp_v0 = func_801F47EC(arg0);
    if ((sp1E[2] == 1) && ((temp_v0 & 0xFF) == 1)) {
        var_v1 = 0;
    } else if ((sp1E[2] == 1) && ((temp_v0 & 0xFF) == 0)) {
        var_v1 = 1;
    } else if ((sp1E[2] == 0) && ((temp_v0 & 0xFF) == 1)) {
        var_v1 = 2;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
