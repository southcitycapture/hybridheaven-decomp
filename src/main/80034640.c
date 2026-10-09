#include "common.h"


s32 func_800309E0();                                /* extern */

s32 func_80034640(s32 arg0, s32 arg1) {
    if (func_800309E0() != 0) {
        return -1;
    }
    *(s32 *) (arg0 | 0xA0000000) = arg1;
    return 0;
}

