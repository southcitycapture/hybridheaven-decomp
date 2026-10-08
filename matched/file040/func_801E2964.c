#include "common.h"

extern void func_8038BED4(void);

s32 func_801E2964(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1D8838B) != 0) {
        func_8038BED4();
        return 0x13;
    }
    return 0x12;
}
