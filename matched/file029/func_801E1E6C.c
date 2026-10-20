#include "context.h"

extern f32 D_801E68F8;
extern f32 D_801E68FC;
extern f32 D_801E6900;
extern f32 D_801E6904;
extern f32 D_801E6908;
extern f32 D_801E690C;
extern f32 D_801E6910;
extern f32 D_801E6914;

s32 func_801E1E6C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -5.3f, 46.4f, D_801E68F8, D_801E68FC, D_801E6900, D_801E6904, -44.0f, D_801E6908, D_801E690C, -42.5f, D_801E6910, D_801E6914) != 0) {
        func_8038BED4();
        return 5;
    }
    return 4;
}
