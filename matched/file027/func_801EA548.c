#include "context.h"

s32 func_801EA548(s32 arg0, s32 arg1) {
    if (D_801F45A4 == 0) {
        goto case0;
    }
    if (D_801F45A4 == 1) {
        goto case1;
    }
    return 1;
case0:
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038D28C(0x158);
        D_801F45A4 = 1;
    }
    goto done;
case1:
    return 2;
done:
    return 1;
}
