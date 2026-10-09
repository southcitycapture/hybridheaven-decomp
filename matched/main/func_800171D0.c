#include "context.h"
s32 func_80016F90();                                /* extern */
u16 func_80017014(s32 arg0);
s32 func_800170C8(s32);                             /* extern */


s32 func_800171D0(u16 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    var_s1 = 0;
loop_1:
    if (func_80016F90() >= var_s0) {
        temp_v0 = func_80017014(var_s0);
        if (temp_v0 != 0) {
            if (temp_v0 != arg0) {
                var_s1 = func_800170C8(temp_v0 & 0xFFFF);
            } else {
                var_s0 += 1;
            }
            goto loop_1;
        }
    }
    return var_s1;
}
