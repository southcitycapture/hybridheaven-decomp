#include "context.h"

extern s32 D_801DAECC;
extern s32 D_801DAED0;
extern s32 D_801DAEF0;

s32 func_801CFD50(void) {
    if (D_801DAED0 != 0) {
        return 0;
    }
    if (D_801DAECC != 0) {
        return 0;
    }
    return D_801DAEF0;
}
