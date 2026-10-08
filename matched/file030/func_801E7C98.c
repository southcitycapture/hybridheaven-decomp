#include "context.h"

extern f32 D_801EC760;
extern f32 D_801EC764;
extern f32 D_801EC768;
extern f32 D_801EC76C;
extern f32 D_801EC770;
extern f32 D_801EC774;

s32 func_801E7C98(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;
    f32 fc;

    fa = D_801EC760;
    fb = D_801EC764;
    fc = D_801EC768;

    if (func_8038BEF8(0.0f, 3.5f, 11.2f, 41.0f, D_801EC76C, D_801EC770, 58.5f, D_801EC774, fa, fb, fc, fa, fb, fc) != 0) {
        return 0xB;
    }
    return 0xA;
}
