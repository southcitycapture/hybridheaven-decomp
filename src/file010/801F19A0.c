#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F19A0.s")

#define D_801BBBF0 D_801BBBF0__func_801F1D74
#define func_800058DC func_800058DC__func_801F1D74
#define func_80020718 func_80020718__func_801F1D74
#define func_801518D4 func_801518D4__func_801F1D74
#define func_801F1FD0 func_801F1FD0__func_801F1D74
#define func_801F2438 func_801F2438__func_801F1D74
#define func_801F2A20 func_801F2A20__func_801F1D74
#define func_801F2B44 func_801F2B44__func_801F1D74
#define func_801F38B8_Base func_801F38B8_Base__func_801F1D74
#define func_801F38B8_Hi func_801F38B8_Hi__func_801F1D74
#define func_801F38B8_Lo func_801F38B8_Lo__func_801F1D74
#define func_801F38B8_Mid func_801F38B8_Mid__func_801F1D74
#define func_801F38B8_Node func_801F38B8_Node__func_801F1D74
#define func_801F38B8_Obj func_801F38B8_Obj__func_801F1D74
#define func_801F1D74 D_801F1D74
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern struct func_801F38B8_Base D_801BBBF0;
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};
#undef func_801F1D74

typedef struct {
    u8 pad0[8];
    f32 unk8;
} func_801F1D74_StructF;

typedef struct {
    u8 pad0[0x2C];
    func_801F1D74_StructF *unk2C;
} func_801F1D74_StructE0;

typedef struct {
    u8 pad0[0x24];
    void *unk24;
    u8 unk28;
    u8 pad29[0xB7];
    func_801F1D74_StructE0 *unkE0;
} func_801F1D74_StructG;

typedef struct {
    u8 pad0[0x30];
    func_801F1D74_StructF *unk30;
} func_801F1D74_Struct24;

