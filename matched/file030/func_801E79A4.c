#include "context.h"

extern f32 D_801EC724;
extern f32 D_801EC728;
extern f32 D_801EC72C;
extern f32 D_801EC730;
extern f32 D_801EC734;
extern f32 D_801EC738;
extern f32 D_801EC73C;
extern f32 D_801EC740;
extern f32 D_801EC744;

s32 func_801E79A4(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 19.3f, 54.4f,
            D_801EC724, D_801EC728, D_801EC72C, D_801EC730,
            D_801EC734, D_801EC738, D_801EC73C, D_801EC740,
            D_801EC744, 7.5f) != 0) {
        return 3;
    }
    return 2;
}
