#include "context.h"

s32 func_801E5404(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;

    if (func_801C1088(3, 4, 0x1E) != 0) {
        func_801C10D8(3, 4);
        return 5;
    }
    q = (f32)func_801C1134(3, 4) / 30.0f;
    v = (u32)(-127.0f * q + 127.0f);
    S(5)->unk4B = v;
    S(5)->unk4F = v;
    S(22)->unk4B = v;
    S(22)->unk4F = v;
    return 4;
}
