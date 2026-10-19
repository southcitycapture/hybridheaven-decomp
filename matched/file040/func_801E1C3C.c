#include "context.h"

extern f32 D_801E84F0;
extern f32 D_801E84F4;
extern f32 D_801E84F8;
extern f32 D_801E84FC;
extern f32 D_801E8500;
extern f32 D_801E8504;
extern f32 D_801E8508;
extern f32 D_801E850C;
extern f32 D_801E8510;
extern f32 D_801E8514;

s32 func_801E1C3C(s32 arg0, s32 arg1) {
    f32 v = D_801E84F0;
    if (D_8038C17C(0, D_801E84F4, 0xC0833333, 0x40A66666, D_801E84F8, 9.5f,
                   D_801E84FC, D_801E8500, D_801E8504, D_801E8508,
                   D_801E850C, D_801E8510, D_801E8514, -0.5f, v, v) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}
