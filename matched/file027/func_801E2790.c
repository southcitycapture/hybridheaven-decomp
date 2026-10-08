#include "common.h"

extern void *func_801BF6B0(s32 idx);
extern s32 func_801C1B1C(void);

s32 func_801E2790(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x7C) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
