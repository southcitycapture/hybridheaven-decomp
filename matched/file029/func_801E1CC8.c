#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1CC8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -65.1f, 64.9f, 10.5f, (-51.4000015f), 90.0999985f,
                      9.30000019f, (-41.4000015f), 68.4000015f, 1.29999995f, -40.5f,
                      68.6999969f, 3.9000001f) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}
