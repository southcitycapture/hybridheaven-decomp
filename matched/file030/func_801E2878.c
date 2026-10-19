#include "context.h"

extern f32 D_801EC5C8;
extern f32 D_801EC5CC;
extern f32 D_801EC5D0;
extern f32 D_801EC5D4;
extern f32 D_801EC5D8;
extern f32 D_801EC5DC;
extern f32 D_801EC5E0;

s32 func_801E2878(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.5f, 48.0f, 0.9f, D_801EC5C8, D_801EC5CC, D_801EC5D0, 25.5f, D_801EC5D4, D_801EC5D8, D_801EC5DC, 31.0f, D_801EC5E0, -2.0f) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}
