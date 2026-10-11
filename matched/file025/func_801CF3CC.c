#include "context.h"

extern s32 D_801DADFC;
extern s32 D_801DAE00;
extern s32 D_801DAE08;

s32 func_801CF3CC(void) {
    if (D_801DAE00 != 0) {
        return 0;
    }
    if (D_801DADFC != 0) {
        return 0;
    }
    return D_801DAE08;
}
