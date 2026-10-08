#include "common.h"

extern void *func_801BF6B0(s32);
extern void func_801C8788(s32);

s32 func_801E58B4(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(6))[3] >= 7) {
        func_801C8788(1);
        return 9;
    }
    return 8;
}
