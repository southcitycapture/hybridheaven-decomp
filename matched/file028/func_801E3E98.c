#include "context.h"
extern s32 func_801CC564(s32, void *, s32, s32, s32, f32, void *, s32, s32, s32, f32);
extern u8 func_801D2BC4[];

s32 func_801E3E98(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001C, 0, 0, 3.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 5;
    }
    return 4;
}
