#include "common.h"

extern s32 func_801D2034(s32 arg0);
s32 func_801D20BC(void);

s32 func_801E5DB4(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 22;
    }
    return 21;
}
