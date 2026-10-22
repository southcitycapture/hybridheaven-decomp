#include "context.h"

s16 func_801FD3EC(s16 arg0, s16 arg1, s16 arg2) {
    s16 d;
    s16 r;

    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            r = (s16)(arg0 + arg2) & 0x1FFF;
        } else {
            r = (s16)(arg0 - arg2) & 0x1FFF;
        }
        if (d < arg2) {
            r = arg1;
        }
    } else {
        d = arg0 - arg1;
        if (d < 0x1000) {
            r = (s16)(arg0 - arg2) & 0x1FFF;
        } else {
            r = (s16)(arg0 + arg2) & 0x1FFF;
        }
        if (d < arg2) {
            r = arg1;
        }
    }
    return r;
}
