#include "context.h"

extern s32 func_801D2C00();

s32 func_801E594C(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 15;
    }
    return 14;
}
