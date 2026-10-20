#include "context.h"

extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

s32 func_801E28F0(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C1088(1, 0, 0x1E) != 0) {
        func_801C10D8(1, 0);
        return 9;
    }
    t = (f32) func_801C1134(1, 0) / 30.0f;
    func_801CCE88(1, 0, (u32) (100.0f * t) & 0xFF, (u32) (255.0f * t) & 0xFF);
    return 8;
}
