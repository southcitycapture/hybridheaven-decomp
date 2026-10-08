#include "common.h"

extern void func_801CF450(s32 arg0);
extern s32 D_801FB224;

s32 func_801E536C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x046DBA60) != 0) {
        func_801CF450(1);
        D_801FB224 = 0;
        return 3;
    }
    return 2;
}
