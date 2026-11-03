#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801EDCEC;
extern f32 D_801EDCF4;
extern f32 D_801EDCF8;
extern f32 D_801EDCFC;
extern f32 D_801EDD00;
extern f32 D_801EDD04;

s32 func_801E2D2C(s32 arg0, s32 arg1) {
    f32 a = D_801EDCEC;
    f32 d;
    if (a) {}
    d = 33.3f;
    if (D_8038C17C(0.0f, D_801EDCF4, 71.3f, 12.1f, D_801EDCF8, D_801EDCFC, D_801EDD00, D_801EDD04, a, 12.5f, 10.5f, a, 12.5f, 10.5f, d, d) != 0) {
        return 0x33;
    }
    return 0x32;
}
