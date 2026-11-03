#include "common.h"
f32 func_8001EB64(s16);
extern void (*D_80216D10[])(void *, s32);
extern void func_80147AA8(s32, s32, s32, s32);
extern void func_80147AF0(s32, s32, s32, s32);
extern void func_80147C28(s32, s32, s32, s32);
extern s32 func_801FA2E0();


typedef struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801F7DB4_Struct;

void func_801F7DB4(func_801F7DB4_Struct *arg0, s32 arg1) {
    u8 sp2F;
    u8 sp2E;
    u8 sp2D;
    u8 sp2C;
    u8 sp2B;
    s32 deg;
    f32 f;

    deg = 150;
    f = func_8001EB64(arg0->unk90);
    sp2F = (u32) (((f + 1.0f) * 0.5 * 230.0) + 20.0);
    if (arg0->unk90 < (s16) (deg / 0.0439453125)) {
        if (arg0->unk90 < 0) {
            arg0->unk90 += 0x240;
        } else {
            arg0->unk90 += 0x60;
        }
    }
    sp2E = (u32) (((func_8001EB64(arg0->unk92) + 1.0f) * 0.5 * 230.0) + 20.0);
    sp2D = (u32) (((func_8001EB64(arg0->unk94) + 1.0f) * 0.5 * 200.0) + 50.0);
    sp2C = (u32) ((func_8001EB64(arg0->unk96) + 1.0f) * 0.5 * 80.0);
    deg = 70;
    sp2B = (u32) ((func_8001EB64(arg0->unk98) + 1.0f) * 0.5 * 150.0);
    if ((s16) (deg / 0.0439453125) < arg0->unk90) {
        if (arg0->unk98 < 0) {
            arg0->unk98 += 0x60;
        }
    }
    arg0->unk9A -= 5;
    if (*(s16 *) ((u8 *) arg0 + 0x9A) < -0x6E) {
        arg0->unk9A = -0x6E;
    }
    if (0) {
        func_801FA2E0(&sp2B);
    }
    func_80147AA8(0, sp2F, sp2E, sp2D);
    func_80147AF0(0, sp2C, sp2B, 0);
    func_80147C28(0, ((s8 *) &arg0->unk9A)[1], -0x64, -0x43);
    if (arg0->unk98 >= -0x7FF) {
        func_801FA2E0();
        arg0->unk3C = 2;
    }
}
