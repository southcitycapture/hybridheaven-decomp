#include "context.h"

extern u16 D_8017DCCE[];

u16 func_801CA590(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    return D_8017DCCE[arg0];
}
