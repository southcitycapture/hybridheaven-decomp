#include "context.h"

extern s32 D_801DB144;
extern s32 D_801DB148;
extern s32 D_801DB14C;

s32 func_801D16D4(void) {
    if (D_801DB148 != 0) {
        return 0;
    }
    if (D_801DB144 != 0) {
        return 0;
    }
    return D_801DB14C;
}
