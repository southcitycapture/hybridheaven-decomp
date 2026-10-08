#include "common.h"

s32 func_80020D3C();

s32 func_8038D308(s32 arg0) {
    s32 var_v1;

    if (func_80020D3C(0) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}
