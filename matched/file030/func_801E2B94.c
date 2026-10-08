#include "common.h"

s32 func_8038BEF8(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h, f32 i, f32 j, f32 k, f32 l, f32 m, f32 n);
extern f32 D_801EC624;
extern f32 D_801EC628;
extern f32 D_801EC62C;
extern f32 D_801EC630;
extern f32 D_801EC634;

s32 func_801E2B94(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -13.7f, 10.7f, D_801EC624, D_801EC628, 17.5f, D_801EC62C, 0.0f, 30.0f, D_801EC630, 1.0f, 37.0f, D_801EC634) != 0) {
        return 0x23;
    }
    return 0x22;
}
