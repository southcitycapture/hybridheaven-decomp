#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E8C68;
extern f32 D_801E8C6C;
extern f32 D_801E8C70;
extern f32 D_801E8C74;
extern f32 D_801E8C78;
extern f32 D_801E8C7C;
extern f32 D_801E8C80;

s32 func_801E35EC(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    a = D_801E8C68;
    b = D_801E8C6C;
    c = D_801E8C70;
    d = D_801E8C74;
    if (func_8038BEF8(0.0f, D_801E8C78, a, 8.5f, D_801E8C7C, a, 9.5f, D_801E8C80, b, c, d, b, c, d) != 0) {
        return 0x20;
    }
    return 0x1F;
}
