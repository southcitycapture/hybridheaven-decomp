#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E701C;
extern f32 D_801E7020;
extern f32 D_801E7024;
extern f32 D_801E7028;
extern f32 D_801E702C;
extern f32 D_801E7030;
extern f32 D_801E7034;

s32 func_801E1E3C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0xC2093333, 0x40466666, 50.0f, -48.5f, D_801E701C, D_801E7020, D_801E7024, 15.0f, D_801E7028, D_801E702C, 15.5f, D_801E7030, D_801E7034, 45.0f) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}
