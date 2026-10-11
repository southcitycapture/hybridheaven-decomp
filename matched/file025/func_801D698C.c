#include "context.h"

extern s32 D_801DB968;
extern s32 D_801DB96C;
extern s32 D_801DB970;

s32 func_801D698C(void) {
    if (D_801DB96C != 0) {
        return 0;
    }
    if (D_801DB968 != 0) {
        return 0;
    }
    return D_801DB970;
}
