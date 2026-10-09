#include "context.h"

extern void func_80017384(s32, s32);
extern void func_800173B8(s32, s32);

void func_80016DF0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80017384(var_s0, 0);
        func_800173B8(var_s0, 0);
        var_s0 += 1;
    } while (var_s0 != 0x100);
}
