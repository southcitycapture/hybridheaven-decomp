#include "context.h"

extern s32 D_801CCE0C(s32);
extern f32 D_801FD2B8;
extern f32 D_801FD2BC;
extern f32 D_801FD440;
extern f32 D_801FD444;

s32 func_801F45C8(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -2.125f * h;
    D_801FD440 += D_801FD2B8 * h;
    D_801FD444 += D_801FD2BC * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01BC07DF) != 0) {
        D_801FD43C = 255.0f;
        D_801FD440 = 100.0f;
        D_801FD444 = 100.0f;
        return 6;
    }
    return 5;
}
