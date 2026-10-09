#include "context.h"

s32 func_80016CE4();                                /* extern */
s32 func_80016D50(s32);                             /* extern */

s32 func_800162EC(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_80016CE4() != 0) {
        do {
            var_s0 += 1;
        } while (func_80016CE4() != 0);
    }
    return (func_80016D50(var_s0) + (1 << var_s0)) - 1;
}
