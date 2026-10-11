#include "common.h"

s32 func_801D278C(void);

s32 func_802008D8(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0xB;
    }
    return 0xA;
}
