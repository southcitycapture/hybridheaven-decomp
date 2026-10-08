#include "context.h"

extern f32 D_801E6A20;
extern f32 D_801E6A24;
extern f32 D_801E6A28;
extern f32 D_801E6A2C;
extern f32 D_801E6A30;
extern f32 D_801E6A34;
extern f32 D_801E6A38;
extern f32 D_801E6A3C;

s32 func_801E28DC(s32 arg0, s32 arg1) {
    f32 sp20;

    sp20 = D_801E6A20;
    if (func_8038BEF8(0.0f, D_801E6A24, 5.7f, 3.6f, D_801E6A28, D_801E6A2C, 3.5f, D_801E6A30, sp20, D_801E6A34, D_801E6A38, sp20, D_801E6A3C, 0.0f) != 0) {
        func_8038BED4();
        return 0x1E;
    }
    return 0x1D;
}
