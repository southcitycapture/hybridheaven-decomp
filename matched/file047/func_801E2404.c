#include "context.h"

s32 func_801E2404(s32 arg0, s32 arg1) {
    f32 t;
    s32 c;

    if (func_801C1088(1, 1, 0x3C) != 0) {
        func_801C10D8(1, 1);
        return 3;
    }
    t = (f32)(u32)func_801C1134(1, 1) / 60.0f;
    c = (u32)(255.0f * t) & 0xFF;
    func_801CCE88(2, (u32)(127.0f * t) & 0xFF, c, c & 0xFF);
    return 2;
}
