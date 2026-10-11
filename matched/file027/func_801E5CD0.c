#include "common.h"

s32 func_801D2034(s32 arg0);
s32 func_801D20BC(void);

s32 func_801E5CD0(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 19;
    }
    return 18;
}
