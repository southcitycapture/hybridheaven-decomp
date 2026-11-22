#include "common.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_8038BED4();
s32 func_801E27AC(s32 arg0, s32 arg1) {
    f32 temp = 59.0999985f;
    if (D_8038C17C(0.0f, 1.83333397f, (s32)0xC1CD999A, (s32)0x42C1CCCD, 29.1000004f, (-36.4000015f), temp, 25.7999992f, (-32.5999985f), 69.0999985f, 34.0999985f, -41.5f, 22.2000008f, 36.5999985f, temp, temp) != 0) {
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}
