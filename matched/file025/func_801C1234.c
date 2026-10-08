#include "common.h"

s32 func_801C1228();
s32 func_801C1284();
s32 func_801C133C();

s32 func_801C1234(void) {
    s32 sp1C;

    sp1C = 0;
    if (func_801C1228() != 0) {
        if (func_801C1284() != 0) {
            sp1C = 1;
        } else {
            sp1C = func_801C133C();
        }
    }
    return sp1C;
}
