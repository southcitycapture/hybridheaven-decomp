#include "common.h"


extern u16 D_8017DC40;

s32 func_803879D0(u8 arg0, u16 arg1) {
    s32 temp_lo;

    temp_lo = (D_8017DC40 * arg0) / 100;
    if (temp_lo < arg1) {
        return arg1;
    }
    return temp_lo & 0xFFFF;
}

/* hh-block asm/nonmatchings/file056/803879D0/_mrg_keep_text_func_80387A20.s {"functions":["func_80387A20"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/803879D0/_mrg_keep_text_func_80387A20.s")

typedef struct func_80387DDC_Struct {
    u8 pad0[8];
    s16 x, y, w, h;
    u8 c0[4];
    u8 c1[4];
    s16 s34, s36;
    u8 pad38[4];
    u16 s3C;
    u8 pad3E[2];
    s32 s40;
    u8 pad44[8];
    s16 s4C, s4E, s50, s52, s54, s56;
    u8 pad58[8];
} func_80387DDC_Struct;
typedef struct {
    u8 pad[0xC];
    void *unkC;
} func_80387DDC_Struct2;
typedef struct {
    u16 *unk0;
    s32 *unk4;
} func_80387DDC_Struct3;
extern void func_80146088(s32, func_80387DDC_Struct2 *, s32, u8);
extern func_80387DDC_Struct3 *D_80172594;
extern func_80387DDC_Struct2 D_80388F14;
void func_80387DDC(s32 arg0, s16 arg1, s16 arg2, u8 arg3, s32 arg4) {
    func_80387DDC_Struct s;
    s.x = arg1;
    s.y = arg2;
    s.w = 0x10;
    s.h = 0x30;
    s.s4C = 0x10; s.s54 = 0x10;
    s.c0[2] = 0xA0; s.s4E = 0x30; s.s56 = 0x30;
    s.c0[2] = 0xA0; s.c0[1] = 0xA0; s.c0[0] = 0xA0;
    s.c0[3] = 0xFF;
    s.c1[2] = 0; s.c1[1] = 0; s.c1[0] = 0;
    s.c1[3] = 0xFF;
    s.s34 = 0x66; s.s36 = 0;
    s.s3C = *D_80172594->unk0;
    s.s40 = D_80172594->unk4[arg3 & 0xFFFF];
    s.s50 = 0; s.s52 = 0;
    D_80388F14.unkC = &s.x;
    func_80146088(arg0, &D_80388F14, arg4, arg3);
}

extern void func_800058DC(s32, void *);
void func_80387F10(s32 arg1, s32 arg2);

s32 func_80126A0C(s32, s32, s32);

void func_80387ED0(s32 arg0, void *arg1) {
    if (func_80126A0C(arg0, 0x12F, 0) != 0) {
        func_800058DC(arg0, &func_80387F10);
    }
}


extern u8 D_801BCC25;
extern void func_80387F48();

void func_80387F10(s32 arg1, s32 arg2) {
    if (D_801BCC25 == 1) {
        func_800058DC(arg1, func_80387F48);
    }
}

#define D_8001B204 D_8001B204__func_80387F48
#define D_80387DDC D_80387DDC__func_80387F48
#define D_80389DD0 D_80389DD0__func_80387F48
#define D_80389DD8 D_80389DD8__func_80387F48
#define D_80389DF8 D_80389DF8__func_80387F48
#define D_80389E00 D_80389E00__func_80387F48
#define D_80389E20 D_80389E20__func_80387F48
#define D_80389E28 D_80389E28__func_80387F48
#define D_80389E44 D_80389E44__func_80387F48
#define D_80389E4C D_80389E4C__func_80387F48
#define D_80389E70 D_80389E70__func_80387F48
#define func_80006214 func_80006214__func_80387F48
#define func_80116E80 func_80116E80__func_80387F48
#define func_8013D5F4 func_8013D5F4__func_80387F48
#define func_80388388 func_80388388__func_80387F48
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
#undef D_8001B204
#undef D_80387DDC
#undef D_80389DD0
#undef D_80389DD8
#undef D_80389DF8
#undef D_80389E00
#undef D_80389E20
#undef D_80389E28
#undef D_80389E44
#undef D_80389E4C
#undef D_80389E70
#undef func_80006214
#undef func_80116E80
#undef func_8013D5F4
#undef func_80388388


void func_80388444();

extern void func_80006088(s32);
extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_80389E90[];
extern u8 D_80389E94[];

void func_80388388(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s8 var_s0;

    temp_v0 = *(s32 *) ((u8 *) arg0 + 0xB0);
    *(s32 *) ((u8 *) arg0 + 0xB0) = temp_v0 - 1;
    if ((temp_v0 < 0) || (D_801BCC25 == 0)) {
        func_8001B204(3, 0, 0, D_80389E90);
        func_8001B204(4, 0, 0, D_80389E94);
        var_s0 = 0xD;
        do {
            func_80006088(arg1[var_s0]);
            var_s0 -= 1;
        } while (var_s0 >= 0);
        *(s32 *) ((u8 *) arg0 + 0xB0) = 5;
        func_800058DC((s32) arg0, (void *) func_80388444);
    }
}


typedef struct func_80388444_Struct {
    u8 pad[0xB0];
    s32 unkB0;
} func_80388444_Struct;

extern void func_80005700(void *);
extern void func_80126E88(s32, void *);

void func_80388444(func_80388444_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        func_80126E88(0x12F, arg0);
        func_80005700(arg0);
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_803879D0[] = {
    0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA3, 0xCF, 0xA3, 0xC6, 0xA3, 0xC6,
    0xA3, 0xC5, 0xA3, 0xCE, 0xA3, 0xC3, 0xA3, 0xC5, 0xA1, 0xB8, 0xA3, 0xD5, 0xA3, 0xD0, 0xA1, 0xB8,
    0x25, 0x70, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x6D, 0xA3, 0xC4, 0xA3, 0xC5, 0xA3, 0xC6, 0xA3, 0xC5, 0xA3, 0xCE, 0xA3, 0xC3, 0xA3, 0xC5,
    0xA1, 0xB8, 0xA3, 0xD5, 0xA3, 0xD0, 0xA1, 0xB8, 0x25, 0x70, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00,
    0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0xA3, 0xD3, 0xA3, 0xD0, 0xA3, 0xC5,
    0xA3, 0xC5, 0xA3, 0xC4, 0xA1, 0xB8, 0xA3, 0xD5, 0xA3, 0xD0, 0xA1, 0xB8, 0x25, 0x70, 0x25, 0x64,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x73, 0x00, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x25, 0x70,
    0xA3, 0xC1, 0xA3, 0xCC, 0xA3, 0xCC, 0xA1, 0xB8, 0x25, 0x70, 0xA3, 0xC8, 0xA3, 0xD0, 0xA1, 0xB8,
    0xA3, 0xD2, 0xA3, 0xC5, 0xA3, 0xC6, 0xA3, 0xD2, 0xA3, 0xC5, 0xA3, 0xD3, 0xA3, 0xC8, 0x00, 0x00,
    0x25, 0x6D, 0xA3, 0xC8, 0xA3, 0xD0, 0xA1, 0xB8, 0xA3, 0xD2, 0xA3, 0xC5, 0xA3, 0xC6, 0xA3, 0xD2,
    0xA3, 0xC5, 0xA3, 0xD3, 0xA3, 0xC8, 0xA1, 0xB8, 0x25, 0x70, 0x25, 0x64, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x38, 0x7A, 0x58, 0x80, 0x38, 0x7A, 0xB8,
    0x80, 0x38, 0x7B, 0x18, 0x80, 0x38, 0x7B, 0x78, 0x80, 0x38, 0x7D, 0xCC, 0x80, 0x38, 0x7D, 0xCC,
    0x80, 0x38, 0x7D, 0xCC, 0x80, 0x38, 0x7D, 0xCC, 0x80, 0x38, 0x7B, 0x9C, 0x80, 0x38, 0x7B, 0xFC,
    0x80, 0x38, 0x7C, 0x5C, 0x80, 0x38, 0x7C, 0xBC, 0x80, 0x38, 0x7D, 0xCC, 0x80, 0x38, 0x7D, 0xCC,
    0x80, 0x38, 0x7D, 0xCC, 0x80, 0x38, 0x7C, 0xE0, 0x80, 0x38, 0x7D, 0x30, 0x80, 0x38, 0x7D, 0x80,
};
