#include "context.h"

extern f32 D_801F573C;
extern f32 D_801F5740;
extern f32 D_801F5744;
extern f32 D_801F5748;
extern f32 D_801F574C;
extern f32 D_801F5750;
extern f32 D_801F5754;
extern f32 D_801F5758;

s32 func_801E285C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -7.6f, 11.7f,
                      D_801F573C, D_801F5740, D_801F5744, D_801F5748, 2, 14.0f,
                      D_801F574C, D_801F5750, D_801F5754, D_801F5758) != 0) {
        return 0x23;
    }
    return 0x22;
}
