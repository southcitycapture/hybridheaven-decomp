#include "common.h"

extern void *func_801BF6B0();

s32 func_801E2080(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(4))[0xF] >= 0x26) {
        return 0xF;
    }
    return 0xE;
}
