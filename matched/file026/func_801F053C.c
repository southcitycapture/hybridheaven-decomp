#include "common.h"

extern void func_8038D28C(s32 arg0);
extern s32 D_801FB748;

s32 func_801F053C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05F49B7A) != 0) {
        func_8038D28C(0x5C7);
        D_801FB748 = 0;
        return 0x1B;
    }
    return 0x1A;
}