typedef struct {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_801F1D74_Struct38;

typedef struct {
    u8 pad0[0x24];
    func_801F1D74_Struct24 *unk24;
    u8 pad28[0x10];
    func_801F1D74_Struct38 *unk38;
    u8 pad3C[0x54];
    s16 unk90;
} func_801F1D74_Arg0;
extern void func_801F1FD0();
extern void func_801F2438();
extern void func_801F2A20();
extern void func_801F2B44();

#define GG ((func_801F1D74_StructG *)&D_801BBBF0)

void func_801F1D74(func_801F1D74_Arg0 *arg0, s32 arg1) {
    func_801F1D74_Struct38 *p;
    f64 cur;
    s32 kind;

    GG->unk28 = GG->unk28 & ~(u8)((arg0->unk38->unk14 >> 16) >> 12);
    p = arg0->unk38;
    cur = arg0->unk24->unk30->unk8;
    if (cur == (f32)p->unk8 / 10.0 + 0.5) {
        if ((f32)arg0->unk90 < GG->unkE0->unk2C->unk8) {
            func_800058DC((s32)arg0, func_801F2A20);
            return;
        }
        if (arg0 == GG->unk24) {
            kind = p->unk18 & 0xFF;
            if (kind == 2) {
                func_80020718(0x177);
            } else if (kind == 1) {
                func_80020718(0x178);
            } else {
                func_80020718(0x1FA);
            }
            func_801518D4(0, 7, 6);
            func_800058DC((s32)arg0, func_801F1FD0);
            return;
        }
    }
    if (cur == (f32)(s16)(p->unk10 >> 16) + 0.5) {
        if (GG->unkE0->unk2C->unk8 < (f32)arg0->unk90) {
            func_800058DC((s32)arg0, func_801F2B44);
            return;
        }
        if (arg0 == GG->unk24) {
            kind = p->unk18 & 0xFF;
            if (kind == 1) {
                func_80020718(0x177);
            } else if (kind == 2) {
                func_80020718(0x178);
            } else {
                func_80020718(0x1FA);
            }
            func_801518D4(0, 7, 6);
            func_800058DC((s32)arg0, func_801F2438);
        }
    }
}
#undef GG
#undef D_801BBBF0
#undef func_800058DC
#undef func_80020718
#undef func_801518D4
#undef func_801F1FD0
#undef func_801F2438
#undef func_801F2A20
#undef func_801F2B44
#undef func_801F38B8_Base
#undef func_801F38B8_Hi
#undef func_801F38B8_Lo
#undef func_801F38B8_Mid
#undef func_801F38B8_Node
#undef func_801F38B8_Obj

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F1FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2438.s")


extern void func_800058DC(s32, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801F290C();

void func_801F28C4(s32 arg0, s32 arg1) {
    func_80020718(0x1FC);
    func_801518D4(0, 7, 6);
    func_800058DC(arg0, func_801F290C);
}

struct func_801F290C_S { u8 pad0[0x4]; f32 f4; u8 pad8[4]; f32 fC; };
struct func_801F290C_A { u8 pad0[0x14]; u32 u14; };
struct func_801F290C_B { u8 pad0[0x30]; struct func_801F290C_S *u30; };
struct func_801F290C_O { u8 pad0[0x24]; struct func_801F290C_B *u24; u8 pad28[0x10]; struct func_801F290C_A *u38; };
struct func_801F290C_G { u8 pad0[0x24]; s32 u24; u8 u28; u8 pad29[0xB7]; struct { u8 pad[0x2C]; struct func_801F290C_S *u2C; } *uE0; };
struct func_801F38B8_Base;
extern struct func_801F38B8_Base D_801BBBF0;
#define G ((struct func_801F290C_G *)&D_801BBBF0)
#define func_801F1D74 func_801F1D74__decl30
extern u8 func_801F1D74[];
void func_801F290C(struct func_801F290C_O *arg0, s32 arg1) {
    struct func_801F290C_S *v0;
    u32 v1;
    f64 r;
    G->u24 = 0;
    v0 = G->uE0->u2C;
    v1 = arg0->u38->u14 >> 16;
    r = (v1 & 0xFFF) * 5.0;
    if (v0->f4 < r + arg0->u24->u30->f4 && arg0->u24->u30->f4 - r < v0->f4
        && v0->fC < r + arg0->u24->u30->fC && arg0->u24->u30->fC - r < v0->fC) {
        G->u28 = G->u28 | (u8)(v1 >> 12);
        return;
    }
    *(f32 *)((u8 *)arg0 + 0xA0) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xA4) = 0.0f;
    func_800058DC((s32)arg0, func_801F1D74);
}
#undef func_801F1D74


struct func_801F2A20_Struct30 {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801F2A20_Struct24 {
    u8 pad0[0x30];
    struct func_801F2A20_Struct30 *unk30;
};
struct func_801F2A20_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2A20_Arg0 {
    u8 pad0[0x24];
    struct func_801F2A20_Struct24 *unk24;
    u8 pad28[0x10];
    struct func_801F2A20_Struct38 *unk38;
};
struct func_801F2A20_Arg1 {
    struct func_801F2A20_Struct24 *unk0;
    struct func_801F2A20_Struct24 *unk4;
};
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);

void func_801F2A20(struct func_801F2A20_Arg0 *arg0, struct func_801F2A20_Arg1 *arg1) {
    struct func_801F2A20_Struct30 *p;
    u32 v;

    p = arg0->unk24->unk30;
    v = arg0->unk38->unk10;

    if (func_8012AAE8(arg0, p->unk4, (f32)((f64)(f32)(s16)(v >> 16) + 0.5), p->unkC, (f32)(v & 0xFFFF)) == 0) {
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    }
}


struct func_801F2B44_Struct1 {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[4];
    s32 unkC;
};
struct func_801F2B44_Struct2 {
    u8 pad0[8];
    f32 unk8;
};
struct func_801F2B44_Struct3 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u8 pad14[4];
    u32 unk18;
};
struct func_801F2B44_Struct4 {
    u8 pad0[0x30];
    void *unk30;
};
struct func_801F2B44_Struct0 {
    u8 pad0[0x24];
    struct func_801F2B44_Struct4 *unk24;
    u8 pad28[0x10];
    struct func_801F2B44_Struct3 *unk38;
};

void func_801F2B44(struct func_801F2B44_Struct0 *arg0, void *arg1) {
    struct func_801F2B44_Struct1 *v = (struct func_801F2B44_Struct1 *)arg0->unk24->unk30;
    if (func_8012AAE8(arg0, v->unk4, (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5), v->unkC, (f32)(arg0->unk38->unk10 & 0xFFFF)) == 0) {
        ((struct func_801F2B44_Struct2 *)arg0->unk24->unk30)->unk8 = (f32)(((f64)(f32)arg0->unk38->unk8 / 10.0) + 0.5);
        func_800058DC((s32)arg0, func_801F1D74);
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        void **p = (void **)arg1;
        ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[1])->unk30)->unk8 = ((struct func_801F2B44_Struct2 *)((struct func_801F2B44_Struct4 *)p[0])->unk30)->unk8;
    }
}

struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};

