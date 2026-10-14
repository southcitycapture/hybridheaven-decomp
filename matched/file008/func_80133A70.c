#include "context.h"

extern u8 D_8008DC20[];
extern u8 D_8008DC84[];

void func_80133A70(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_8008DC20[var_v1 - 3] = 0;
        D_8008DC20[var_v1 - 2] = 0;
        D_8008DC20[var_v1 - 1] = 0;
        D_8008DC20[var_v1 - 4] = 0;
    } while (D_8008DC84 != &D_8008DC20[var_v1]);
}
