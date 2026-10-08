#include "context.h"

extern f32 D_801E6A84;
extern f32 D_801E6A88;
extern f32 D_801E6A8C;
extern f32 D_801E6A90;
extern f32 D_801E6A94;
extern f32 D_801E6A98;

s32 func_801E2B1C(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = D_801E6A84;
    b = D_801E6A88;
    c = D_801E6A8C;
    if (func_8038BEF8(0.0f, D_801E6A90, 0.6f, 15.2f, D_801E6A94, 0.5f, 13.0f, D_801E6A98, a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 0x21;
    }
    return 0x20;
}
