#include "common.h"

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_80379970.s {"functions":["func_80379970"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_80379970.s")

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_80379F04.s {"functions":["func_80379F04"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_80379F04.s")

#define func_8037AC08 func_8037AC08__func_8037A320
#define func_8037B9F0 func_8037B9F0__func_8037A320

typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_8037A320_StructV {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8037A320_StructV;
typedef struct func_8037A320_StructG {
    u8 pad[0x2C];
    func_8037A320_StructV *unk2C;
} func_8037A320_StructG;
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

void func_800058DC(void *, void *);
struct func_8037B9F0_StructB;
s32 func_8037B9F0(struct func_8037B9F0_StructB *arg0);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_801DFAA4(void *, s32);
extern void func_801518D4(s32, s32, s32);
extern void func_8013A28C(s32, func_8037A320_StructE);
extern void func_801CD228(void *, s32);
extern u16 D_801BBBF4;
extern func_8037A320_StructG *D_801BBCD0;
extern u8 D_801BBF44[];
extern u8 D_80388A6C;
extern u8 func_8037AC08[];
extern u8 func_8037A6F4[];

void func_8037A320(func_8037A320_StructA *arg0, s32 arg1) {
    func_8037A320_StructP *sp2C;
    s32 sp28;
    u16 sp26;
    func_8037A320_StructV *v;
    func_8037A320_StructE *e;
    extern s32 func_80010550();

    sp2C = arg0->unk5C;
    sp26 = func_80010550(arg1, sp2C);
    if (func_8037B9F0((struct func_8037B9F0_StructB *)arg0) == 0) {
        if (arg0->unk30 & 8) {
            v = D_801BBCD0->unk2C;
            if (func_801C5A1C(v->unk4, v->unk8 + 0.5, v->unkC, v->unk4, v->unk8 - 6.0, v->unkC) == 0) {
                func_801DFAA4(arg0, 2);
                if (D_80388A6C < 4) {
                    func_801518D4(0, 7, 6);
                } else {
                    func_801518D4(0, 3, 5);
                }
                e = &sp2C->e;
                if ((D_80388A6C == 1) || (D_80388A6C == 2) || (D_80388A6C == 5) || (D_80388A6C == 6)) {
                    e->w0 = 0x0190006D;
                } else {
                    e->w0 = 0x0190006A;
                }
                e->h4 = 0;
                e->h6 = 0;
                func_8013A28C(arg1, *e);
                D_80388A6C = D_80388A6C % 4;
                func_800058DC(arg0, func_8037AC08);
                return;
            }
            arg0->unk48 = 0.0f;
            arg0->unk40 = 0.0f;
        }
        if ((sp26 != 0) && (arg0->unk30 & 4)) {
            if (D_80388A6C < 4) {
                func_801518D4(0, 7, 6);
            } else {
                func_801518D4(0, 3, 5);
            }
            e = &sp2C->e;
            if ((D_80388A6C == 1) || (D_80388A6C == 2)) {
                e->w0 = 0x01900070;
            } else if ((D_80388A6C == 5) || (D_80388A6C == 6)) {
                e->w0 = 0x01900072;
            } else if ((D_80388A6C == 4) || (D_80388A6C == 7)) {
                e->w0 = 0x01900071;
            } else {
                e->w0 = 0x0190006F;
            }
            e->h4 = 0;
            e->h6 = 0;
            func_8013A28C(arg1, *e);
            v = D_801BBCD0->unk2C;
            if ((func_801C5A1C(v->unk4, v->unk8 + 0.5, v->unkC, v->unk4, v->unk8 - 1.0, v->unkC) == 0) || ((((D_801BBBF4 != 0x4D) && (D_801BBBF4 != 0x50)) || (D_801BBF44[7] < 2)) && ((D_801BBBF4 != 0x51) || (D_801BBF44[7] != 2)))) {
                func_801CD228(arg0, arg1);
            }
            D_80388A6C = D_80388A6C % 4;
            func_800058DC(arg0, func_8037A6F4);
        }
    }
}
#undef func_8037AC08
#undef func_8037B9F0

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037A6F4.s {"functions":["func_8037A6F4"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037A6F4.s")


void func_8037A960(func_8037A320_StructA *arg0, s32 arg1) {
    func_8037A320_StructP *sp[1];
    func_8037A320_StructV *q;
    func_8037A320_StructE *e;
    extern s32 func_80010550();
    extern void func_8037AA80();
    sp[0] = arg0->unk5C;
    if (func_8037B9F0((struct func_8037B9F0_StructB *)arg0) == 0) {
        q = D_801BBCD0->unk2C;
        if (func_801C5A1C(q->unk4, q->unk8 + 1.0, q->unkC, q->unk4, q->unk8 - 7.0, q->unkC) != 0) {
            if (func_80010550(arg1, (s32)sp[0]) != 0) {
                if (D_80388A6C == 1 || D_80388A6C == 2) {
                    e = (func_8037A320_StructE *)sp[0];
                    ((func_8037A320_StructP *)e)->e.w0 = 0x01900075;
                    e = &((func_8037A320_StructP *)e)->e;
                } else {
                    e = (func_8037A320_StructE *)sp[0];
                    ((func_8037A320_StructP *)e)->e.w0 = 0x01900077;
                    e = &((func_8037A320_StructP *)e)->e;
                }
                e->h4 = 0;
                e->h6 = 0;
                func_8013A28C(arg1, *e);
                func_800058DC(arg0, func_8037AA80);
            }
        }
    }
}

#define func_8037AB08 func_8037AB08__func_8037AA80
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
typedef struct func_8037AA80_StructA { u8 pad[0x5C]; s32 unk5C; } func_8037AA80_StructA;
extern func_8037AA80_Struct D_80216B90;
extern void func_80011140(s32, s32, func_8037AA80_Struct, s32);
extern void func_8037AB08();

void func_8037AA80(func_8037AA80_StructA *arg0, s32 arg1) {
    s32 sp24;
    extern s32 func_80010550();

    sp24 = arg0->unk5C;
    if ((func_8037B9F0((void *)arg0) == 0) && (func_80010550(arg1, sp24) != 0)) {
        func_80011140(arg1, sp24, D_80216B90, 5);
        func_800058DC(arg0, func_8037AB08);
    }
}
#undef func_8037AB08

#define D_80216B90 D_80216B90__func_8037AB08
#define func_80011140 func_80011140__func_8037AB08
#define func_8037B9F0 func_8037B9F0__func_8037AB08
typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(func_8037B9F0_StructB *arg0);
typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;
extern func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037AB08_S { s32 a; s32 b; s32 c; } func_8037AB08_S;
typedef struct func_8037AB08_P { u8 pad[0x1C]; s32 unk1C; } func_8037AB08_P;
typedef struct func_8037AB08_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x24]; s32 unk54; u8 pad3[4]; func_8037AB08_P *unk5C; } func_8037AB08_O;
typedef struct func_8037AB08_B { u8 pad[0x230]; u8 unk230; u8 pad2[0xEF0-0x231]; u16 unkEF0; u8 pad3[0xEFC-0xEF2]; s32 unkEFC; } func_8037AB08_B;
extern func_8037AB08_S D_80216B90;
extern s16 D_80216BF8;
extern u8 D_8038A93E;
extern func_8037AB08_B D_801BBBF0_;
extern void func_80011140(s32, void *, func_8037AB08_S, s32);
extern void func_801C4A5C(void *, s32);
extern u8 func_801E5010[];
void func_8037AB08(func_8037AB08_O *arg0, s32 arg1) {
    func_8037AB08_P *p = arg0->unk5C;
    if (func_8037B9F0(arg0) == 0) {
        func_80011140(arg1, p, D_80216B90, 5);
        if (p->unk1C == 0x01680041) {
            arg0->unk54 = ((func_8037AB08_B *)&D_801BBBF0)->unkEFC;
            func_801C4A5C(arg0, 0);
            arg0->unk2C |= 0x40;
            arg0->unk2C |= 0x20;
            arg0->unk2C |= 0x80;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 = 0x80;
            D_80216BF8 = 0x2D;
            ((func_8037AB08_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
            ((func_8037AB08_B *)&D_801BBBF0)->unk230 = D_8038A93E;
            func_800058DC(arg0, func_801E5010);
        }
    }
}
#undef D_80216B90
#undef func_80011140
#undef func_8037B9F0

#define D_801BBCD0 D_801BBCD0__func_8037AC08
#define func_8013A28C func_8013A28C__func_8037AC08
#define func_8037B118 func_8037B118__func_8037AC08

typedef struct func_8037AC08_StructCam { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; } func_8037AC08_StructCam;
typedef struct func_8037AC08_StructHolder { u8 pad[0x2C]; func_8037AC08_StructCam *unk2C; } func_8037AC08_StructHolder;
typedef struct func_8037AC08_StructP { u8 pad[0x20]; u16 unk20; } func_8037AC08_StructP;
typedef struct func_8037AC08_StructW { s32 a; s32 b; s32 c; } func_8037AC08_StructW;
typedef struct func_8037AC08_StructO { u8 pad[0x30]; s32 unk30; u8 pad34[0xC]; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x10]; func_8037AC08_StructP *unk5C; } func_8037AC08_StructO;

extern func_8037AC08_StructHolder *D_801BBCD0;
extern void func_8013A28C(s32, func_8037AC08_StructW);
#define func_8037AEA8 func_8037AEA8__decl228
extern u8 func_8037AEA8[];
extern u8 func_8037B118[];

void func_8037AC08(func_8037AC08_StructO *arg0, s32 arg1) {
    func_8037AC08_StructP *p;
    s32 pad1;
    u16 s;
    s32 pad2;
    u8 *v;
    s32 r;
    func_8037AC08_StructCam *cam;

    p = arg0->unk5C;
    if (p->unk20 == 0) {
        arg0->unk48 = 0.0f;
        arg0->unk44 = 0.0f;
        arg0->unk40 = 0.0f;
        (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C->unk8 -= 5.0;
        if (D_80388A6C == 2) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        } else if (D_80388A6C == 3) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        }
    }
    s = func_80010550(arg1, (s32)p, (s32)arg0);
    if (func_8037B9F0((void *)arg0) == 0 && s != 0) {
        if (arg0->unk30 & 4) {
            if (D_80388A6C < 4) {
                func_801518D4(0, 7, 6);
            } else {
                func_801518D4(0, 3, 5);
            }
            v = (u8 *)p + 0x1C;
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                *(s32 *)v = 0x190006E;
            } else {
                *(s32 *)v = 0x190006B;
            }
            *(u16 *)(v + 4) = 0;
            *(u16 *)(v + 6) = 0;
            func_8013A28C(arg1, *(func_8037AC08_StructW *)v);
            cam = D_801BBCD0->unk2C;
            r = func_801C5A1C(cam->unk4, cam->unk8 + 0.5, cam->unkC, cam->unk4, cam->unk8 - 1.0, cam->unkC);
            if (r == 0 || !(((*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x4D || *(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x50) && *((u8 *)&D_801BBBF0 + 0x35B) >= 2) || (*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x51 && *((u8 *)&D_801BBBF0 + 0x35B) == 2))) {
                func_801CD228(arg0, arg1);
            }
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                func_800058DC(arg0, func_8037AEA8);
            } else {
                func_800058DC(arg0, func_8037B118);
            }
        }
    }
}
#undef func_8037AEA8
#undef D_801BBCD0
#undef func_8013A28C
#undef func_8037B118

#define D_8017DC42 D_8017DC42__func_8037AEA8
#define D_8038A93C D_8038A93C__func_8037AEA8
#define func_800058DC func_800058DC__func_8037AEA8
#define func_80010550 func_80010550__func_8037AEA8
#define func_80020744 func_80020744__func_8037AEA8
#define func_80020DAC func_80020DAC__func_8037AEA8
#define func_8013A28C func_8013A28C__func_8037AEA8
#define func_801DFAA4 func_801DFAA4__func_8037AEA8
#define func_8037A320_StructA func_8037A320_StructA__func_8037AEA8
#define func_8037A320_StructE func_8037A320_StructE__func_8037AEA8
#define func_8037A320_StructP func_8037A320_StructP__func_8037AEA8
#define func_8037AFD0 func_8037AFD0__func_8037AEA8
#define func_8037B118 func_8037B118__func_8037AEA8
#define func_8037B118_StructA func_8037B118_StructA__func_8037AEA8
#define func_8037B118_StructP func_8037B118_StructP__func_8037AEA8
#define func_8037B118_StructV func_8037B118_StructV__func_8037AEA8
#define func_8037B86C func_8037B86C__func_8037AEA8
#define func_8037B9F0 func_8037B9F0__func_8037AEA8
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_8037AEA8 D_8037AEA8
#define func_8037AC08 LP(fA_, __LINE__)
#define func_8037B118 LP(fB_, __LINE__)
extern u16 D_8017DC42;
extern s8 D_8038A93C;
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
s32 func_80010550(s32, s32, s32);
void func_80020744(s32);
extern s32 func_80020DAC(s32);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
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
typedef struct func_8037B118_StructV { s32 w0; s32 w4; s32 w8; } func_8037B118_StructV;
typedef struct func_8037B118_StructP { u8 pad[0x1C]; func_8037B118_StructV v; } func_8037B118_StructP;
typedef struct func_8037B118_StructA { u8 pad[0x5C]; func_8037B118_StructP *p; } func_8037B118_StructA;
extern void func_8037B118(func_8037B118_StructA *arg0, s32 arg1);
extern s32 func_8037B9F0(func_8037B9F0_StructB *arg0);
#undef func_8037AEA8
#undef func_8037AC08
#undef func_8037B118

typedef struct func_8037AEA8_StructU {
    u32 w0;
    u16 h4;
} func_8037AEA8_StructU;
typedef struct func_8037AEA8_StructP {
    u8 pad[0x1C];
    union {
        func_8037A320_StructE e;
        func_8037AEA8_StructU u;
    } x;
} func_8037AEA8_StructP;
extern void func_8037AFD0();
extern void func_8037B86C();

void func_8037AEA8(func_8037A320_StructA *arg0, s32 arg1, s32 arg2) {
    func_8037AEA8_StructP *sp24;
    s32 n;
    u16 sp1E;
    func_8037A320_StructE *v;

    n = (s32)arg0->unk5C;
    sp24 = (func_8037AEA8_StructP *)n;
    sp1E = func_80010550(arg1, n, arg2);
    n = 0;
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0) {
        v = &sp24->x.e;
        sp24 = NULL;
        if (((func_8037AEA8_StructU *)v)->h4 >= 0x15) {
            if (func_80020DAC(0x308) == 0) {
                if (func_80020DAC(0x309) == 0) {
                    if (func_80020DAC(0x30A) == 0) {
                        func_801DFAA4(arg0, 0);
                    }
                }
            }
        }
        sp24 = NULL;
        if (sp1E != 0) {
            if (D_8017DC42 > 0) {
                v->w0 = 0x0190001A;
                v->h4 = 0;
                v->h6 = 0;
                func_8013A28C(arg1, *v);
                func_800058DC(arg0, func_8037AFD0);
                return;
            }
            D_8038A93C = 0;
            func_80020744(0xA);
            func_800058DC(arg0, func_8037B86C);
        }
    }
}
#undef LP2
#undef LP
#undef D_8017DC42
#undef D_8038A93C
#undef func_800058DC
#undef func_80010550
#undef func_80020744
#undef func_80020DAC
#undef func_8013A28C
#undef func_801DFAA4
#undef func_8037A320_StructA
#undef func_8037A320_StructE
#undef func_8037A320_StructP
#undef func_8037AFD0
#undef func_8037B118
#undef func_8037B118_StructA
#undef func_8037B118_StructP
#undef func_8037B118_StructV
#undef func_8037B86C
#undef func_8037B9F0

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037AFD0.s {"functions":["func_8037AFD0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037AFD0.s")

extern func_8037AA80_Struct D_80388A5C;

void func_8037B08C(func_8037AA80_StructA *arg0, s32 arg1) {
    func_8037AB08_P *p;
    p = (func_8037AB08_P *)arg0->unk5C;
    func_80011140(arg1, (s32)p, D_80388A5C, 10);
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0 && p->unk1C == 0x1900075) {
        func_800058DC(arg0, func_8037AA80);
    }
}

#define func_8013A28C func_8013A28C__func_8037B118

typedef struct func_8037B118_StructV { s32 w0; s32 w4; s32 w8; } func_8037B118_StructV;
typedef struct func_8037B118_StructP { u8 pad[0x1C]; func_8037B118_StructV v; } func_8037B118_StructP;
typedef struct func_8037B118_StructA { u8 pad[0x5C]; func_8037B118_StructP *p; } func_8037B118_StructA;
typedef struct func_8037B118_StructV2 { s32 w0; u16 h4; u16 h6; s32 w8; } func_8037B118_StructV2;

extern s32 func_80020DAC(s32);
extern void func_8013A28C(s32, func_8037B118_StructV);
extern u16 D_8017DC42;

void func_8037B118(func_8037B118_StructA *arg0, s32 arg1) {
    func_8037B118_StructP *sp24;
    func_8037B118_StructV *v;
    u16 sp1E;
    extern s32 func_80010550();
    extern void func_80020744(s32);
    extern s8 D_8038A93C;
    extern void func_8037B86C();

    sp24 = arg0->p;
    v = &sp24->v;
    sp1E = func_80010550(arg1, sp24);
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0) {
        if (((func_8037B118_StructV2 *)v)->h4 >= 0xA) {
            if (func_80020DAC(0x30C) == 0 && func_80020DAC(0x30D) == 0 && func_80020DAC(0x30E) == 0) {
                func_801DFAA4(arg0, 1);
            }
        }
        if (sp1E != 0) {
            if (D_8017DC42 > 0) {
                v->w0 = 0x01900077;
                ((func_8037B118_StructV2 *)v)->h4 = 0;
                ((func_8037B118_StructV2 *)v)->h6 = 0;
                func_8013A28C(arg1, *v);
                func_800058DC(arg0, func_8037AA80);
                return;
            }
            D_8038A93C = 0;
            func_80020744(0xA);
            func_800058DC(arg0, func_8037B86C);
        }
    }
}
#undef func_8013A28C

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037B240.s {"functions":["func_8037B240"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037B240.s")

#define D_801BBBF0 D_801BBBF0__func_8037B4E4
#define func_80011140 func_80011140__func_8037B4E4
typedef struct func_8037B4E4_V { s32 a; s32 b; s32 c; } func_8037B4E4_V;
typedef struct func_8037B4E4_S { u8 pad[0x1C]; s32 unk1C; u8 pad2[2]; u16 unk22; } func_8037B4E4_S;
typedef struct func_8037B4E4_O { u8 pad[0x2C]; s32 unk2C; u8 pad2[0x2C]; func_8037B4E4_S *unk5C; } func_8037B4E4_O;
extern void func_80011140(s32, void *, func_8037B4E4_V, s32);
extern func_8037B4E4_V D_80388A44;
extern func_8037B4E4_V D_80388A38;
struct func_8037BAEC_StructBBBF0;
extern struct func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037B4E4_B { u8 pad[0xEF0]; u16 unkEF0; } func_8037B4E4_B;

void func_8037B4E4(func_8037B4E4_O *arg0, s32 arg1) {
    func_8037B4E4_S *s = arg0->unk5C;
    if (s->unk22 & 0x10) {
        func_80011140(arg1, s, D_80388A44, 0xF);
    } else {
        func_80011140(arg1, s, D_80388A38, 0xF);
    }
    if (s->unk1C == 0x01680017) {
        arg0->unk2C |= 0x40;
        arg0->unk2C |= 0x20;
        arg0->unk2C |= 0x80;
        D_80216BF8 = 0x5A;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 |= 0x2000;
        ((func_8037B4E4_B *)&D_801BBBF0)->unkEF0 &= 0xEFFF;
        func_800058DC(arg0, func_801E5010);
    }
}
#undef D_801BBBF0
#undef func_80011140

#define func_8037B86C func_8037B86C__func_8037B5FC

typedef struct func_8037B5FC_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8037B5FC_Struct;

s32 func_80010550(s32, s32, s32);
void func_80020744(s32);
extern s8 D_8038A93C;
extern void func_8037B86C();

void func_8037B5FC(void *arg0, s32 arg1) {
    s32 temp;

    temp = ((func_8037B5FC_Struct *)arg0)->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        D_8038A93C = 0;
        func_80020744(0xA);
        func_800058DC(arg0, func_8037B86C);
    }
}
#undef func_8037B86C

#define D_8038965C D_8038965C__func_8037B64C
#define func_8011AAF4 func_8011AAF4__func_8037B64C
#define func_801DFE50 func_801DFE50__func_8037B64C
#define func_8037A320_StructE func_8037A320_StructE__func_8037B64C
#define func_8037AEA8_StructP func_8037AEA8_StructP__func_8037B64C
#define func_8037AEA8_StructU func_8037AEA8_StructU__func_8037B64C
#define func_8037B758 func_8037B758__func_8037B64C
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
#define func_8037AC08 LP(fA_, __LINE__)
#define func_8037B118 LP(fB_, __LINE__)
#define func_8037B64C D_8037B64C
#define LP2(a, b) a##b
#define LP(a, b) LP2(a, b)
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
typedef struct func_8037AEA8_StructU {
    u32 w0;
    u16 h4;
} func_8037AEA8_StructU;
typedef struct func_8037AEA8_StructP {
    u8 pad[0x1C];
    union {
        func_8037A320_StructE e;
        func_8037AEA8_StructU u;
    } x;
} func_8037AEA8_StructP;
#undef func_8037AC08
#undef func_8037B118
#undef func_8037B64C

typedef struct func_8037B64C_StructV { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8037B64C_StructV;
typedef struct func_8037B64C_StructW { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; } func_8037B64C_StructW;
typedef struct func_8037B64C_StructP { u8 pad[0x2C]; func_8037B64C_StructV *unk2C; } func_8037B64C_StructP;
typedef struct func_8037B64C_StructQ { u8 pad[0x2C]; func_8037B64C_StructW *unk2C; } func_8037B64C_StructQ;
typedef struct func_8037B64C_StructG { u8 pad[4]; u16 unk4; u8 pad2[0xDA]; func_8037B64C_StructP *unkE0; u8 pad3[4]; func_8037B64C_StructQ *unkE8; } func_8037B64C_StructG;
typedef struct func_8037B64C_Struct { u8 pad[0x40]; f32 x; f32 y; f32 z; } func_8037B64C_Struct;
#define FUNC_8037B64C_G ((func_8037B64C_StructG *)&D_801BBBF0)

extern u8 D_8038965C[];
extern u8 func_8037B758[];
extern void func_801DFE50(void *, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_8037B64C(func_8037B64C_Struct *arg0, s32 arg1) {
    func_8037B64C_StructW *temp_v0;

    D_8038A93C = 0;
    if (FUNC_8037B64C_G->unk4 != 0x38) {
        func_8011AAF4(D_8038965C, 0x36E, arg0, 0, 1, 10.0f,
            (temp_v0 = FUNC_8037B64C_G->unkE8->unk2C)->unk30, temp_v0->unk34, temp_v0->unk38, 10.0f,
            arg0->x + FUNC_8037B64C_G->unkE0->unk2C->unk4, arg0->y + FUNC_8037B64C_G->unkE0->unk2C->unk8,
            arg0->z + FUNC_8037B64C_G->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
    }
    func_801DFE50(arg0, 6);
    func_800058DC(arg0, func_8037B758);
}
#undef LP2
#undef LP
#undef FUNC_8037B64C_G
#undef D_8038965C
#undef func_8011AAF4
#undef func_801DFE50
#undef func_8037A320_StructE
#undef func_8037AEA8_StructP
#undef func_8037AEA8_StructU
#undef func_8037B758

/* hh-block asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037B758.s {"functions":["func_8037B758"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/80379970/_mrg_keep_text_func_8037B758.s")

#define func_8037B9E4 func_8037B9E4__func_8037B86C

typedef struct func_8037B86C_StructV { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8037B86C_StructV;
typedef struct func_8037B86C_StructW { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; } func_8037B86C_StructW;
typedef struct func_8037B86C_StructP { u8 pad[0x2C]; func_8037B86C_StructV *unk2C; } func_8037B86C_StructP;
typedef struct func_8037B86C_StructQ { u8 pad[0x2C]; func_8037B86C_StructW *unk2C; } func_8037B86C_StructQ;
typedef struct func_8037B86C_StructG { u8 pad[4]; u16 unk4; u8 pad2[0xDA]; func_8037B86C_StructP *unkE0; u8 pad3[4]; func_8037B86C_StructQ *unkE8; } func_8037B86C_StructG;
typedef struct func_8037B86C_Struct { u8 pad[0x40]; f32 x; f32 y; f32 z; u8 pad2[0x10]; u8 *unk5C; } func_8037B86C_Struct;
extern u8 D_803896E8[];
extern s16 D_80089356;
extern void func_800023EC(void);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8037B9E4();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

#define FUNC_8037B86C_G ((func_8037B86C_StructG *)&D_801BBBF0)

void func_8037B86C(func_8037B86C_Struct *arg0, s32 arg1) {
    u8 *t0;

    t0 = arg0->unk5C;
    if (FUNC_8037B86C_G->unk4 != 0x38) {
        func_8011AAF4(D_803896E8, 0x39C, arg0, 0, 1, 10.0f, FUNC_8037B86C_G->unkE8->unk2C->unk30, FUNC_8037B86C_G->unkE8->unk2C->unk34, FUNC_8037B86C_G->unkE8->unk2C->unk38, 10.0f, arg0->x + FUNC_8037B86C_G->unkE0->unk2C->unk4, arg0->y + FUNC_8037B86C_G->unkE0->unk2C->unk8, arg0->z + FUNC_8037B86C_G->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
    }
    if ((*(u8 *)&D_8038A93C)++ > 20) {
        ((func_8037A320_StructE *)(t0 += 0x1C))->h6 = 0x100;
        func_8013A28C(arg1, *(func_8037A320_StructE *)t0);
        D_80089356 = 0;
        func_800023EC();
        func_8012FE50(8, 0x75, 4, 4, 0);
        func_800058DC(arg0, func_8037B9E4);
    }
}
#undef func_8037B9E4


void func_8037B9E4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

typedef struct func_8037B9F0_StructV { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; } func_8037B9F0_StructV;
typedef struct func_8037B9F0_StructA { u8 pad[0x2C]; func_8037B9F0_StructV *unk2C; } func_8037B9F0_StructA;
extern u16 D_801BCAE0;
extern func_8037B9F0_StructA *D_801BBCD8;
extern u8 D_80389730[];
#define func_8037B64C func_8037B64C__decl591
extern u8 func_8037B64C[];
extern void func_801E4F60(s32);

s32 func_8037B9F0(func_8037B9F0_StructB *arg0) {
    if (D_801BCAE0 & 0x8000) {
        func_801E4F60(0x1E);
        func_8011AAF4(D_80389730, 0x3BC, arg0, 0, 1, 10.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 10.0f, arg0->unk40 + D_801BBCD8->unk2C->unk3C, arg0->unk44 + D_801BBCD8->unk2C->unk40, arg0->unk48 + D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_8037B64C);
        return 1;
    }
    return 0;
}
#undef func_8037B64C



typedef struct func_8037BAEC_StructA930 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_8037BAEC_StructA930;

extern s16 D_80388A68;
extern func_8037BAEC_StructA930 D_8038A930;

s32 func_8037BAEC(f32 arg0, f32 arg1, f32 arg2, s16 arg3) {
    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 | 0x1000;
    D_8038A930.unk0 = arg0;
    D_8038A930.unk4 = arg1;
    D_8038A930.unk8 = arg2;
    D_80388A68 = arg3;
    return 1;
}


extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 D_8038A938;

s32 func_8037BB4C(s16 arg0, f32 arg1, f32 arg2, s16 arg3) {
    f32 temp_ft1;

    if (D_801BBBF0.unkEF0 & 0x1050) {
        return 0;
    }
    D_801BBBF0.unkEF0 = (u16) (D_801BBBF0.unkEF0 | 0x1000);
    temp_ft1 = func_8001EAD0(arg0) * arg2;
    D_8038A930.unk0 = temp_ft1;
    D_8038A930.unk4 = arg1;
    D_8038A938 = func_8001EB64(arg0) * arg2;
    D_80388A68 = arg3;
    return 1;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_80379970[] = {
    0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x69,
    0x6E, 0x69, 0x74, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F,
    0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x69, 0x6E, 0x69, 0x74, 0x32, 0x0A, 0x00, 0x00, 0x00,
    0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D,
    0x61, 0x69, 0x6E, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F,
    0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D, 0x61, 0x69, 0x6E, 0x32, 0x0A, 0x00, 0x00, 0x00,
    0xBE, 0xB2, 0xA4, 0xAC, 0xA4, 0xCA, 0xA4, 0xA4, 0xA1, 0xAA, 0x0A, 0x00, 0x66, 0x75, 0x74, 0x74,
    0x6F, 0x62, 0x69, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D, 0x61, 0x69, 0x6E, 0x33,
    0x0A, 0x00, 0x00, 0x00, 0x4E, 0x45, 0x57, 0xA4, 0xE4, 0xA4, 0xD0, 0xA4, 0xA4, 0xA4, 0xF3, 0xA4,
    0xB8, 0xA4, 0xE3, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F,
    0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D, 0x61, 0x69, 0x6E, 0x34, 0x0A, 0x00, 0x00, 0x00,
    0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x5F, 0x6D,
    0x61, 0x69, 0x6E, 0x35, 0x0A, 0x00, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F,
    0x77, 0x61, 0x6C, 0x6C, 0x5F, 0x68, 0x69, 0x74, 0x0A, 0x00, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74,
    0x6F, 0x62, 0x69, 0x5F, 0x77, 0x61, 0x6C, 0x6C, 0x5F, 0x68, 0x69, 0x74, 0x32, 0x0A, 0x00, 0x00,
    0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F, 0x77, 0x61, 0x6C, 0x6C, 0x5F, 0x68, 0x69, 0x74,
    0x33, 0x0A, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F, 0x77, 0x61, 0x6C, 0x6C,
    0x5F, 0x68, 0x69, 0x74, 0x34, 0x0A, 0x00, 0x00, 0x66, 0x75, 0x74, 0x74, 0x6F, 0x62, 0x69, 0x5F,
    0x77, 0x61, 0x6C, 0x6C, 0x5F, 0x68, 0x69, 0x74, 0x35, 0x0A, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69,
    0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31,
    0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73,
    0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61,
    0x79, 0x65, 0x72, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x2E, 0x63,
    0x00, 0x00, 0x00, 0x00, 0x25, 0x64, 0x20, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F,
    0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x64, 0x61, 0x6D, 0x61, 0x67, 0x65, 0x2E, 0x63,
    0x00, 0x00, 0x00, 0x00, 0x31, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E,
    0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0xA5, 0xC0, 0xA5, 0xE1, 0xA1, 0xBC, 0xA5, 0xB8, 0x25, 0x64,
    0x00, 0x00, 0x00, 0x00, 0x32, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E,
    0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0xA5, 0xC0, 0xA5, 0xE1, 0xA1, 0xBC, 0xA5, 0xB8, 0x25, 0x64,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xA9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x80, 0x37, 0x9C, 0xEC, 0x80, 0x37, 0x9D, 0x2C, 0x80, 0x37, 0x9D, 0x6C, 0x80, 0x37, 0x9D, 0xAC,
    0x80, 0x37, 0x9D, 0xEC, 0x80, 0x37, 0x9E, 0x2C, 0x80, 0x37, 0x9E, 0x6C, 0x80, 0x37, 0x9E, 0xAC,
    0x80, 0x37, 0x9F, 0x44, 0x80, 0x37, 0x9F, 0x9C, 0x80, 0x37, 0x9F, 0xF4, 0x80, 0x37, 0xA0, 0x4C,
    0x80, 0x37, 0xA0, 0xA4, 0x80, 0x37, 0xA0, 0xFC, 0x80, 0x37, 0xA1, 0x54, 0x80, 0x37, 0xA1, 0xAC,
    0x3F, 0xEC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCD, 0x3F, 0xA9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
};
