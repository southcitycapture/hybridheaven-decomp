#include "common.h"

extern void func_8038BED4();

s32 func_801E2890(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5572FF) != 0) {
        func_8038BED4();
        return 0x1D;
    }
    return 0x1C;
}
