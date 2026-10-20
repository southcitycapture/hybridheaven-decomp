#include "context.h"
extern f32 D_801E8AF0;
extern f32 D_801E8AF4;
extern f32 D_801E8AF8;
extern f32 D_801E8AFC;
extern f32 D_801E8B00;
extern f32 D_801E8B04;
extern f32 D_801E8B08;
extern f32 D_801E8B0C;
extern f32 D_801E8B10;
extern f32 D_801E8B14;

s32 func_801E2BD8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 3.0f, 0x40A00000, 0x41300000, D_801E8AF0, 7.0f, D_801E8AF4, D_801E8AF8, D_801E8AFC, D_801E8B00, D_801E8B04, D_801E8B08, D_801E8B0C, D_801E8B10, 21.0f, D_801E8B14) != 0) {
        D_8038C158();
        return 0x14;
    }
    return 0x13;
}
