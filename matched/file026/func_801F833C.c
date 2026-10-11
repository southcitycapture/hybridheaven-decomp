#include "common.h"

extern void *func_801BF6B0(s32 arg0);

s32 func_801F833C(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 17;
    }
    return 16;
}
