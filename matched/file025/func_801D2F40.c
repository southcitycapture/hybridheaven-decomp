#include "context.h"

extern s32 D_801DB334;
extern s32 D_801DB338;
extern s32 D_801DB33C;

s32 func_801D2F40(void) {
    if (D_801DB338 != 0) {
        return 0;
    }
    if (D_801DB334 != 0) {
        return 0;
    }
    return D_801DB33C;
}
