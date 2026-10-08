#include "context.h"

extern void func_801C63CC(s32);

void func_801C655C(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_801C63CC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 2);
}
