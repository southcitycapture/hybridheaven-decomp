#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

extern f32 D_801E88E4;
extern f32 D_801E88E8;
extern f32 D_801E88EC;
extern f32 D_801E88F0;
extern f32 D_801E88F4;
extern f32 D_801E88F8;
extern f32 D_801E88FC;
extern f32 D_801E8900;
extern f32 D_801E8904;

s32 func_801E1CC8(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.5f, 537.1f, 41.0f,
            D_801E88E4, D_801E88E8, D_801E88EC, D_801E88F0,
            D_801E88F4, -43.5f, D_801E88F8, D_801E88FC,
            D_801E8900, D_801E8904) != 0) {
        return 3;
    }
    return 2;
}
