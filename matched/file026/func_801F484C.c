#include "context.h"

extern f32 D_801FD2C0;
extern f32 D_801FD2C4;
extern f32 D_801FD2C8;
extern s32 D_801CCE0C(s32);

s32 func_801F484C(s32 arg0, s32 arg1) {
    f32 h = 0.5f;
    D_801CCE0C(1);
    D_801FD43C += -4.25f * h;
    D_801FD440 += D_801FD2C0 * h;
    D_801FD444 += D_801FD2C4 * h;
    func_801CCE88(0, (u32) D_801FD43C & 0xFF, (u32) D_801FD440 & 0xFF, (u32) D_801FD444 & 0xFF);
    if (func_801C0B8C(0x01DA8C5F) != 0) {
        D_801FD43C = 76.5f;
        D_801FD440 = D_801FD2C8;
        D_801FD444 = 156.0f;
        return 7;
    }
    return 6;
}
