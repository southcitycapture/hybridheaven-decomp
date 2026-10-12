#include "context.h"

extern u8 D_801BCE5C[];

void func_80133950(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_801BCDF8[var_v1 - 3] = 0;
        D_801BCDF8[var_v1 - 2] = 0;
        D_801BCDF8[var_v1 - 1] = 0;
        D_801BCDF8[var_v1 - 4] = 0;
    } while (D_801BCE5C != &D_801BCDF8[var_v1]);
}
