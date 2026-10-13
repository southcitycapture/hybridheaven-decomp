#include "context.h"
extern u8 D_801BEBA8[];

u8 func_801402AC(void) {
    u8 var_v1;
    u8 *temp_v0;

    temp_v0 = &D_801BEBA8[(u8)D_801BEC01 * 8];
    var_v1 = 0;
    if (temp_v0[4] == 1) {
        var_v1 = temp_v0[6];
    }
    return var_v1;
}
