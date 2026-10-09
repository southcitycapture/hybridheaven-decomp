#include "context.h"

extern s32 D_8008DC94;
extern u8 *D_8008DFB0;

u8 func_800167FC(s32 arg0, s32 arg1, s32 arg2) {
    return *((D_8008DC94 * arg2) + arg1 + D_8008DFB0);
}
