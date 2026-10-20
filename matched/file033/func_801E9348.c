#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F48E0;
extern f32 D_801F48E4;
extern f32 D_801F48E8;
extern f32 D_801F48EC;
extern f32 D_801F48F0;
extern f32 D_801F48F4;
extern f32 D_801F48F8;
extern f32 D_801F48FC;
extern f32 D_801F4900;

s32 func_801E9348(s32 arg0, s32 arg1) {
    f32 a = D_801F48E0;
    f32 b = D_801F48E4;
    f32 c = D_801F48E8;
    f32 d = D_801F48EC;

    if (D_8038C17C(0.0f, 0.5f, a, b, c, a, b, c, d, D_801F48F0, D_801F48F4, d, D_801F48F8, D_801F48FC, D_801F4900, 50.5f) != 0) {
        return 0x15;
    }
    return 0x14;
}
