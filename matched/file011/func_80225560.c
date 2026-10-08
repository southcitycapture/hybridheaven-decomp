#include "context.h"

extern s32 *D_8023C8D0[];

s32 func_80225560(void *arg0, u8 arg1) {
    u8 *var_v1;

    var_v1 = *(u8 **)((u8 *)arg0 + 0x5C);
    arg1 = arg1;
    if (arg1 >= 0x26) {
        arg1 = 0;
    }
    return D_8023C8D0[var_v1[0x75]][arg1];
}
