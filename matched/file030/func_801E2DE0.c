#include "context.h"

extern f32 D_801EC654;
extern f32 D_801EC658;
extern f32 D_801EC65C;
extern f32 D_801EC660;
extern f32 D_801EC664;
extern f32 D_801EC668;
extern f32 D_801EC66C;
extern f32 D_801EC670;
extern f32 D_801EC674;
extern f32 D_801EC678;

s32 func_801E2DE0(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, 39.0f, 37.2f,
            D_801EC654, D_801EC658, D_801EC65C, D_801EC660,
            D_801EC664, D_801EC668, D_801EC66C, D_801EC670,
            D_801EC674, D_801EC678) != 0) {
        return 0x29;
    }
    return 0x28;
}
