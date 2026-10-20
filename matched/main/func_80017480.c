#include "context.h"

s32 func_80017480(u16 arg0, s32 arg1) {
loop_1:
    if ((u16)(*(s32 *)arg1 & 0x0FFFFFFF) == arg0) {
        return 0;
    }
    if (!(*(s32 *)arg1 & 0x40000000)) {
        arg1 += 8;
        goto loop_1;
    }
    return -1;
}
