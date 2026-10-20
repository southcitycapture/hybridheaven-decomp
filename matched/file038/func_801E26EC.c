#include "context.h"

extern f32 D_801E711C;
extern f32 D_801E7120;
extern f32 D_801E7124;
extern f32 D_801E7128;
extern f32 D_801E712C;
extern f32 D_801E7130;
extern f32 D_801E7134;

s32 func_801E26EC(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0xC227999A, 0x413CCCCD, D_801E711C, D_801E7120, D_801E7124, 48.5f, D_801E7128, D_801E712C, 48.5f, D_801E7130, D_801E7134, 49.5f, 41.0f, 41.0f) != 0) {
        D_8038C158();
        func_8038D28C(0x587);
        return 0x18;
    }
    return 0x17;
}
