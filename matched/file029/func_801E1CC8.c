#include "context.h"

extern f32 D_801E68B4;
extern f32 D_801E68B8;
extern f32 D_801E68BC;
extern f32 D_801E68C0;
extern f32 D_801E68C4;
extern f32 D_801E68C8;
extern f32 D_801E68CC;
extern f32 D_801E68D0;

s32 func_801E1CC8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -65.1f, 64.9f, 10.5f, D_801E68B4, D_801E68B8,
                      D_801E68BC, D_801E68C0, D_801E68C4, D_801E68C8, -40.5f,
                      D_801E68CC, D_801E68D0) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
