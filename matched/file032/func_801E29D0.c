#include "context.h"

extern f32 D_801EB924;
extern f32 D_801EB928;
extern f32 D_801EB92C;
extern f32 D_801EB930;
extern f32 D_801EB934;
extern f32 D_801EB938;
extern f32 D_801EB93C;

s32 func_801E29D0(s32 arg0, s32 arg1) {
    f32 t0 = D_801EB924;
    f32 t1 = D_801EB928;
    f32 t2 = D_801EB92C;

    if (func_8038BEF8(0.0f, 3.0f, 0xC0A66666, 0x420B999A, D_801EB930, D_801EB934, D_801EB938, D_801EB93C, t0, t1, t2, t0, t1, t2) != 0) {
        return 0x2A;
    }
    return 0x29;
}
