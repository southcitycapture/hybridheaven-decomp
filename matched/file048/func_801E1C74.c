#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA46C;
extern f32 D_801EA470;
extern f32 D_801EA474;
extern f32 D_801EA478;
extern f32 D_801EA47C;

s32 func_801E1C74(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;

    a = D_801EA46C;
    b = D_801EA470;
    c = D_801EA474;
    d = D_801EA478;
    e = D_801EA47C;
    if (D_8038C17C(0.0f, e, 0.0f, 0x4220CCCD, a, 0.0f, 9.5f, a, 0.0f, b, c, 0.0f, b, c, d, d) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}
