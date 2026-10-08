#include "common.h"

s32 func_801D2034(s32 arg0);
s32 func_801D20BC(void);

s32 func_801E597C(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 8;
    }
    return 7;
}
