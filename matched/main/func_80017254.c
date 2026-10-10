#include "context.h"

s32 func_80017480(u16, s32);

s32 func_80017254(s32 arg0) {
    u16 temp_s0;
    u16 temp_v0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;

    var_s1 = 0;
    var_s2 = 0;
    var_s4 = -1;
loop_1:
    if (func_80016F90() >= var_s1) {
        temp_v0 = func_80017014(var_s1);
        temp_s0 = temp_v0;
        if (temp_v0 != 0) {
            if (func_80017480(temp_s0, arg0) == var_s4) {
                var_s2 = func_800170C8(temp_s0 & 0xFFFF);
            } else {
                var_s1 += 1;
            }
            goto loop_1;
        }
    }
    return var_s2;
}
