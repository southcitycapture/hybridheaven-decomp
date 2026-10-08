#include "context.h"

extern s8 D_8017DD8A;
extern s8 D_8017DD8B;

void func_80152BC8(u8 arg0, s8 arg1) {
    s8 *var_v0;

    if (!arg0) {
        var_v0 = &D_8017DD8A;
    } else {
        var_v0 = &D_8017DD8B;
    }
    *var_v0 += arg1;
}
