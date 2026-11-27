#include "common.h"
extern s32 D_801CCE0C(s32);
extern f32 D_801FD43C;
extern f32 D_801FD440;
extern f32 D_801FD444;
extern void func_801CCE88(s32, s32, s32, s32);

extern s32 func_801C0B8C(u64 time);

s32 func_801F4AD8(s32 arg0, s32 arg1) {
    f32 scale = 0.3f;

    D_801CCE0C(1);
    D_801FD43C += -2.8333333f * scale;
    D_801FD440 += -1.1111112f * scale;
    D_801FD444 += 0.8888889f * scale;
    func_801CCE88(0, (u32)D_801FD43C & 0xFF, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
    if (func_801C0B8C(0x0208531F) != 0) {
        D_801FD43C = 100.0f;
        D_801FD440 = 100.0f;
        D_801FD444 = 255.0f;
        func_801CCE88(0, (u32)D_801FD43C & 0xFF, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
        return 8;
    }
    return 7;
}
