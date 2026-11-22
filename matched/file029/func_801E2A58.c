#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2A58(s32 arg0, s32 arg1) {
    f32 k = 4.19999981f;
    if (func_8038BEF8(0.0f, 2.80000019f, 5.5f, 3.5f, (-71.0999985f), 5.30000019f, 3.29999995f, (-56.9000015f), k, 19.1000004f, 0.100000001f, k, 16.7000008f, 0.699999988f)) {
        func_8038BED4();
        return 0x20;
    }
    return 0x1F;
}
