#include "common.h"

extern void *func_801BF6B0(s32);

s32 func_801E3760(s32 arg0, s32 arg1) {
    s32 *ptr;

    ptr = func_801BF6B0(0);
    if (ptr[3] >= 8) {
        return 0x11;
    }
    return 0x10;
}
