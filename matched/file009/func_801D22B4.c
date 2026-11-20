#include "common.h"
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
extern void D_801CD924(u8 arg0, u8 arg1, u8 arg2, f32 arg3);
extern void func_800058DC(void *arg0, s32 arg1);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
extern void func_801CE898();
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
void func_801D2088(s32 arg0, s32 arg1, s32 arg2);
typedef struct func_801D2530_Elem {
    u8 pad0[0x30];
    s32 unk30;
} func_801D2530_Elem;
typedef struct func_801D2530_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2530_StructC;
typedef struct func_801D2530_Struct {
    u8 pad0[0xC];
    func_801D2530_StructC *unkC;
    u8 pad10[0x6C - 0x10];
    s32 unk6C;
    u8 pad70[4];
    s32 unk74;
    u8 pad78[0x88 - 0x78];
    f32 unk88;
    u8 pad8C[0x92 - 0x8C];
    u16 unk92;
    u8 unk94;
} func_801D2530_Struct;
void func_801D2530(func_801D2530_Struct *arg0, func_801D2530_Elem **arg1);


typedef struct func_801D22B4_StructP {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D22B4_StructP;

typedef struct func_801D22B4_StructB {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D22B4_StructP *unk30;
} func_801D22B4_StructB;

typedef struct func_801D22B4_StructA {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[8];
    s32 unk6C;
    u8 pad70[4];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D22B4_StructA;

void func_801D22B4(func_801D22B4_StructA *arg0, func_801D22B4_StructB **arg1) {
    u8 n;
    s32 m;
    u16 i;
    s32 d;
    s32 offset;
    f32 t;
    func_801D22B4_StructP *p;
    f32 v;
    f32 r;

    for (i = 0, m = n = arg0->unk94; i < m; i++) {
        offset = i * 10;
        if (offset > arg0->unk92) {
            continue;
        }
        arg1[i]->unk22 = 1;
        d = (s16)(arg0->unk92 - offset);
        p = arg1[i]->unk30;
        if (d <= 10) {
            t = (f32)((f64)(f32)d / 10.0);
            D_801CD5E0(arg0, p, t);
            D_801CD728(arg0, p, t);
            v = (f32)(((f64)arg0->unk60 + (1.0 - (f64)t)) - 1.0);
            p->unk20 = v;
            p->unk1C = v;
            p->unk18 = v;
        } else {
            func_801D2088((s32)p, arg0->unk6C, arg0->unk74);
        }
        m = n = arg0->unk94;
    }
    r = (f32)(((f64)(f32)arg0->unk92 / 10.0) / (f64)(f32)n);
    if ((f64)r >= 1.0) {
        r = 1.0f;
    }
    D_801CD924(0x30, 0x80, 0xA0, r);
    if (arg0->unkC->unk4C & 0x8000) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    if (arg0->unk90 < arg0->unk92++) {
        arg0->unkC->unk4C = arg0->unkC->unk4C + 1;
        func_800058DC(arg0, (s32)func_801D2530);
    }
}
