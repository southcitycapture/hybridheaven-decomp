#include "context.h"

extern void func_8038D28C(s32 arg0);
extern s32 D_801F45A4;

s32 func_801EA69C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F45A4;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    if (state == 3) {
        goto case3;
    }
    return 5;
case0:
    func_8038D28C(0x66);
    D_801F45A4 = 1;
    goto ret5;
case1:
    if (func_801C0B8C(0xAAE5F) != 0) {
        func_8038D28C(0x15A);
        D_801F45A4 = 2;
    }
    goto ret5;
case2:
    if (func_801C0B8C(0x2191C0) != 0) {
        func_8038D28C(0x159);
        D_801F45A4 = 3;
    }
    goto ret5;
case3:
    return 6;
ret5:
    return 5;
}
