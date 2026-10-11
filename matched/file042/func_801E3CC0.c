#include "context.h"

s32 func_801CEDD4();
extern s32 D_801E4EE0;

s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        D_801E4EE0 = 0;
        return 0x9;
    }
    return 8;
}
