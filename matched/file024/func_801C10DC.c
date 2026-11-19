#include "common.h"

s32 func_801C1088(s32, s8);

u8 func_801C10DC(void *arg0, u8 arg1, s8 arg2) {
    u8 i;
    u8 ret;
    s32 count;
    void *p;

    count = arg1;
    p = arg0;
    i = 0;
    if (count > 0) {
        do {
            ret = func_801C1088((s32)p, arg2);
            i++;
            p = ((void **)p)[4];
        } while (i < count);
    }
    return ret;
}
