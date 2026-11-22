#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2BD8(s32 arg0, s32 arg1) {
    f32 temp = 4.19999981f;
    if (func_8038BEF8(0.0f, 2.0f, 5.3f, 3.3f, (-55.2000008f), 5.0f,
            3.20000005f, -41.0f, temp, 16.3999996f,
            0.800000012f, temp, 14.1000004f, 1.5f) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}
