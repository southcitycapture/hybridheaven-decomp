#include "common.h"
extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E2948(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 13.6f, 10.7f, -0.6f, -13.7f,
                      10.7f, -0.7f, 0.0f, 30.0f, -39.9f, 0.0f,
                      30.0f, -39.9f) != 0) {
        func_8038BED4();
        return 0x20;
    }
    return 0x1F;
}
