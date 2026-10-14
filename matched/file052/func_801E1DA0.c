#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E5968;
extern f32 D_801E596C;
extern f32 D_801E5970;
extern f32 D_801E5974;
extern f32 D_801E5978;
extern f32 D_801E597C;
extern f32 D_801E5980;
extern f32 D_801E5984;
extern f32 D_801E5988;

s32 func_801E1DA0(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    a = D_801E5968;
    b = D_801E596C;
    c = D_801E5970;
    d = D_801E5974;
    if (D_8038C17C(0.0f, D_801E5978, 0xC2040000, 0x41700000, D_801E597C, D_801E5980, D_801E5984, D_801E5988, a, b, c, a, b, c, d, d) != 0) {
        return 4;
    }
    return 3;
}
