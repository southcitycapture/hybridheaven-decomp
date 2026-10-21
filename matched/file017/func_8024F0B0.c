#include "context.h"

extern f32 func_8001EB64(s16);
extern u8 D_801BBDA0[];
extern f64 D_8025D2E0;
extern f64 D_8025D2E8;

void func_8024F0B0(u8 *arg0, s32 arg1) {
    s32 t;

    t = (*(u16 *)(arg0 + 0x96))++;
    D_801BBDA0[0x56] = (u32)(func_8001EB64((s16)((s16)(t * 0x64) & 0x1FFF)) * 24.0 + 216.0);
    D_801BBDA0[0x58] = (u32)(func_8001EB64((s16)((s16)(t * 0x6E) & 0x1FFF)) * D_8025D2E0 + D_8025D2E8);
}
