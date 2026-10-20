#include "context.h"

extern u8 func_80142350();

u8 func_80141568(u8 arg0) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_80142350(0);
b:
    return func_80142350(1);
d:
    return r;
}
