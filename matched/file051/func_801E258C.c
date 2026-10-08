#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E787C;
extern f32 D_801E7880;
extern f32 D_801E7884;
extern f32 D_801E7888;
extern f32 D_801E788C;
extern f32 D_801E7890;
extern f32 D_801E7894;

s32 func_801E258C(s32 arg0, s32 arg1) {
    f32 fv0;
    f32 fv1;

    fv0 = D_801E787C;
    fv1 = D_801E7880;
    if (D_8038C17C(0.0f, 28.5f, 0.0f, 11.0f, D_801E7884, 0.0f, D_801E7888, D_801E788C, 0.0f, D_801E7890, fv0, 0.0f, D_801E7894, fv0, fv1, fv1) != 0) {
        return 0x14;
    }
    return 0x13;
}
