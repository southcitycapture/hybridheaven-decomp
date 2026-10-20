#include "context.h"

extern f32 D_8020891C;
extern f32 D_80208920;
extern f32 D_80208924;
extern f32 D_80208928;
extern f32 D_8020892C;

s32 func_801EA290(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 36.3f, 29.3f, D_8020891C, 1.0f, D_80208920, D_80208924,
                      -13.0f, 5.5f, -12.0f, D_80208928, D_8020892C, -25.0f) != 0) {
        return 0x20;
    }
    return 0x1F;
}
