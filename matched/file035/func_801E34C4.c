#include "context.h"

extern f32 D_801E8C48;
extern f32 D_801E8C4C;
extern f32 D_801E8C50;
extern f32 D_801E8C54;
extern f32 D_801E8C58;
extern f32 D_801E8C5C;
extern f32 D_801E8C60;

s32 func_801E34C4(s32 arg0, s32 arg1) {
    f32 tmp = D_801E8C48;
    if (D_8038C17C(0.0f, 4.0f, 0xC10B3333, 0x40D66666, D_801E8C4C, tmp, D_801E8C50, 1.5f, 2.5f,
                   D_801E8C54, tmp, D_801E8C58, D_801E8C5C, -9.0f, 50.5f, D_801E8C60) != 0) {
        return 0x1E;
    }
    return 0x1D;
}
