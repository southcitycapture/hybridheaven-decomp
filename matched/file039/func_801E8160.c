#include "context.h"

s32 func_801E8160(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 0x35;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480067, 0, 0, 4.0f);
        D_801EA7AC = 1;
    }
    goto ret35;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(1, 0x03480079, 0, 0, 2.0f);
        D_801EA7AC = 2;
    }
    goto ret35;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480079, 0, 0x100, 10.0f);
        return 0x36;
    }
ret35:
    return 0x35;
}
