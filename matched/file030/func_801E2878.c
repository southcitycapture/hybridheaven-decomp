#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2878(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.5f, 48.0f, 0.9f, 21.1000004f, 50.7999992f, 21.3999996f, 25.5f, 30.2000008f, 11.6000004f, (-5.80000019f), 31.0f, 22.3999996f, -2.0f) != 0) {
        func_8038BED4();
        return 0x1F;
    }
    return 0x1E;
}
