#include "context.h"

extern u16 D_801BBFA8;

s32 func_8015067C(u16 arg0, u16 arg1) {
    void *temp_v0;

    arg0 &= 0xFFFF;
    if (arg0 < (s32) D_801BBFA8) {
        temp_v0 = (void *) func_801505AC(arg0);
        if (arg1 == 1) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA0);
        }
        if (arg1 == 2) {
            return *(u16 *) ((u8 *) temp_v0 + 0xA2);
        }
        goto block_5;
    }
block_5:
    return 0xFFFF0000U;
}
