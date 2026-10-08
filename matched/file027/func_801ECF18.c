#include "common.h"

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

s32 func_801ECF18(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}
