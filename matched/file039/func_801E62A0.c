#include "context.h"

s32 func_801E62A0(s32 arg0, s32 arg1) {
    if (D_801EA6EC == 0) {
        goto case0;
    }
    if (D_801EA6EC == 1) {
        goto case1;
    }
    if (D_801EA6EC == 2) {
        goto case2;
    }
    return 6;
case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006D, 0, 0, 3.0f);
        D_801EA6EC = 1;
    }
    goto ret6;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348006B, 0, 0, 3.0f);
        D_801EA6EC = 2;
    }
    goto ret6;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006B, 0, 0x100, 5.0f);
        return 7;
    }
ret6:
    return 6;
}
