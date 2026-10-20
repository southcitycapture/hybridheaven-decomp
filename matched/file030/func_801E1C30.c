#include "context.h"

extern f32 D_801EC470;
extern f32 D_801EC474;
extern f32 D_801EC478;
extern f32 D_801EC47C;
extern f32 D_801EC480;
extern f32 D_801EC484;

s32 func_801E1C30(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, 4.5f, 2.4f, D_801EC470, D_801EC474, 0.0f,
                      D_801EC478, 1.0f, D_801EC47C, 87.5f, D_801EC480,
                      D_801EC484, 84.0f) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
