#include "context.h"
void *func_8014B7CC(s32);

s32 func_8014B2CC(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return temp_v0[1];
    }
    return 0xFF00;
}
