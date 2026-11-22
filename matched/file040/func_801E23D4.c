#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E23D4(s32 arg0, s32 arg1) {
    f32 a = 18.1000004f;
    f32 b = 43.5999985f;
    if (D_8038C17C(0.0f, 0.799999237f, 0x413E6666, 0xBF000000, 19.8999996f, 3.9000001f, 4.0f, 24.8999996f, -25.0f, a, 31.7999992f, (-24.2999992f), a, 34.0f, b, b) != 0) {
        D_8038C158();
        return 0xC;
    }
    return 0xB;
}
