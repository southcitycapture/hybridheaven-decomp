#include "context.h"

extern s32 D_801EB9A4;

s32 func_801E6100(s32 arg0, s32 arg1) {
    if (D_801EB9A4 == 0) {
        goto case0;
    }
    if (D_801EB9A4 == 1) {
        goto case1;
    }
    return 0xA;
case0:
    if (func_801C0B8C(0x632EA0) == 0) {
        goto ret_a;
    }
    func_801CC4D8(1, 0x02A8005A, 0, 0, 30.0f);
    D_801EB9A4 = 1;
    goto ret_a;
case1:
    if (func_801CEDD4() != 0) {
        goto ret_a;
    }
    func_801CC470(1, 0x02A8005A, 0, 1, 1.0f);
    return 0xB;
ret_a:
    return 0xA;
}
