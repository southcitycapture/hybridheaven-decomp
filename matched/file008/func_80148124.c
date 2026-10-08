#include "context.h"

s32 func_80148124(s32 arg0, s32 arg1) {
    s32 *p;
    s32 *q;
    p = &arg0;
    q = &arg1;
    return (arg0 + (u32)(arg1 * 4)) & 0xFF;
}
