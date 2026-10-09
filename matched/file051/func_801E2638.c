#include "context.h"

extern f32 D_801E7898;
extern f32 D_801E789C;
extern f32 D_801E78A0;
extern f32 D_801E78A4;
extern f32 D_801E78A8;

s32 func_801E2638(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01C22260) != 0) {
        func_8038BE98(D_801E7898);
        func_8038BD50(D_801E789C, D_801E78A0, 0x4284CCCD);
        D_8038BD88(D_801E78A4, D_801E78A8, 0x42AD3333);
        return 0x15;
    }
    return 0x14;
}
