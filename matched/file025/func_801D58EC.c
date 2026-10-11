#include "context.h"

extern s32 D_801DB730;
extern s32 D_801DB734;
extern s32 D_801DB754;

s32 func_801D58EC(void) {
    if (D_801DB734 != 0) {
        return 0;
    }
    if (D_801DB730 != 0) {
        return 0;
    }
    return D_801DB754;
}
