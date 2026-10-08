#include "common.h"

extern s32 func_801CC564(s32, void *, s32, s32, s32, f32, void *, s32, s32, s32, f32);
extern u8 func_801D2BC4[];

s32 func_801E41BC(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x03200021, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xD;
    }
    return 0xC;
}
