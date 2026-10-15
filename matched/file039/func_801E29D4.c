#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void D_8038C158(void);
extern f32 D_801EB18C;
extern f32 D_801EB190;
extern f32 D_801EB194;
extern f32 D_801EB198;
extern f32 D_801EB19C;
extern f32 D_801EB1A0;
extern f32 D_801EB1A4;
extern f32 D_801EB1A8;
extern f32 D_801EB1AC;

s32 func_801E29D4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801EB18C, 0xC1F5999A, 0x40D00000, D_801EB190, D_801EB194, 10.5f, 19.5f, -49.0f, D_801EB198, D_801EB19C, D_801EB1A0, D_801EB1A4, D_801EB1A8, 21.0f, D_801EB1AC) != 0) {
        D_8038C158();
        return 0x25;
    }
    return 0x24;
}
