#include "context.h"

s32 func_80151BC4();                                /* extern */
s32 func_80151C34();                                /* extern */
extern u16 D_801BBC1E;

u16 func_8012FF58(void) {
    s32 temp_v0;

    if (func_80151BC4() != 2) {
        goto block_load;
    }
    temp_v0 = func_80151C34();
    if (temp_v0 == 1) {
        goto block_r3;
    }
    if (temp_v0 == 2) {
        goto block_r32;
    }
    if (temp_v0 != 0x67) {
        goto block_load;
    }
block_r3:
    return 3U;
block_r32:
    return 0x32U;
block_load:
    return D_801BBC1E;
}
