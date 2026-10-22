#include "context.h"

void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2);

#define ADIFF(a, b) ((((a) - (b)) & 0x200) ? ((b) - (a)) : ((a) - (b)))

void func_80131B24(u16 *arg0, u16 *arg1, u16 *arg2, u16 arg3, u16 arg4, u16 arg5) {
    u16 sum;
    u16 sum2;
    u16 pad;
    u16 x;
    u16 y;
    u16 z;

    sum = ADIFF(*arg0, arg3) & 0x3FF;
    sum += (u16)ADIFF(*arg1, arg4) & 0x3FF;
    sum += (u16)ADIFF(*arg2, arg5) & 0x3FF;
    x = *arg0;
    y = *arg1;
    z = *arg2;
    func_80131CC4(&x, &y, &z);
    sum2 = ADIFF(x, arg3) & 0x3FF;
    sum2 += (u16)ADIFF(y, arg4) & 0x3FF;
    sum2 += (u16)ADIFF(z, arg5) & 0x3FF;
    if (sum >= sum2) {
        *arg0 = x;
        *arg1 = y;
        *arg2 = z;
    }
}
