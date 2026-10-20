#include "common.h"

s32 func_80016B6C(s32 arg0, s32 arg1) {
    s32 r = 0;
    return (*(u8 *)(arg0 + (arg1 >> 3)) & (1 << (arg1 & 7))) ? 1 : r;
}
