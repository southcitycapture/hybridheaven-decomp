#include "common.h"

s32 func_80143D38();
s32 func_80143F5C();
s32 func_8014418C();
s32 func_801443B0();
extern u8 D_801BEC50;

u8 func_80143B5C(void) {
    u8 var_v1;

    var_v1 = 0;
    if (D_801BEC50 == 0) {
        goto case0;
    }
    if (D_801BEC50 == 1) {
        goto case1;
    }
    if (D_801BEC50 == 2) {
        goto case2;
    }
    if (D_801BEC50 != 3) {
        goto done;
    }
    goto case3;
case0:
    if (func_80143D38() != 0) {
        var_v1 = 1;
    }
    goto done;
case1:
    if (func_80143F5C() != 0) {
        var_v1 = 1;
    }
    goto done;
case2:
    if (func_8014418C() != 0) {
        var_v1 = 1;
    }
    goto done;
case3:
    if (func_801443B0() != 0) {
        var_v1 = 1;
    }
done:
    return var_v1;
}
