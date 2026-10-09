#include "context.h"

extern s32 D_8008DC94;
extern u8 *D_8008DFB0;

s32 func_800168C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v0 = (D_8008DC94 + 1) & ~1;
    temp_v1 = (temp_v0 * arg2) + arg1;
    if (temp_v1 & 1) {
        return D_8008DFB0[temp_v1 / 2] & 0xF;
    }
    return (D_8008DFB0[temp_v1 / 2] & 0xF0) >> 4;
}