struct func_801F2C74_Struct3 { u8 pad0[0x8]; s16 unk8; u8 pad9[2]; u8 pad1[0x4]; u32 unk10; u8 pad2[4]; u32 unk18; };
struct func_801F2C74_Struct2 { u8 pad0[0x30]; struct func_801F38B8_Node *unk30; };
struct func_801F2C74_Struct1 { u8 pad0[0x24]; s32 unk24; u8 pad1[4]; u32 unk2C; };
struct func_801F2C74_Struct0 {
    u8 pad0[0x24];
    struct func_801F2C74_Struct4 *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[4];
    u16 unk34;
    u16 unk36;
    struct func_801F2C74_Struct3 *unk38;
    u8 pad3C[0x34];
    s32 unk70;
    s32 unk74;
    u8 pad78[0x18];
    s16 unk90;
    u8 pad92[0xE];
    f32 unkA0;
    f32 unkA4;
};
struct func_801F2C74_Struct4 { u8 pad0[0x30]; struct func_801F38B8_Node *unk30; };
struct func_801F2C74_Struct5 { u8 pad0[0x24]; s32 unk24; u8 pad28[8]; s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; };
struct func_801F2C74_Struct6 { struct func_801F2C74_Struct5 *pad0[0xC]; };
struct func_801F2C74_Struct7 { u8 pad0[0x30]; struct func_801F2C74_Struct5 *unk30; };

extern s32 func_8000522C(u16, s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, s32);
extern s32 func_8000C3B0(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C89C(void *, s32, u32, s32);
extern u8 D_80164F40[];
extern u32 *D_80171CEC[];
extern s32 D_801BBCD0;
#define func_801F2EB0 func_801F2EB0__decl353
extern u8 func_801F2EB0[];

void func_801F2C74(struct func_801F2C74_Struct0 *arg0, struct func_801F2C74_Struct7 **arg1) {
    f64 base;
    f64 h;
    s32 d;
    s16 a;
    struct func_801F2C74_Struct3 *p;
    u32 *t;

    if (D_801BBCD0 != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk2C |= 0xC20;
        func_8012636C(arg0, 0);
        p = arg0->unk38;
        h = 1.0 - 0.5;
        base = (f64)(f32)p->unk8 / 10.0 + 0.5;
        a = (s16)(s32)(((f64)(f32)(s16)(p->unk10 >> 16) + 0.5 - base) * h);
        if (a < 0) {
            d = -a;
        } else {
            d = a;
        }
        arg0->unkA0 = 0.0f;
        arg0->unkA4 = 0.0f;
        arg0->unk90 = (s32)((f64)d + base);
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(p->unk10 >> 16) + 0.5);
        func_8012C89C(arg0, 0,arg0->unk38->unk18 >> 20, (arg0->unk38->unk18 >> 16) & 0xF);
        t = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*(u16 *)t[0], ((s32 *)t[1] + ((arg0->unk38->unk18 >> 16) & 0xF))[1]);
        func_800062F8(*arg1, 0x80000C00);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_800058DC((s32)arg0, func_801F2EB0);
    }
}
#undef func_801F2EB0

#define func_801F2FF0 func_801F2FF0__func_801F2EB0
#define func_801F3610 func_801F3610__func_801F2EB0
#define func_801F38B8_Hi func_801F38B8_Hi__func_801F2EB0
#define func_801F38B8_Node func_801F38B8_Node__func_801F2EB0
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
extern void func_801F3610();
extern void func_801F2FF0();
struct func_801F2EB0_Struct2 { u8 pad0[8]; s16 unk8; u8 padA[6]; u32 unk10; u32 unk14; };
struct func_801F2EB0_Struct1 { u8 pad0[0x24]; struct func_801F38B8_Hi *unk24; u8 pad28[0x10]; struct func_801F2EB0_Struct2 *unk38; };
struct func_801F2EB0_StructD { u8 pad0[4]; u16 unk4; u8 pad6[0x1E]; void *unk24; u8 unk28; };
#define B ((struct func_801F2EB0_StructD *)&D_801BBBF0)
void func_801F2EB0(struct func_801F2EB0_Struct1 *arg0, s32 arg1) {
    f64 t;
    B->unk28 &= ~(u8)(((u32)arg0->unk38->unk14 >> 16) >> 12);
    t = arg0->unk24->unk30->unk8;
    if (t == (f64)(f32)arg0->unk38->unk8 / 10.0 + 0.5) {
        if (B->unk4 != 0xD) {
            func_80020718(0x1FA);
        }
        func_800058DC((s32)arg0, func_801F3610);
        return;
    }
    if (t == (f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5 && (void *)arg0 == B->unk24) {
        func_80020718(0x1FA);
        func_801518D4(0, 7, 6);
        func_800058DC((s32)arg0, func_801F2FF0);
    }
}
#undef B
#undef func_801F2FF0
#undef func_801F3610
#undef func_801F38B8_Hi
#undef func_801F38B8_Node

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2FF0.s")


extern u16 D_801BBBF4;
extern void func_801F34FC();

void func_801F3430(void *arg0, void *arg1) {
    if (D_801BBBF4 == 0xD) {
        if ((f64)*(f32 *)(*(u8 **)(*(u8 **)((u8 *)arg0 + 0x24) + 0x30) + 8) == ((f64)(f32)*(s16 *)(*(u8 **)((u8 *)arg0 + 0x38) + 8) / 10.0 + 0.5)) {
            func_80020718(0x1FC);
            func_801518D4(0, 7, 6);
        }
    } else {
        func_80020718(0x1FC);
        func_801518D4(0, 7, 6);
    }
    func_800058DC(arg0, func_801F34FC);
}


void func_801F34FC(struct func_801F290C_O *arg0, s32 arg1) {
    struct func_801F290C_S *s;
    struct func_801F290C_S *p;
    f64 r;
    f64 x;
    f64 c;

    G->u24 = 0;
    s = G->uE0->u2C;
    x = s->f4;
    r = ((arg0->u38->u14 >> 16) & 0xFFF) * 5.0;
    p = arg0->u24->u30;
    c = p->f4;
    if (x < r + c && c - r < x && s->fC < r + p->fC && p->fC - r < s->fC) {
        G->u28 |= (u8)((arg0->u38->u14 >> 16) >> 12);
        return;
    }
    *(f32 *)((u8 *)arg0 + 0xA0) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0xA4) = 0.0f;
    func_800058DC((s32)arg0, func_801F2EB0);
}

