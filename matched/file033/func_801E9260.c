#include "context.h"

extern s32 D_8038C158();
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F48C4;
extern f32 D_801F48C8;
extern f32 D_801F48CC;
extern f32 D_801F48D0;
extern f32 D_801F48D4;
extern f32 D_801F48D8;
extern f32 D_801F48DC;

s32 func_801E9260(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 0.5f, 9.9f, 3.5f, D_801F48C4, D_801F48C8, 11.0f, -12.5f, D_801F48CC, D_801F48D0, -18.0f, 12.0f, D_801F48D4, D_801F48D8, D_801F48DC, 4.0f) != 0) {
        D_8038C158();
        return 0x14;
    }
    return 0x13;
}
