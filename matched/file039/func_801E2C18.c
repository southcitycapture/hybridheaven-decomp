#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EB1CC;
extern f32 D_801EB1D0;
extern f32 D_801EB1D4;
extern f32 D_801EB1D8;
extern f32 D_801EB1DC;
extern f32 D_801EB1E0;
extern f32 D_801EB1E4;
extern f32 D_801EB1E8;
extern f32 D_801EB1EC;

s32 func_801E2C18(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0xC0E33333, 0xC2180000, D_801EB1CC, D_801EB1D0, D_801EB1D4, D_801EB1D8, D_801EB1DC, D_801EB1E0, D_801EB1E4, D_801EB1E8, -12.0f, D_801EB1EC, 41.5f, 41.5f) != 0) {
        D_8038C158();
        func_8038D28C(8);
        return 0x29;
    }
    return 0x28;
}
