#include "context.h"

extern f32 D_801E8A90;
extern f32 D_801E8A94;
extern f32 D_801E8A98;
extern f32 D_801E8A9C;
extern f32 D_801E8AA0;
extern f32 D_801E8AA4;

s32 func_801E2954(s32 arg0, s32 arg1) {
    f32 x = D_801E8A90;
    f32 y = D_801E8A94;

    if (func_8038BEF8(0.0f, 2.0f, -2.4f, 10.3f,
                      D_801E8A98, -2.5f, 10.5f, D_801E8A9C,
                      D_801E8AA0, x, y, -1.0f,
                      x, y) != 0) {
        func_8038BE98(D_801E8AA4);
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}
