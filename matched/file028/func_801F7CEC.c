#include "context.h"

extern u8 func_801D3200[];

s32 func_801F7CEC(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200026, 0, 0, 3.0f, func_801D3200 + 0x60, 0x0320001A, 0, 0, 15.0f) != 0) {
        return 0xB;
    }
    return 0xA;
}
