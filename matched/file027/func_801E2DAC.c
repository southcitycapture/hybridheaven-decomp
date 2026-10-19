#include "context.h"

extern f32 D_801F57E4;
extern f32 D_801F57E8;
extern f32 D_801F57EC;
extern f32 D_801F57F0;
extern f32 D_801F57F4;
extern f32 D_801F57F8;
extern f32 D_801F57FC;

s32 func_801E2DAC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, 24.6f, 27.7f, 21.0f, -1.0f,
                      D_801F57E4, D_801F57E8, -2.5f, D_801F57EC,
                      D_801F57F0, D_801F57F4, D_801F57F8, D_801F57FC) != 0) {
        return 0x29;
    }
    return 0x28;
}
