#include "context.h"

extern f32 func_8001EB64(s16);
extern u8 D_801BBDA0[];
extern f64 D_8025D038;
extern f64 D_8025D040;
extern f64 D_8025D048;
extern f64 D_8025D050;

void func_8024CCC4(u8 *arg0, s32 arg1) {
    s32 v;

    v = (*(u16 *)(arg0 + 0x96))++;
    D_801BBDA0[0x55] = (u32)((f64)func_8001EB64((s16)((s16)(v * 0x64) & 0x1FFF)) * D_8025D038 + D_8025D040);
    D_801BBDA0[0x59] = (u32)((f64)func_8001EB64((s16)((s16)(v * 0x6E) & 0x1FFF)) * D_8025D048 + D_8025D050);
}
