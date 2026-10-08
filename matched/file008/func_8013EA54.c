#include "context.h"

s32 func_8013EA54(void) {
    s32 sp4;
    u8 *temp_v0;

    temp_v0 = &D_801BEB80[(u8) D_801BEC05 * 8];
    if (temp_v0[4] == 1) {
        sp4 = temp_v0[6];
    }
    return sp4;
}
