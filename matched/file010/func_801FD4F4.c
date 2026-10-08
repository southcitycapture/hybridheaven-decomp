#include "common.h"

s32 func_801FD4F4(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_a2;

    temp_a2 = arg2;
    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        temp_v0 = arg1 - arg0;
        if (temp_v0 < 0x1000) {
            if (temp_a2 < temp_v0) {
                goto block_end;
            }
            return 1;
        }
        if (temp_v0 < (0x2000 - temp_a2)) {
            goto block_end;
        }
        return 1;
    }
    temp_v0 = arg0 - arg1;
    if (temp_v0 < 0x1000) {
        if (temp_a2 < temp_v0) {
            goto block_end;
        }
        return 1;
    }
    if (temp_v0 < (0x2000 - temp_a2)) {
        goto block_end;
    }
    return 1;
block_end:
    return 0;
}
