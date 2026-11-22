#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1D9C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 10.3f, 1.5f, 2.70000005f, 10.6000004f, 3.0999999f, 2.79999995f, (-7.9000001f), 10.0f, (-0.800000012f), (-6.69999981f), 11.8999996f, (-0.300000012f)) != 0) {
        func_8038BED4();
        return 4;
    }
    return 3;
}
