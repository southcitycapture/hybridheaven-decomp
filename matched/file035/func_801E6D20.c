#include "context.h"

extern s32 func_801CEDE4();
extern s32 D_801E8718;

s32 func_801E6D20(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        D_801E8718 = 0;
        return 5;
    }
    return 4;
}
