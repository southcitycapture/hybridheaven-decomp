#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E216C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.79999995f, -46.6f, 108.6f, -20.5f, (-12.3000002f), 37.0f, (-86.1999969f), (-6.30000019f), 9.30000019f, 14.0f, 0.800000012f, 8.80000019f, -0.5f) != 0) {
        func_8038BED4();
        return 0xD;
    }
    return 0xC;
}
