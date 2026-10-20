#include "context.h"
extern f32 D_801E6A5C;
extern f32 D_801E6A60;
extern f32 D_801E6A64;
extern f32 D_801E6A68;
extern f32 D_801E6A6C;
extern f32 D_801E6A70;
extern f32 D_801E6A74;
extern f32 D_801E6A78;
extern f32 D_801E6A7C;
extern f32 D_801E6A80;

s32 func_801E2A58(s32 arg0, s32 arg1) {
    f32 k = D_801E6A5C;
    if (func_8038BEF8(0.0f, D_801E6A60, 5.5f, 3.5f, D_801E6A64, D_801E6A68, D_801E6A6C, D_801E6A70, k, D_801E6A74, D_801E6A78, k, D_801E6A7C, D_801E6A80)) {
        func_8038BED4();
        return 0x20;
    }
    return 0x1F;
}
