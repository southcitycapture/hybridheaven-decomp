#include "context.h"

extern s32 D_801DB314;
extern s32 D_801DB318;
extern s32 D_801DB31C;

s32 func_801D2C10(void) {
    if (D_801DB318 != 0) {
        return 0;
    }
    if (D_801DB314 != 0) {
        return 0;
    }
    return D_801DB31C;
}
