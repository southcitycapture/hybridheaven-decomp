#include "context.h"

extern void func_80144E68(u8 **);
extern void func_80145014(u8 **);

s32 func_8014217C(u8 arg0, s32 arg1) {
    u8 *sp2C;
    u8 result;
    u16 sum;
    s32 i;

    sum = 0;
    for (i = 0; i < 0xCFF; i++) {
        sum += ((u8 *)arg1)[i];
    }
    if ((u8)sum != ((u8 *)arg1)[i]) {
        result = 0xE;
    } else {
        result = 0;
        sp2C = (u8 *)arg1;
        if (arg0 & 1) {
            func_80145014(&sp2C);
        } else {
            func_80144E68(&sp2C);
        }
    }
    return result;
}
