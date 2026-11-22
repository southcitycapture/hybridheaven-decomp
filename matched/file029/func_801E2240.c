#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2240(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -9.2f, 38.2f,
                      8.19999981f, 16.3999996f, 34.2000008f, 10.1999998f,
                      2.20000005f, (-3.5999999f), (-0.100000001f), 1.70000005f,
                      (-3.70000005f), 3.4000001f) != 0) {
        func_8038BED4();
        return 0xE;
    }
    return 0xD;
}
