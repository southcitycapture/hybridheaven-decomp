#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2D14(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -13.7f, 10.7f, (-0.699999988f), 16.6000004f, 17.5f, 1.60000002f, 0.0f, 30.0f, (-39.9000015f), 1.0f, 37.0f, (-36.7999992f)) != 0) {
        func_8038BED4();
        return 0x28;
    }
    return 0x27;
}
