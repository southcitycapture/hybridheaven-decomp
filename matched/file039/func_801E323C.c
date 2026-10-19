#include "context.h"

extern f32 D_801EB274;
extern f32 D_801EB278;
extern f32 D_801EB27C;
extern f32 D_801EB280;
extern f32 D_801EB284;
extern f32 D_801EB288;
extern f32 D_801EB28C;
extern f32 D_801EB290;
extern f32 D_801EB294;
extern f32 D_801EB298;
extern f32 D_801EB29C;

s32 func_801E323C(s32 arg0, s32 arg1) {
    f32 v = D_801EB274;
    if (D_8038C17C(0.0f, 4.0f, 0x40D66666, 0x4139999A,
                   D_801EB278, D_801EB27C, D_801EB280, D_801EB284,
                   D_801EB288, D_801EB28C, D_801EB290, D_801EB294,
                   D_801EB298, D_801EB29C, v, v)) {
        return 0x37;
    }
    return 0x36;
}
