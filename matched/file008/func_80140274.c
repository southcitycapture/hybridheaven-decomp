#include "context.h"

u8 func_80140274(void) {
    u8 var_v1;
    u8 *temp_v0;

    temp_v0 = &D_801BEB80[(u8)D_801BEC05 * 8];
    var_v1 = 0;
    if (temp_v0[4] == 1) {
        var_v1 = temp_v0[6];
    }
    return var_v1;
}
