#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E25D4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 4.46666718f, 0x40F33333, 0xBE4CCCCD, 25.2000008f, (-4.0999999f), 12.3999996f, -19.5f, (-29.7000008f), 31.5f, 40.0999985f, (-20.8999996f), 50.0f, 20.6000004f, 66.1999969f, 47.0f) != 0) {
        D_8038C158();
        return 0xF;
    }
    return 0xE;
}
