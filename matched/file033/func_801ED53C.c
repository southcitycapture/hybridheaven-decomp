#include "context.h"

extern s32 func_801D5194();

s32 func_801ED53C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F34DC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x4C;
case0:
    func_801CC4D8(1, 0x0348003B, 0, 0, 15.0f);
    D_801F34DC = 1;
    goto ret4c;
case1:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348003B, 0, 0, 9.0f);
        D_801F34DC = 2;
    }
    goto ret4c;
case2:
    func_801D51F0(0);
    return 0x4D;
ret4c:
    return 0x4C;
}
