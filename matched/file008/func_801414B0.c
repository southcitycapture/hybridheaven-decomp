#include "context.h"

u8 func_80142240(u8 arg0);

u8 func_801414B0(u8 arg0) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_80142240(0);
b:
    return func_80142240(1);
d:
    return r;
}
