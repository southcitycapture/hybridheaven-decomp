#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E9470;
extern f32 D_801E9474;
extern f32 D_801E9478;
extern f32 D_801E947C;
extern f32 D_801E9480;
extern f32 D_801E9484;
extern f32 D_801E9488;
extern f32 D_801E948C;

s32 func_801E2440(s32 arg0, s32 arg1) {
    f32 temp;
    f32 temp2;

    temp = D_801E9470;
    temp2 = D_801E9474;
    if (func_8038BEF8(0.0f, 1.5f, -71.2f, temp, D_801E9478, -73.0f, temp, D_801E947C, D_801E9480, temp2, D_801E9484, D_801E9488, temp2, D_801E948C) != 0) {
        return 0x19;
    }
    return 0x18;
}
