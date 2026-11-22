#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2AE0(s32 arg0, s32 arg1) {
    f32 height = 30.0f;
    f32 depth = (-39.9000015f);




    if (func_8038BEF8(0.0f, 7.0f, -8.9f, 30.2f, 5.0f,
                      (-13.6999998f), 10.6999998f, (-0.699999988f),
                      0.0f, height, depth,
                      0.0f, height, depth) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}
