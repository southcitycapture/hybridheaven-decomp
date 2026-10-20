#include "context.h"

extern f32 D_80208AE4;
extern f32 D_80208AE8;
extern f32 D_80208AEC;
extern f32 D_80208AF0;
extern f32 D_80208AF4;
extern f32 D_80208AF8;
extern f32 D_80208AFC;
extern f32 D_80208B00;
extern f32 D_80208B04;

s32 func_801F3FE4(s32 arg0, s32 arg1) {
    f32 x = D_80208AE4;
    f32 y = D_80208AE8;
    f32 z = D_80208AEC;

    if (func_8038BEF8(0.0f, 4.0f, 176.4f, 2.1f, 16.0f,
        D_80208AF0, D_80208AF4, D_80208AF8,
        x, y, z, x, y, z) != 0) {
        func_8038BD50(D_80208AFC, D_80208B00, 0xC0D33333);
        D_8038BD88(D_80208B04, 12.5f, 0xC0C00000);
        return 8;
    }
    return 6;
}
