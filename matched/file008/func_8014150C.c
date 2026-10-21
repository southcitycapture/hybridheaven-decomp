#include "context.h"
u8 func_801422E4(u8 arg0, s32 arg1);

extern u8 func_80142350();

s32 func_8014150C(u8 arg0, u8 *arg1) {
    u8 r;
    r = 0;
    if (arg0 == 1) goto a;
    if (arg0 != 2) goto d;
    goto b;
a:
    return func_801422E4(0, (s32)arg1);
b:
    return func_801422E4(1, (s32)arg1);
d:
    return r;
}
