#include "context.h"

s32 func_801E8380(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA7AC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x3A;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        D_801EA7AC = 1;
    }
    goto ret3A;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        D_801EA7AC = 2;
    }
    goto ret3A;
case2:
    if (func_801D51A4() != 0) {
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        return 0x3B;
    }
ret3A:
    return 0x3A;
}
