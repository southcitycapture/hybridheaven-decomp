#include "context.h"

extern f32 D_801EB1B0;
extern f32 D_801EB1B4;
extern f32 D_801EB1B8;
extern f32 D_801EB1BC;
extern f32 D_801EB1C0;
extern f32 D_801EB1C4;
extern f32 D_801EB1C8;

s32 func_801E2ABC(s32 arg0, s32 arg1) {
    f32 a = D_801EB1B0;
    f32 b = D_801EB1B4;
    f32 c = D_801EB1B8;
    f32 d = D_801EB1BC;

    if (D_8038C17C(0.0f, D_801EB1C0, 0xC23C6666, 0x3FCCCCCD,
                   56.5f, -52.5f, D_801EB1C4, D_801EB1C8,
                   a, b, c, a, b, c, d, d) != 0) {
        func_8038C4D8(2, 1);
        return 0x26;
    }
    return 0x25;
}
