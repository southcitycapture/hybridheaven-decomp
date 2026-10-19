#include "context.h"

extern f32 D_801F4914;
extern f32 D_801F4918;
extern f32 D_801F491C;
extern f32 D_801F4920;
extern f32 D_801F4924;
extern f32 D_801F4928;
extern f32 D_801F492C;

s32 func_801E966C(s32 arg0, s32 arg1) {
    f32 v = D_801F4914;
    if (D_8038C17C(0.0f, 3.0f, 44.0f, 4.7f, D_801F4918, 45.5f, D_801F491C, -22.0f, 13.5f, 15.0f, D_801F4920, D_801F4924, D_801F4928, D_801F492C, v, v) != 0) {
        return 0x20;
    }
    return 0x1F;
}