#define func_800058DC func_800058DC__func_801F3610
#define func_801F2A20_Struct30 func_801F2A20_Struct30__func_801F3610
#define func_801F3430 func_801F3430__func_801F3610
extern void func_800058DC(void *, void *);
struct func_801F2A20_Struct30 {
    u8 pad0[4];
    s32 unk4;
    f32 unk8;
    s32 unkC;
};
void func_801F3430(void *arg0, void *arg1);


struct func_801F3610_S38 {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
};
struct func_801F3610_S24 {
    u8 pad0[0x30];
    struct func_801F2A20_Struct30 *unk30;
};
struct func_801F3610_Arg {
    u8 pad0[0x24];
    struct func_801F3610_S24 *unk24;
    u8 pad28[0x10];
    struct func_801F3610_S38 *unk38;
    u8 pad3C[0x64];
    f32 unkA0;
    f32 unkA4;
};

void func_801F3610(struct func_801F3610_Arg *arg0, s32 arg1) {
    struct func_801F3610_S38 *v1;
    f32 a;
    f32 u;
    f32 q;
    f32 t;
    f32 divisor;

    if (arg0->unkA4 == 0.0) {
        v1 = arg0->unk38;
        divisor = 20.0f;
        if ((a = arg0->unkA0, a < (t = (u = (f32)(v1->unk10 & 0xFFFF)) / divisor))) {
            q = u / 1000.0f;
            arg0->unkA0 = a + q;
        } else {
            arg0->unkA0 = t;
            arg0->unkA4 = (f32)((f64)arg0->unk24->unk30->unk8 - ((f64)(f32)v1->unk8 / 10.0 + 0.5) - (f64)((f32)(v1->unk10 & 0xFFFF) / divisor));
        }
    } else {
        v1 = arg0->unk38;
        if ((f64)(f32)(s16)(v1->unk10 >> 16) + 0.5 - (f64)arg0->unk24->unk30->unk8 < (f64)arg0->unkA4) {
            u = (f32)(v1->unk10 & 0xFFFF);
            a = arg0->unkA0;
            if (u / 100.0f < a) {
                arg0->unkA0 = a - u / 1000.0f;
            }
        }
    }
    if (func_8012AAE8(arg0, arg0->unk24->unk30->unk4, (f32)((f64)(f32)(s16)(v1->unk10 >> 16) + 0.5), arg0->unk24->unk30->unkC, arg0->unkA0) == 0) {
        arg0->unk24->unk30->unk8 = (f32)((f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5);
        func_800058DC((s32)arg0, (void *)func_801F3430);
    }
}
#undef func_800058DC
#undef func_801F2A20_Struct30
#undef func_801F3430









void func_801F38B8(f32 arg0) {
    struct func_801F38B8_Lo *temp_v0;

    temp_v0 = D_801BBBF0.unkDC->unk64;
    if (temp_v0 != NULL) {
        temp_v0->unk24->unk30->unk8 = D_801BBBF0.unkE0->unk2C->unk8;
    }
}

