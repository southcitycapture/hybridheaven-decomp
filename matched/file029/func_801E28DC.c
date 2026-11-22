#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E28DC(s32 arg0, s32 arg1) {
    f32 sp20;

    sp20 = 4.19999981f;
    if (func_8038BEF8(0.0f, 2.79999971f, 5.7f, 3.6f, (-78.4000015f), 5.5999999f, 3.5f, (-72.4000015f), sp20, 20.2999992f, (-0.300000012f), sp20, 19.2999992f, 0.0f) != 0) {
        func_8038BED4();
        return 0x1E;
    }
    return 0x1D;
}
