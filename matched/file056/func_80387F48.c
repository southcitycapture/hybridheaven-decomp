#include "common.h"
extern u16 D_8017DC40;
extern void func_800058DC(s32, void *);
void func_80388388(void *arg0, s32 *arg1);


typedef union func_80387F48_Unk92 {
    u16 h;
    u8 b[2];
} func_80387F48_Unk92;

typedef struct func_80387F48_Struct {
    u8 pad0[0x90];
    u16 unk90;
    func_80387F48_Unk92 unk92;
    u8 pad94[4];
    u8 unk98;
    u8 pad99;
    u16 unk9A;
    u8 unk9C;
    u8 pad9D[0x13];
    s32 unkB0;
} func_80387F48_Struct;
extern void func_80116E80(s32);
extern s32 func_8013D5F4(u8);
extern void func_80006214(void *);
extern s32 D_8001B204();
extern void D_80387DDC();
extern u8 D_80389DD0[];
extern u8 D_80389DD8[];
extern u8 D_80389DF8[];
extern u8 D_80389E00[];
extern u8 D_80389E20[];
extern u8 D_80389E28[];
extern u8 D_80389E44[];
extern u8 D_80389E4C[];
extern u8 D_80389E70[];

void func_80387F48(func_80387F48_Struct *arg0, s32 arg1) {
    s8 sp47;
    s32 k;
    s32 v;

    sp47 = 0;
    k = arg0->unk9C++ < 0xA;
    if (k) {
        return;
    }
    func_80116E80(0x10);
    D_80387DDC(arg0, 0x2E, 0x33, 0, &sp47);
    D_80387DDC(arg0, 0x3E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x4E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x5E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x6E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x7E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x8E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0x9E, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xAE, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xBE, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xCE, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xDE, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xEE, 0x33, 1, &sp47);
    D_80387DDC(arg0, 0xFE, 0x33, 2, &sp47);
    func_80006214(arg0);
    if (arg0->unk98 == 0) {
        goto zero;
    }
    k = arg0->unk98 - 1;
    switch (k) {
    case 0:
        D_8001B204(3, 0x3A, 0x3F, D_80389DD0, 4, func_8013D5F4(0x10));
        D_8001B204(4, 0x3A, 0x4B, D_80389DD8, 4, 2, arg0->unk9A);
        goto end;
    case 1:
        D_8001B204(3, 0x3A, 0x3F, D_80389DF8, 4, func_8013D5F4(0x11));
        D_8001B204(4, 0x3A, 0x4B, D_80389E00, 4, 2, arg0->unk9A);
        goto end;
    case 2:
        D_8001B204(3, 0x3A, 0x3F, D_80389E20, 4, func_8013D5F4(0x12));
        D_8001B204(4, 0x3A, 0x4B, D_80389E28, 4, 2, arg0->unk9A);
        goto end;
    }
    goto end;
zero:
    D_8001B204(3, 0x3A, 0x3F, D_80389E44, 4, func_8013D5F4(arg0->unk92.b[1]));
    switch (arg0->unk92.h) {
    case 4:
    case 0xC:
        D_8001B204(4, 0x3A, 0x4B, D_80389E4C, 4, 2, 0);
        break;
    default:
        D_8001B204(4, 0x3A, 0x4B, D_80389E70, 4, 2, arg0->unk90);
        break;
    }
    if (arg0->unk90 != 0) {
        v = arg0->unk90;
        if (v == 0xFFFF) {
            (&D_8017DC40)[1] = (&D_8017DC40)[0];
        } else {
            (&D_8017DC40)[1] = (&D_8017DC40)[1] + v;
            if ((&D_8017DC40)[0] < (&D_8017DC40)[1]) {
                (&D_8017DC40)[1] = (&D_8017DC40)[0];
            }
        }
    }
end:
    arg0->unkB0 = 0x3C;
    func_800058DC((s32)arg0, func_80388388);
}
