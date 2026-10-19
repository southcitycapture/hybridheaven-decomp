#include "context.h"

extern f32 D_801E877C;
extern f32 D_801E8780;
extern f32 D_801E8784;
extern f32 D_801E8788;
extern f32 D_801E878C;
extern f32 D_801E8790;
extern f32 D_801E8794;

s32 func_801E25D8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 3.0f, 0xC2913333, 0x40B66666,
                   D_801E877C, D_801E8780, D_801E8784, 41.0f,
                   D_801E8788, D_801E878C, 45.5f, -43.5f,
                   14.5f, D_801E8790, 55.5f, D_801E8794) != 0) {
        return 0x1A;
    }
    return 0x19;
}
