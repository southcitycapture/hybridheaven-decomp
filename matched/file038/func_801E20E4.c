#include "context.h"

extern f32 D_801E7080;
extern f32 D_801E7084;
extern f32 D_801E7088;
extern f32 D_801E708C;
extern f32 D_801E7090;
extern f32 D_801E7094;
extern f32 D_801E7098;
extern f32 D_801E709C;
extern f32 D_801E70A0;
extern f32 D_801E70A4;
extern f32 D_801E70A8;

s32 func_801E20E4(s32 arg0, s32 arg1) {
    f32 x = D_801E7080;
    if (D_8038C17C(0.0f, D_801E7084, (s32)0xC204CCCD, (s32)0x4104CCCD,
                   D_801E7088, -30.0f, D_801E708C, D_801E7090,
                   D_801E7094, D_801E7098, D_801E709C, D_801E70A0,
                   D_801E70A4, D_801E70A8, x, x) != 0) {
        return 8;
    }
    return 7;
}
