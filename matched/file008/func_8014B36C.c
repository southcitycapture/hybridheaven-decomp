#include "context.h"

u8 *func_8014B7CC(s32);

s32 func_8014B36C(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a0;

    temp_a0 = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        *temp_v0 |= 0x10;
        return 1;
    }
    return 0;
}
