#include "context.h"

extern f32 D_801E85EC;
extern f32 D_801E85F0;
extern f32 D_801E85F4;
extern f32 D_801E85F8;
extern f32 D_801E85FC;
extern f32 D_801E8600;
extern f32 D_801E8604;
extern f32 D_801E8608;
extern f32 D_801E860C;

s32 func_801E21A0(s32 arg0, s32 arg1) {
    f32 a = D_801E85EC;
    f32 b = D_801E85F0;
    if (D_8038C17C(0.0f, D_801E85F4, 0xC109999A, 0x40600000,
                  D_801E85F8, -3.5f, D_801E85FC, D_801E8600,
                  D_801E8604, D_801E8608, a, a,
                  D_801E860C, a, b, b) != 0) {
        return 8;
    }
    return 7;
}
