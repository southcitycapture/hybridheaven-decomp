#define func_80374DF0 func_80374DF0_ctx
#include "context.h"
#undef func_80374DF0

extern u8 D_80388098[];

void *func_80374DF0(arg0)
    u8 arg0;
{
    u8 *p;

    for (p = D_80388098; *p != 0x57; p += 0x14) {
        if (arg0 == *p) {
            return p;
        }
    }
    return NULL;
}
