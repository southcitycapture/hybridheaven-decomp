#include "context.h"
extern f32 D_801E7038;
extern f32 D_801E703C;
extern f32 D_801E7040;
extern f32 D_801E7044;
extern f32 D_801E7048;
extern f32 D_801E704C;

s32 func_801E1F28(s32 arg0, s32 arg1) {
    f32 a = D_801E7038;
    f32 b = D_801E703C;
    f32 c = D_801E7040;
    if (D_8038C17C(0.0f, D_801E7044, 0xC28E0000, 0x41C9999A, D_801E7048, -62.0f, D_801E704C, 57.5f, a, b, c, a, b, c, 58.5f, 41.5f) != 0) {
        D_8038C158();
        return 6;
    }
    return 5;
}
