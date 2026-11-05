#include "common.h"
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64);
extern s32 func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CD5C8(s32, s32, s32, s32);


s32 func_801E3530(s32 arg0, s32 arg1) {
    s64 time;
    f32 x;
    f32 r;
    f32 g;
    f32 b;

    if (func_801C0B8C(0x0138CE20) != 0) {
        func_801C0EB0(1, 0);
        func_801CCEC8(0, 0, -13, 0);
        func_801CCEC8(1, 0, 115, 0);
        func_801CD5C8(0, 1, 2, 242);
        func_801CD5C8(1, 1, 2, 242);
        func_801CCE88(0, 255, 255, 0);
        func_801CCE88(1, 255, 255, 0);
        return 14;
    }
    time = func_801C0F18(1, 0);
    x = ((func_80034C24(time) / 1000000.0) / 4) * 17.0;
    r = ((func_80034C24(time) / 1000000.0) / 4) * 255.0;
    g = ((func_80034C24(time) / 1000000.0) / 4) * 255.0;
    b = ((func_80034C24(time) / 1000000.0) / 4) * 0;
    func_801CD5C8(0, 1, 2, (s8)(s32)(255.0f - (x * 0.7111111283f)));
    func_801CD5C8(1, 1, 2, (s8)(s32)(255.0f - (x * 0.7111111283f)));
    func_801CCE88(0, (u32)r & 0xFF, (u32)g & 0xFF, (u32)b & 0xFF);
    func_801CCE88(1, (u32)r & 0xFF, (u32)g & 0xFF, (u32)b & 0xFF);
    return 13;
}
