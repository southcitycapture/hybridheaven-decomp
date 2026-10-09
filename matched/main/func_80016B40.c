#include "context.h"

void func_80016B40(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = (arg1 >> 3) + arg0;
    *temp_v0 |= 1 << (arg1 & 7);
}
