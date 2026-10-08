#include "common.h"

extern void func_8038BED4();

s32 func_801E2814(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}
