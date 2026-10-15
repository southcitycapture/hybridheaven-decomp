#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 D_8038C158();
extern f32 D_801E8B18;
extern f32 D_801E8B1C;
extern f32 D_801E8B20;
extern f32 D_801E8B24;
extern f32 D_801E8B28;
extern f32 D_801E8B2C;
extern f32 D_801E8B30;
extern f32 D_801E8B34;
extern f32 D_801E8B38;
extern f32 D_801E8B3C;
extern f32 D_801E8B40;
extern f32 D_801E8B44;
extern f32 D_801E8B48;

s32 func_801E2CBC(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801E8B18, 0x40E00000, 0x411E6666, D_801E8B1C, D_801E8B20, D_801E8B24, D_801E8B28, D_801E8B2C, D_801E8B30, D_801E8B34, D_801E8B38, D_801E8B3C, D_801E8B40, D_801E8B44, D_801E8B48) != 0) {
        D_8038C158();
        return 0x15;
    }
    return 0x14;
}
