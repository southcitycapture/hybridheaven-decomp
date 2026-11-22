#include "common.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_8038BED4();
s32 func_801E29B0(s32 arg0, s32 arg1) {
    f32 tmp = 29.7999992f;
    if (D_8038C17C(0.0f, 2.0f, (s32)0xC11CCCCD, (s32)0xC02CCCCD, 21.7999992f, -21.0f, (-6.69999981f), 12.3999996f, (-43.7000008f), 22.3999996f, 39.7999992f, (-40.7000008f), 24.7000008f, 39.4000015f, tmp, tmp) != 0) {
        func_8038BED4();
        return 0x14;
    }
    return 0x13;
}
