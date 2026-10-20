#include "context.h"

extern f32 D_801E8C30;
extern f32 D_801E8C34;
extern f32 D_801E8C38;
extern f32 D_801E8C3C;
extern f32 D_801E8C40;
extern f32 D_801E8C44;

s32 func_801E33E8(s32 arg0, s32 arg1) {
    f32 temp0 = D_801E8C30;
    f32 temp1 = D_801E8C34;
    if (D_8038C17C(0.0f, D_801E8C38, 0xBDCCCCCD, 0x41266666,
                   temp0, 0.0f, D_801E8C3C, temp0,
                   D_801E8C40, 14.0f, temp1, D_801E8C44,
                   13.5f, temp1, 35.0f, 41.0f) != 0) {
        D_8038C158();
        func_801C7B30(0);
        return 0x1D;
    }
    return 0x1C;
}
