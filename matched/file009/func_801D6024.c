#include "context.h"
typedef struct func_801D6024_F { u8 p0[4]; f32 u4; f32 u8; f32 uC; u8 p10[8]; f32 u18; f32 u1C; f32 u20; s32 u24; s32 u28; s16 u2C; s32 u30; u8 p34[0x14]; u8 u48; u8 u49; u8 u4A; u8 u4B; } func_801D6024_F;
typedef struct func_801D6024_E { u8 p0[0x22]; u8 u22; u8 p23[0xD]; func_801D6024_F *u30; } func_801D6024_E;
typedef struct func_801D6024_D { u8 p0[0x68]; f32 u68; f32 u6C; f32 u70; u8 p74[0x3C]; f32 uB0; f32 uB4; f32 uB8; f32 uBC; f32 uC0; f32 uC4; } func_801D6024_D;
typedef struct func_801D6024_C { u8 p0[0x22]; u8 u22; } func_801D6024_C;
typedef struct func_801D6024_B { u8 p0[0x24]; func_801D6024_C *u24; u8 p28[0x34]; func_801D6024_D *u5C; } func_801D6024_B;
typedef struct func_801D6024_A { u8 p0[0xC]; func_801D6024_B *uC; u8 p10[0x80]; f32 u90; u8 p94[0xC]; f32 uA0; f32 uA4; } func_801D6024_A;
extern u8 D_801E14B4[];
extern u8 D_801E14C8[];
extern f32 D_801E3704;
extern f64 D_801E3708;
extern f64 D_801E3710;
extern u8 func_801D6280[];
s32 func_80005E44(func_801D6024_A *, void *, func_801D6024_E **, func_801D6024_D *);
void func_800062F8(func_801D6024_E *, s32);

void func_801D6024(func_801D6024_A *arg0, func_801D6024_E **arg1) {
    func_801D6024_D *d = arg0->uC->u5C;
    f32 t;
    f32 k;
    u8 a;
    func_801D6024_F *v;

    if (func_80005E44(arg0, D_801E14B4, arg1, d) == 0) {
        func_80005700(arg0);
        return;
    }
    func_80006214(arg0);
    k = D_801E3704;
    (*arg1)->u30->u2C = 0xE0;
    (*arg1)->u30->u4B = 0xC0;
    (*arg1)->u30->u4A = 0;
    v = (*arg1)->u30;
    a = v->u4A;
    v->u49 = a;
    (*arg1)->u30->u48 = a;
    (*arg1)->u30->u18 = k;
    (*arg1)->u30->u1C = k;
    (*arg1)->u30->u20 = k;
    (*arg1)->u30->u4 = 0.0f;
    (*arg1)->u30->u8 = 0.0f;
    (*arg1)->u30->uC = 0.0f;
    (*arg1)->u30->u24 = 0x100;
    (*arg1)->u30->u30 = (s32)D_801E14C8 | 0x40000000;
    if (arg0->uC->u24->u22 == 0) {
        (*arg1)->u22 = 0;
    } else {
        (*arg1)->u22 = 1;
    }
    arg0->u90 = -0.25f;
    func_800062F8(*arg1, 0x80000A00);
    if (arg0->uC->u24->u22 == 0) {
        arg0->uA0 = (d->uB0 - d->uBC) / 4.5;
        arg0->uA4 = (d->uB8 - d->uC4) / 4.5;
    } else {
        arg0->uA0 = 2.0 * d->u68 * D_801E3708;
        t = arg0->uA0;
        arg0->uA4 = (d->u6C + d->u70) * D_801E3710;
        if (t < arg0->uA4) {
            arg0->uA4 = t;
        }
    }
    func_800058DC(arg0, (s32)func_801D6280);
}
