#include "context.h"

extern f32 D_801EDCC8;
extern f32 D_801EDCCC;
extern f32 D_801EDCD0;
extern f32 D_801EDCD4;
extern f32 D_801EDCD8;

s32 func_801E2BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E3660) != 0) {
        func_8038BE98(D_801EDCC8);
        func_8038BD50(D_801EDCCC, D_801EDCD0, 0x420A0000);
        D_8038BD88(D_801EDCD4, D_801EDCD8, 0x41E5999A);
        return 0x30;
    }
    return 0x2F;
}
