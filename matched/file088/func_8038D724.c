#include "context.h"

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
} func_8038D724_StructA;

typedef struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x38 - 0x32];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } unk38;
} func_8038D724_StructB;

typedef struct {
    u8 pad0[0x30];
    u32 pad : 3;
    u32 b3 : 4;
    u32 pad2 : 4;
    u32 b11 : 2;
    u32 rest : 19;
} func_8038D724_StructC;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D724_StructG;

extern func_8038D724_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *, void *);
extern void func_8022B3E0();
extern u8 D_8038D724[];

void func_8038D724(func_8038D724_StructA *arg0, s32 arg1) {
    func_8038D724_StructB *a;
    func_8038D724_StructC *b;
    u32 v1;

    a = (func_8038D724_StructB *)((D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8);
    b = (func_8038D724_StructC *)((D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D5F8(arg0, a, b);
        arg0->unkA8 = 0;
        return;
    }
    if ((a->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D724;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a, b) != 0) {
        arg0->unk91 = 0;
        func_8038D5F8(arg0, a, b);
        return;
    }
    if (b->b11 != 0 || b->b3 == 2) {
        func_8038D5F8(arg0, a, b);
        return;
    }
    v1 = a->unk38.b31;
    if (v1 != 0 && !a->unk38.b28 && !(arg0->unk9A & 2)) {
        func_8038D5F8(arg0, a, b);
        return;
    }
    if (v1 != 0 && a->unk38.b28 && !(arg0->unk9A & 4)) {
        func_8038D5F8(arg0, a, b);
        return;
    }
    if (v1 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D5F8(arg0, a, b);
    }
}
