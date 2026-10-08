#include "context.h"

extern u8 D_801BBD54;
extern s32 D_80207500;
extern s32 D_80207504;

s32 func_801F99B0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80207500 = 0;
    D_80207504 = 0;
    return 1;
}
