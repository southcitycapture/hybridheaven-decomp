#include "context.h"

extern s32 D_801DB374;
extern s32 D_801DB378;
extern s32 D_801DB37C;

s32 func_801D3630(void) {
    if (D_801DB378 != 0) {
        return 0;
    }
    if (D_801DB374 != 0) {
        return 0;
    }
    return D_801DB37C;
}
