#include "context.h"

extern s32 D_801E68E0;
extern f32 D_801E6D0C;
extern f32 D_801E6D10;
extern f32 D_801E6D14;
extern f32 D_801E6D18;
extern f32 D_801E6D1C;
extern f32 D_801E6D20;

s32 func_801E284C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, -30.3f, 39.9f, 40.0f, D_801E6D0C, D_801E6D10, D_801E6D14, -43.5f, D_801E6D18, 52.0f, -48.0f, D_801E6D1C, D_801E6D20, 50.5f, 50.5f) != 0) {
        D_801E68E0 = 0;
        return 0xF;
    }
    return 0xE;
}
