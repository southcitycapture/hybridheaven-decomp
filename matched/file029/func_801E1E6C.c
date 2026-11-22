#include "common.h"

extern void func_8038BED4(void);
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1E6C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.0f, -5.3f, 46.4f, 8.39999962f, (-1.60000002f), 58.2000008f, 10.3999996f, -44.0f, 62.2999992f, (-0.600000024f), -42.5f, 65.1999969f, (-0.100000001f)) != 0) {
        func_8038BED4();
        return 5;
    }
    return 4;
}
