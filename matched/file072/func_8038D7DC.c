#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_8038D7DC[];
extern s32 func_800058DC(s32, void *);
void func_8038D670(u8 *arg0, u8 *arg1, u8 *arg2);


typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D7DC_G;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 a : 3;
            u32 c : 4;
            u32 d : 4;
            u32 b : 2;
            u32 e : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
} func_8038D7DC_P;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
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
} func_8038D7DC_A;

extern func_8038D7DC_G D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

void func_8038D7DC(func_8038D7DC_A *arg0, s32 arg1) {
    func_8038D7DC_P *p;
    func_8038D7DC_P *q;

    p = (func_8038D7DC_P *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC03C : D_801BC3D8);
    q = (func_8038D7DC_P *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7DC;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, &D_801BBBF0, q) != 0) {
        arg0->unk91 = 0;
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (q->u30.bf.b != 0 && q->u30.bf.c == 2) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (q->u30.bf.b == 0 && q->u30.bf.c != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
            return;
        }
    }
    if (p->u38.b31 && !p->u38.b28) {
        if (!(arg0->unk9A & 2)) {
            arg0->unk9A |= 2;
            func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
            return;
        }
    }
    if (p->u38.b31 && p->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
        return;
    }
    if (!p->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D670((u8 *)arg0, (u8 *)p, (u8 *)q);
    }
}
