#include "context.h"

extern s32 D_80005E44(void *, void *);

s32 func_80146088(arg0, arg1, arg2)
    void *arg0;
    void *arg1;
    u8 *arg2;
{
    if (D_80005E44(arg0, arg1) != 0) {
        *arg2 += 1;
        return 0;
    }
    return 1;
}
