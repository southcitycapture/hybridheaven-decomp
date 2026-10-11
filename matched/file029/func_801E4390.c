#include "common.h"

s32 func_801D51A4(void);

s32 func_801E4390(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x4;
    }
    return 0x3;
}
