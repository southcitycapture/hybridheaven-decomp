#include "context.h"

extern f32 D_801F485C;
extern f32 D_801F4860;
extern f32 D_801F4864;
extern f32 D_801F4868;
extern f32 D_801F486C;
extern f32 D_801F4870;
extern f32 D_801F4874;
extern f32 D_801F4878;
extern f32 D_801F487C;

s32 func_801E8E6C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, 36.7f, 5.3f,
        D_801F485C, D_801F4860, D_801F4864, D_801F4868,
        D_801F486C, D_801F4870, -56.5f, D_801F4874,
        D_801F4878, D_801F487C) != 0) {
        return 0xA;
    }
    return 9;
}
