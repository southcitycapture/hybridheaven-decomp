#include "context.h"

extern s32 D_801DB258;
extern s32 D_801DB25C;
extern s32 D_801DB280;

s32 func_801D278C(void) {
    if (D_801DB25C != 0) {
        return 0;
    }
    if (D_801DB258 != 0) {
        return 0;
    }
    return D_801DB280;
}
