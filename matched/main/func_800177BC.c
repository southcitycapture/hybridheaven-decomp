#include "context.h"

s32 func_80016F90();                                /* extern */

void func_800177BC(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_80016F90();
    var_v1 = 0;
    if (temp_v0 >= 0) {
        do {
            var_v1 += 1;
        } while (temp_v0 >= var_v1);
    }
}
