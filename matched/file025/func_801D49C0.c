#include "context.h"

extern s32 D_801DB5A8;
extern s32 D_801DB5AC;
extern s32 D_801DB5B4;

s32 func_801D49C0(void) {
    if (D_801DB5AC != 0) {
        return 0;
    }
    if (D_801DB5A8 != 0) {
        return 0;
    }
    return D_801DB5B4;
}
