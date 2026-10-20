#include "context.h"

extern f32 D_801E69AC;
extern f32 D_801E69B0;
extern f32 D_801E69B4;
extern f32 D_801E69B8;
extern f32 D_801E69BC;
extern f32 D_801E69C0;
extern f32 D_801E69C4;
extern f32 D_801E69C8;
extern f32 D_801E69CC;

s32 func_801E2418(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801E69AC, 23.6f, 12.5f, D_801E69B0, D_801E69B4, D_801E69B8,
                      D_801E69BC, 4.0f, D_801E69C0, 6.5f, D_801E69C4, D_801E69C8,
                      D_801E69CC) != 0) {
        return 0x11;
    }
    return 0x10;
}
