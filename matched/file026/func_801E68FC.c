#include "common.h"

extern void func_8038D2B0(s32 arg0);
extern s32 D_801FB308;

s32 func_801E68FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x046DBA60) != 0) {
        func_8038D2B0(1548);
        D_801FB308 = 0;
        return 15;
    }
    return 14;
}
