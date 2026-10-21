#include "context.h"

s32 func_80242AB8(u16 arg0) {
    u16 t;
    s32 r;
    arg0 = arg0 % 60;
    t = arg0;
    if (t < 0x14) r = 1;
    else if (t < 0x19) r = 0;
    else if (t < 0x23) r = 1;
    else if (t < 0x32) r = 0;
    else if (t < 0x37) r = 1;
    else r = 0;
    return r;
}
