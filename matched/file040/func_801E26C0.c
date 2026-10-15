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
extern f32 D_801E86D8;
extern f32 D_801E86DC;

s32 func_801E26C0(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801E86B0, 0xC1B66666, 0x425A6666, D_801E86B4, D_801E86B8, D_801E86BC, D_801E86C0, D_801E86C4, D_801E86C8, D_801E86CC, D_801E86D0, D_801E86D4, D_801E86D8, 27.5f, D_801E86DC) != 0) {
        D_8038C158();
        return 0x10;
    }
    return 0xF;
}
