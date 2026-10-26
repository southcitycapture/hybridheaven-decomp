#include "common.h"
extern void D_8038C158(void);

extern f32 D_801EB124;
extern f32 D_801EB128;
extern f32 D_801EB12C;
extern f32 D_801EB130;
extern f32 D_801EB134;
extern f32 D_801EB138;
extern f32 D_801EB13C;
extern f32 D_801EB140;
extern s32 B_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2758(s32 arg0, s32 arg1) {
    f32 a = D_801EB124;
    f32 b = D_801EB128;
    f32 c = D_801EB12C;
    f32 d = D_801EB130;

    if (B_8038C17C(0.0f, 2.0f, a, 17.5f, b, a, 17.0f, b, c, D_801EB134, d, c, D_801EB138, d, D_801EB13C, D_801EB140) != 0) {
        D_8038C158();
        return 0x22;
    }
    return 0x21;
}
