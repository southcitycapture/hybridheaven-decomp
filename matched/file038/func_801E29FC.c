#include "context.h"

extern f32 D_801E7160;
extern f32 D_801E7164;
extern f32 D_801E7168;
extern f32 D_801E716C;
extern f32 D_801E7170;
extern f32 D_801E7174;
extern f32 D_801E7178;
extern f32 D_801E717C;
extern f32 D_801E7180;
extern f32 D_801E7184;
extern f32 D_801E7188;

s32 func_801E29FC(s32 arg0, s32 arg1) {
    f32 g0 = D_801E7160;
    if (D_8038C17C(0.0f, D_801E7164, (s32)0xC22E0000, (s32)0x40B00000, D_801E7168, D_801E716C, D_801E7170, D_801E7174, -47.0f, D_801E7178, D_801E717C, D_801E7180, D_801E7184, D_801E7188, g0, g0) != 0) {
        D_8038C158();
        return 0x1B;
    }
    return 0x1A;
}
