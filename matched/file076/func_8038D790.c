#define func_8038D790 func_8038D790_decl
#include "context.h"
#undef func_8038D790

typedef struct func_8038D790_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 bf0 : 11;
            u32 bf11 : 2;
            u32 bf13 : 19;
        } b;
        u16 h30;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 b29 : 2;
    u32 b28 : 1;
    u32 rest : 28;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
} func_8038D790_StructP;

typedef struct func_8038D790_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructT *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D790_StructA;

extern void func_8022B3E0();
extern s32 func_8022AB58();

void func_8038D790(func_8038D790_StructA *arg0, s32 arg1) {
    func_8038D790_StructP *a1;
    func_8038D790_StructP *a2;
    u32 a3;

    a1 = (func_8038D790_StructP *)((arg0->unkC == D_801BBBF0.unkDC) ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D790_StructP *)((arg0->unkC == D_801BBBF0.unkDC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D790;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((D_801BBBF0.unkB90 > 30.0f) && !(arg0->unk9A & 0x100) && !(a1->unkA6 & 1)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((D_801BBBF0.unkB90 < 30.0f) && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    a3 = a2->u30.b.bf11;
    if ((a3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((a3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (!a1->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
    }
}
