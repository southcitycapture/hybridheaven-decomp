#include "common.h"
#define CTXLP2(a, b) a##b
#define CTXLP(a, b) CTXLP2(a, b)
#define func_8037B86C_Struct CTXLP(ctxB86C_, __LINE__)
typedef void ctxB86C_325;
typedef void ctxB86C_339;
extern s16 D_80388A68;
extern u8 D_80388A6C;
typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;
extern func_8037BAEC_StructA930 D_8038A930;
void func_800058DC(void *, void *);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
extern void func_8013A28C(s32, func_8037A320_StructE);
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_8037A320_StructA {
    u8 pad[0x30];
    u32 unk30;
    u8 pad2[0xC];
    f32 unk40;
    u8 pad3[4];
    f32 unk48;
    u8 pad4[0x10];
    func_8037A320_StructP *unk5C;
} func_8037A320_StructA;
void func_8037A320(func_8037A320_StructA *arg0, s32 arg1);
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
typedef struct func_8037B86C_Struct { u8 pad[0x40]; f32 x; f32 y; f32 z; u8 pad2[0x10]; u8 *unk5C; } func_8037B86C_Struct;

#undef func_8037B86C_Struct

typedef struct func_80379F04_StructW {
    u8 pad[8];
    f32 w8;
} func_80379F04_StructW;

typedef struct func_80379F04_StructA {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad3[0x10];
    func_8037A320_StructP *unk5C;
} func_80379F04_StructA;

typedef struct func_80379F04_StructB {
    u8 pad[0x94];
    s16 h94;
    u8 unk96;
    u8 unk97;
} func_80379F04_StructB;
extern func_80379F04_StructB *func_80005670(void *, void *);
extern u32 D_802176F0;
extern func_8037AA80_Struct D_803889C0;
extern func_8037AA80_Struct D_803889CC;
extern func_8037AA80_Struct D_803889D8;
extern func_8037AA80_Struct D_803889E4;
extern func_8037AA80_Struct D_803889F0;
extern func_8037AA80_Struct D_803889FC;
extern func_8037AA80_Struct D_80388A08;
extern func_8037AA80_Struct D_80388A14;
extern u16 D_8017DC40[2];
extern s32 D_80011140(s32, s32, func_8037AA80_Struct, s32);

#define CASE(n, D, K)                              \
    case n:                                        \
        D_80011140(arg1, (s32) s0, D, 2);          \
        if (K != p->w0) {                          \
            p->w0 = K;                             \
        }                                          \
        break;

void func_80379F04(func_80379F04_StructA *arg0, s32 arg1) {
    func_8037A320_StructP *s0;
    func_8037A320_StructE *p;
    func_80379F04_StructB *v0;

    s0 = arg0->unk5C;
    p = &s0->e;
    switch (D_80388A6C) {
    CASE(0, D_803889C0, 0x1900045)
    CASE(1, D_803889CC, 0x1900046)
    CASE(2, D_803889D8, 0x1900048)
    CASE(3, D_803889E4, 0x1900047)
    CASE(4, D_803889F0, 0x1900049)
    CASE(5, D_803889FC, 0x190004A)
    CASE(6, D_80388A08, 0x190004C)
    CASE(7, D_80388A14, 0x190004B)
    }
    p->h4 = 0;
    p->h6 = 0;
    v0 = func_80005670(arg0, &D_802176F0);
    if (v0 != NULL) {
        v0->h94 = D_80388A68;
        v0->unk96 = 0;
        v0->unk97 = 0;
    }
    arg0->unk2C = arg0->unk2C & ~0x80;
    arg0->unk40 = D_8038A930.unk0;
    arg0->unk44 = D_8038A930.unk4;
    arg0->unk48 = D_8038A930.unk8;
    if (D_80388A68 < D_8017DC40[1]) {
        ((func_80379F04_StructW *) p)->w8 = 1.0f;
        D_8017DC40[1] = (u16) (D_8017DC40[1] - D_80388A68);
    } else {
        ((func_80379F04_StructW *) p)->w8 = 1.0f;
        D_8017DC40[1] = 0;
    }
    func_8013A28C(arg1, *p);
    func_800058DC(arg0, &func_8037A320);
}
