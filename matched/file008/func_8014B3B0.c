#include "context.h"

s32 func_8014B3B0(u16 arg0, u8 arg1) {
    u8 *temp_v0;

    temp_v0 = (u8 *)D_8014B7CC(arg0);
    if (temp_v0 != NULL) {
        temp_v0[8] = arg1;
        return 1;
    }
    return 0;
}
