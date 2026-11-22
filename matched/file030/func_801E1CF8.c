#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1CF8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -2.3f, 53.8f, 135.899994f, 1.60000002f, 16.5f,
                      64.9000015f, (-2.79999995f), (-6.30000019f), (-24.2999992f), -2.5f,
                      19.3999996f, 28.2999992f) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
