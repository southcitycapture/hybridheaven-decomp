#include "context.h"

void *func_8014B7CC(s32);

s32 func_8014B3F0(s32 arg0) {
    void *temp_v0;
    s32 *temp_a;

    temp_a = &arg0;
    temp_v0 = func_8014B7CC(arg0 & 0xFFFF);
    if (temp_v0 != NULL) {
        return ((u8 *)temp_v0)[8];
    }
    return 0xFF00;
}
