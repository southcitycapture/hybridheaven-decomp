#include "context.h"

s32 func_80016CE4(void) {
    s32 n;

    n = --D_80044084;
    if (n >= 0) {
        return ((u32) D_8004408C >> n) & 1;
    }
    D_80044084 = 7;
    D_8004408C = *(u8 *) D_8008DFB8;
    D_8008DFB8 = (s32) ((u8 *) D_8008DFB8 + 1);
    return ((u32) D_8004408C >> 7) & 1;
}
