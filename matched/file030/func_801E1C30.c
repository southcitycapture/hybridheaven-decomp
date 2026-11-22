#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1C30(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, 4.5f, 2.4f, 43.9000015f, 6.19999981f, 0.0f,
                      22.3999996f, 1.0f, 15.8999996f, 87.5f, (-3.5999999f),
                      26.7999992f, 84.0f) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
