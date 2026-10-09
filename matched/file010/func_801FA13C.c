#include "context.h"

s32 func_80133A24(s32);                             /* extern */

s32 func_801FA13C(u16 arg0) {
    u8 var_s1;
    u8 var_s2;
    u8 var_s3;

    var_s1 = 1;
    var_s3 = 0;
    arg0 = arg0 + 1;
    for (var_s2 = 0; var_s2 < 5; var_s2++) {
        if (func_80133A24(arg0) != 0) {
            var_s3 += var_s1;
        }
        var_s1 <<= 1;
        arg0++;
    }
    return var_s3;
}
