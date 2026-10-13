#include "context.h"

extern s32 func_801CC564(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, void *arg6, s32 arg7, s32 arg8, s32 arg9, f32 arg10);
extern u8 func_801D3200[];

s32 func_801ED490(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001C, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xF;
    }
    return 0xE;
}
