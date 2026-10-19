#include "context.h"

extern f32 D_801E86E0;
extern f32 D_801E86E4;
extern f32 D_801E86E8;
extern f32 D_801E86EC;
extern f32 D_801E86F0;
extern f32 D_801E86F4;
extern f32 D_801E86F8;
extern f32 D_801E86FC;
extern f32 D_801E8700;
extern f32 D_801E8704;

s32 func_801E27AC(s32 arg0, s32 arg1) {
    f32 temp = D_801E86E0;
    if (D_8038C17C(0.0f, D_801E86E4, (s32)0xC1CD999A, (s32)0x42C1CCCD, D_801E86E8, D_801E86EC, temp, D_801E86F0, D_801E86F4, D_801E86F8, D_801E86FC, -41.5f, D_801E8700, D_801E8704, temp, temp) != 0) {
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}
