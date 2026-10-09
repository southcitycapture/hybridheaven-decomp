#include "context.h"

extern u8 D_801BBD54;
extern s32 D_80207058;

s32 func_801F4EB4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801BF6B0(3)->unkC > 0) {
        func_801C3718(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x5A);
        D_80207058 = 0;
        return 1;
    }
    return 0;
}
