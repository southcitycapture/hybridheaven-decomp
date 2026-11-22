#include "common.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_8038BED4();
s32 func_801E2A94(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0xC1E33333, 0x4246CCCD, 23.6000004f, (-20.2000008f), 107.599998f, 25.2000008f, (-35.7999992f), 26.0f, 37.7999992f, (-48.2000008f), 35.5999985f, 39.4000015f, 50.0f, 35.5f) != 0) {
        func_8038BED4();
        return 0x15;
    }
    return 0x14;
}
