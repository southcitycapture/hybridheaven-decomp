#include "context.h"

extern s32 D_801DB89C;
extern s32 D_801DB8A0;
extern s32 D_801DB8A8;

s32 func_801D62D0(void) {
    if (D_801DB8A0 != 0) {
        return 0;
    }
    if (D_801DB89C != 0) {
        return 0;
    }
    return D_801DB8A8;
}
