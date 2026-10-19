#include "context.h"

extern f32 D_801E8AA8;
extern f32 D_801E8AAC;
extern f32 D_801E8AB0;
extern f32 D_801E8AB4;
extern f32 D_801E8AB8;
extern f32 D_801E8ABC;
extern f32 D_801E8AC0;
extern f32 D_801E8AC4;

s32 func_801E2A20(s32 arg0, s32 arg1) {
    f32 v = D_801E8AA8;
    if (func_8038BEF8(0.0f, 1.0f, -1.8f, 11.4f, 47.5f, D_801E8AAC, D_801E8AB0, D_801E8AB4, D_801E8AB8, D_801E8ABC, v, -1.0f, D_801E8AC0, v) != 0) {
        func_8038BE98(D_801E8AC4);
        func_8038BED4();
        return 0x12;
    }
    return 0x11;
}
