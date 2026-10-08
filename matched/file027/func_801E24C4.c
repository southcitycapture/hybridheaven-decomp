#include "common.h"

extern void func_8038BED4();

s32 func_801E24C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x387520) != 0) {
        func_8038BED4();
        return 0x15;
    }
    return 0x14;
}
