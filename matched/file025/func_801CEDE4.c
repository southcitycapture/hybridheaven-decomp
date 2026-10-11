#include "context.h"

extern s32 D_801DAD28;
extern s32 D_801DAD2C;
extern s32 D_801DAD34;

s32 func_801CEDE4(void) {
    if (D_801DAD2C != 0) {
        return 0;
    }
    if (D_801DAD28 != 0) {
        return 0;
    }
    return D_801DAD34;
}
