#include "context.h"

void func_8023B5B4(s32 arg0) {
    s32 *ptr = &arg0;
    u8 *base;
    u8 off;

    base = (u8 *) &D_80240880;
    off = base[0x20];
    base[off + 0x1B] = (s8) (arg0 - 1);
}
