#include "context.h"
u8 func_801423C8(u8 arg0, u8 arg1);

s32 func_801415C4(arg0, arg1)
u8 arg0;
u8 arg1;
{
    if (arg0 == 1) goto l1;
    if (arg0 != 2) goto l3;
    goto l2;
l1:
    return func_801423C8(0, arg1);
l2:
    return func_801423C8(1, arg1);
l3:
    return 0;
}
