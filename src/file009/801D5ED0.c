#include "common.h"

typedef struct func_801D5ED0_StructB {
    u8 pad0[0x30];
    u8 *unk30;
} func_801D5ED0_StructB;
typedef struct func_801D5ED0_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D5ED0_StructC;
typedef struct func_801D5ED0_Struct {
    u8 pad0[0xC];
    func_801D5ED0_StructC *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 pad7C[0x14];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5ED0_Struct;

extern u8 D_801CD500(s32, u8, f32);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8012D7A8();
extern void func_801CE5B0();
extern u8 func_801CE898[];

void func_801D5ED0(func_801D5ED0_Struct *arg0, func_801D5ED0_StructB **arg1) {
    s32 i;
    f32 f;
    func_801D5ED0_StructB **p;

    func_8012D7A8();
    if (arg0->unk90 - 10 < arg0->unk92) {
        f = (arg0->unk92 - arg0->unk90 + 10) / 10.0;
        for (i = 0, p = *(func_801D5ED0_StructB ***)&arg1; i < arg0->unk94; i++, p++) {
            u8 *s = (*p)->unk30;
            s[0x4B] = D_801CD500(arg0->unk7B, 0, f);
        }
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0(arg0, arg1);
        func_800058DC(arg0, func_801CE898);
    }
}

#define func_801D6024 func_801D6024__func_801D5FE0

typedef struct func_801D5FE0_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x63 - 0x28];
    u8 unk63;
} func_801D5FE0_StructInner;

typedef struct func_801D5FE0_StructOuter {
    u8 pad0[0xC];
    func_801D5FE0_StructInner *unkC;
} func_801D5FE0_StructOuter;

extern void func_801D6024();

void func_801D5FE0(func_801D5FE0_StructOuter *arg0, s32 arg1) {
    func_801D5FE0_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0->unk63 != 0 && temp_v0->unk24 != 0) {
        func_800058DC(arg0, func_801D6024);
    }
}
#undef func_801D6024

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D5ED0/D_801E36E0.s")

typedef struct func_801D6024_F { u8 p0[4]; f32 u4; f32 u8; f32 uC; u8 p10[8]; f32 u18; f32 u1C; f32 u20; s32 u24; s32 u28; s16 u2C; s32 u30; u8 p34[0x14]; u8 u48; u8 u49; u8 u4A; u8 u4B; } func_801D6024_F;
typedef struct func_801D6024_E { u8 p0[0x22]; u8 u22; u8 p23[0xD]; func_801D6024_F *u30; } func_801D6024_E;
typedef struct func_801D6024_D { u8 p0[0x68]; f32 u68; f32 u6C; f32 u70; u8 p74[0x3C]; f32 uB0; f32 uB4; f32 uB8; f32 uBC; f32 uC0; f32 uC4; } func_801D6024_D;
typedef struct func_801D6024_C { u8 p0[0x22]; u8 u22; } func_801D6024_C;
typedef struct func_801D6024_B { u8 p0[0x24]; func_801D6024_C *u24; u8 p28[0x34]; func_801D6024_D *u5C; } func_801D6024_B;
typedef struct func_801D6024_A { u8 p0[0xC]; func_801D6024_B *uC; u8 p10[0x80]; f32 u90; u8 p94[0xC]; f32 uA0; f32 uA4; } func_801D6024_A;
extern u8 D_801E14B4[];
extern u8 D_801E14C8[];

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
    k = 0.00999999978f;
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
        arg0->uA0 = 2.0 * d->u68 * 0.3061224489795918;
        t = arg0->uA0;
        arg0->uA4 = (d->u6C + d->u70) * 0.5217391304347826;
        if (t < arg0->uA4) {
            arg0->uA4 = t;
        }
    }
    func_800058DC(arg0, (s32)func_801D6280);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801D5ED0/func_801D6280.s")

