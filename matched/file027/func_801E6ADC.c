#include "common.h"

extern s32 func_801D278C(void);

s32 func_801E6ADC(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0x12;
    }
    return 0x11;
}
