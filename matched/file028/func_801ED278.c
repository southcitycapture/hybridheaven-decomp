#include "context.h"

extern u8 func_801D3200[];

s32 func_801ED278(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200020, 0, 0, 20.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 20.0f) != 0) {
        return 8;
    }
    return 7;
}
