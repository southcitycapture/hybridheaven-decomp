#include "context.h"

s32 func_801CE274();
extern s32 D_801E4E9C;

s32 func_801E3548(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        D_801E4E9C = 0;
        return 0xA;
    }
    return 9;
}
