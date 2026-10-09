#include "context.h"

extern void func_800023A8(s32);

void func_800023EC(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800023A8(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
}
