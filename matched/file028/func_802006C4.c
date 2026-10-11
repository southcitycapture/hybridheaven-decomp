#include "common.h"

s32 func_801D278C(void);

s32 func_802006C4(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0x3;
    }
    return 0x2;
}
