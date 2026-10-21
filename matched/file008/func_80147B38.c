#include "context.h"

void func_80147B38(u8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 *p;

    p = D_80181590 + arg0 * 0x18;
    p[0] = p[4] += arg1;
    p[1] = p[5] += arg2;
    p[2] = p[6] += arg3;
}
