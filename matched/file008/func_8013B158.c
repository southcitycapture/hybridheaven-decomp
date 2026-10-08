#include "context.h"

extern u8 D_801BEB00[];

s32 func_8013B158(void) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 0x14; var_v1 = (var_v1 + 1) & 0xFF) {
        if (D_801BEB00[var_v1] == 0) {
            return var_v1;
        }
    }
    return 0xFF;
}
