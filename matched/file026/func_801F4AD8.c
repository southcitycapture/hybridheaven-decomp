#include "common.h"
extern s32 D_801CCE0C(s32);
s32 func_801C0B8C(u64 time);
extern void func_801CCE88(s32, s32, s32, s32);


extern f32 D_801FD43C;
extern f32 D_801FD440;
extern f32 D_801FD444;
extern f32 D_801FD2CC;
extern f32 D_801FD2D0;
extern f32 D_801FD2D4;
extern f32 D_801FD2D8;
extern f32 D_801FD438[];
extern f32 D_801FD42C[];
extern f32 D_801FD430[];

s32 func_801F4AD8(s32 arg0, s32 arg1) {
    f32 scale;

    D_801CCE0C(1);
    scale = D_801FD2CC;
    D_801FD438[1] = *(volatile f32 *)&D_801FD43C + D_801FD2D0 * scale;
    D_801FD42C[5] = *(volatile f32 *)&D_801FD440 + D_801FD2D4 * scale;
    D_801FD430[5] = *(volatile f32 *)&D_801FD444 + D_801FD2D8 * scale;
    func_801CCE88(0, (u8)(u32)D_801FD43C, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
    if (func_801C0B8C(0x0208531F) != 0) {
        D_801FD43C = 100.0f;
        D_801FD440 = 100.0f;
        D_801FD444 = 255.0f;
        func_801CCE88(0, (u32)D_801FD43C & 0xFF, (u32)D_801FD440 & 0xFF, (u32)D_801FD444 & 0xFF);
        return 8;
    }
    return 7;
}
