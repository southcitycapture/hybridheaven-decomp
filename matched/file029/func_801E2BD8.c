#include "context.h"

extern f32 D_801E6A9C;
extern f32 D_801E6AA0;
extern f32 D_801E6AA4;
extern f32 D_801E6AA8;
extern f32 D_801E6AAC;
extern f32 D_801E6AB0;

s32 func_801E2BD8(s32 arg0, s32 arg1) {
    f32 temp = D_801E6A9C;
    if (func_8038BEF8(0.0f, 2.0f, 5.3f, 3.3f, D_801E6AA0, 5.0f,
            D_801E6AA4, -41.0f, temp, D_801E6AA8,
            D_801E6AAC, temp, D_801E6AB0, 1.5f) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}
