#include "context.h"

extern s32 D_800308D0(void *);

s32 func_80002D00(u8 arg0) {
    s32 r;
    u8 *p;

    p = D_8005CE70 + arg0 * 0x68;
    r = func_80032FB0(D_8005CE20, p, arg0);
    if (r == 10) {
        r = D_800308D0(p);
    }
    switch (r) {
    case 0: r = 0; break;
    case 1: r = 1; break;
    case 2: r = 2; break;
    case 4: r = 3; break;
    case 10: r = 5; break;
    case 11: r = 4; break;
    default: r = 0; break;
    }
    return r;
}
