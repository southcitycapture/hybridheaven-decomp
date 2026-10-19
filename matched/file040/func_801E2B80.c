#include "context.h"

extern f32 D_801E8780;
extern f32 D_801E8784;
extern f32 D_801E8788;
extern f32 D_801E878C;
extern f32 D_801E8790;
extern f32 D_801E8794;
extern f32 D_801E8798;
extern f32 D_801E879C;
extern f32 D_801E87A0;
extern f32 D_801E87A4;

s32 func_801E2B80(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, (s32)0xC1EE6666, (s32)0x420D999A,
                   D_801E8780, D_801E8784, D_801E8788, D_801E878C,
                   -43.0f, D_801E8790, D_801E8794, D_801E8798, D_801E879C,
                   37.5f, D_801E87A0, D_801E87A4) != 0) {
        return 0x16;
    }
    return 0x15;
}
