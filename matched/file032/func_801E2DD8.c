#include "common.h"

extern void *func_801BF6B0();
extern s32 func_801C1B1C();

s32 func_801E2DD8(s32 arg0, s32 arg1) {
    s32 *p;

    p = func_801BF6B0(7);
    if ((p[3] < 0x76) || (func_801C1B1C() == 0)) {
        return 0x36;
    }
    return 0x37;
}
