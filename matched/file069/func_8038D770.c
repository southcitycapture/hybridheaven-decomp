#define func_8038D770 func_8038D770_decl
#include "context.h"
#undef func_8038D770

typedef struct func_8038D770_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 bf0 : 11;
            u32 bf11 : 2;
            u32 bf13 : 19;
        } b;
        struct {
            u16 h30;
            u16 h32;
        } c;
    } u30;
    u8 pad34[4];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 rest : 28;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
} func_8038D770_StructP;
typedef struct func_8038D770_StructA {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D770_StructA;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58(void *, void *, void *, void *);
extern void D_8038D59C(void *, void *, void *, void *);
extern u8 D_8038D770[];

void func_8038D770(func_8038D770_StructA *arg0, void *arg1) {
    func_8038D770_StructP *p;
    func_8038D770_StructP *c;

    p = (func_8038D770_StructP *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8);
    c = (func_8038D770_StructP *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.c.h30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D770;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, c,&D_801BBBF0) != 0) {
        arg0->unk91 = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (c->u30.b.bf11 != 0 && !(arg0->unk9A & 8)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (c->u30.b.bf11 == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f && !(arg0->unk9A & 0x100) && !(p->unkA6 & 4)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
    }
}
