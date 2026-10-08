#include "common.h"

s32 func_801C1E94();
s32 func_801C1F4C();
extern s32 D_801D8DD0;
extern s32 D_801D8DD4;

s32 func_801C1E2C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801D8DD4 != 0) {
        if (func_801C1E94() != 0) {
            var_v1 = 1;
        } else {
            var_v1 = func_801C1F4C();
        }
    }
    if (var_v1 != 0) {
        D_801D8DD0 += 1;
    }
    return var_v1;
}
