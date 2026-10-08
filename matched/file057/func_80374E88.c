#include "context.h"

extern s32 func_80374260(s32, u16, u16, s32);

s32 func_80374E88(s32 arg0, u16 *arg1, u8 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg1 == NULL) {
        return 0;
    }
    temp_v0 = func_80374260(arg0, arg1[0], arg1[1], 0);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v0 != 0) || (arg2 == 0)) {
        return temp_v1;
    }
    return func_80374260(arg0, arg1[0], arg1[1], 1);
}
