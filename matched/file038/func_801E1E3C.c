#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1E3C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0xC2093333, 0x40466666, 50.0f, -48.5f, (7.6f), (36.3f), (-52.2f), 15.0f, (48.6f), (-48.8f), 15.5f, (53.2f), (35.9f), 45.0f) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}
