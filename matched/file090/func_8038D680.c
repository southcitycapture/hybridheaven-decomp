#define func_8038D680 D_8038D680
#include "context.h"
#undef func_8038D680

typedef struct func_8038D680_StructA {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D680_StructA;

typedef struct func_8038D680_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 b0 : 3;
            u32 b3 : 4;
            u32 b7 : 4;
            u32 b11 : 2;
            u32 b13 : 19;
        } b;
        struct {
            u16 h30;
        } c;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 rest : 28;
} func_8038D680_StructP;

extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern void D_8038D680(void);

void func_8038D680(func_8038D680_StructA *arg0, s32 arg1) {
    func_8038D680_StructP *p;
    func_8038D680_StructP *q;

    p = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D680_StructP *)D_801BC03C : (func_8038D680_StructP *)D_801BC3D8;
    q = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D680_StructP *)D_801BC3D8 : (func_8038D680_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.c.h30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D680;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, q) != 0) {
        arg0->unk91 = 0;
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (D_801BBBF0.unkB90 > 15.0f) {
        if (arg0->unk9A == 0) {
            arg0->unk9A = arg0->unk9A | 0x100;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 15.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A = arg0->unk9A ^ 0x100;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (q->u30.b.b11 != 0 || q->u30.b.b3 == 2) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (q->u30.b.b11 == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A = arg0->unk9A ^ 8;
            arg0->unk92 = arg0->unk93;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
    }
}
