#include "context.h"

extern s32 D_801DA610;

s32 func_801C78D0(void) {
    s32 *p;

    p = &D_801DA610;
    *p = (*p * 0x5D588B65) + 1;
    return *p;
}
