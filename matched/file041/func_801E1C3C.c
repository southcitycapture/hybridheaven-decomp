#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E86B0;
extern f32 D_801E86B4;
extern f32 D_801E86B8;
extern f32 D_801E86BC;
extern f32 D_801E86C0;
extern f32 D_801E86C4;
extern f32 D_801E86C8;
extern f32 D_801E86CC;
extern f32 D_801E86D0;
extern f32 D_801E86D4;

s32 func_801E1C3C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 4.0f, 0xC207999A, 0xC16B3333, D_801E86B0, D_801E86B4, D_801E86B8, 25.0f, D_801E86BC, D_801E86C0, 54.0f, D_801E86C4, D_801E86C8, D_801E86CC, D_801E86D0, D_801E86D4) != 0) {
        return 2;
    }
    return 1;
}
