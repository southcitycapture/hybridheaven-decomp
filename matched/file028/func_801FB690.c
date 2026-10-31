#include "context.h"

extern f32 D_80208D10;
extern f32 D_80208D14;
extern f32 D_80208D18;
extern f32 D_80208D1C;
extern f32 D_80208D20;

s32 func_801FB690(s32 arg0, s32 arg1) {
    f32 x = 4.0f;
    f32 y = 24.4f;
    f32 z = -37.4f;
    if (func_8038BEF8(0.0f, 7.0f, -7.9f, 19.3f,
            -18.0f, D_80208D18, D_80208D1C, D_80208D20,
            x, y, z, x, y, z) != 0) {
        func_8038BED4();
        return 0xF;
    }
    return 0xE;
}
