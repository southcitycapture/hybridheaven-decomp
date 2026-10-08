#include "context.h"

extern s32 D_801E9148;

s32 func_801E837C(s32 arg0, s32 arg1) {
    if (D_801E9148 == 0) {
        goto case0;
    }
    if (D_801E9148 == 1) {
        goto case1;
    }
    if (D_801E9148 == 2) {
        goto case2;
    }
    return 6;
case0:
    if (func_801C0B8C(0xCF8500) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B1);
    D_801E9148 = 1;
    goto ret6;
case1:
    if (func_801C0B8C(0xE66860) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B2);
    D_801E9148 = 2;
    goto ret6;
case2:
    if (func_801C0B8C(0xF5AAA0) == 0) {
        goto ret6;
    }
    func_8038D28C(0x1B3);
    return 7;
ret6:
    return 6;
}
