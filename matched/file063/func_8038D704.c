#define func_8038D704 D_8038D704
#include "context.h"
#undef func_8038D704
extern u8 D_8038D704[];
extern s32 func_8022AB58();
extern void func_8022B3E0();
typedef struct func_8038D704_StructA {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA0 - 0x9C];
    u8 unkA0;
    u8 padA1[0xA8 - 0xA1];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D704_StructA;
typedef struct func_8038D704_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 0x4];
    union {
        struct {
            u32 b0 : 3;
            u32 b3 : 4;
            u32 b7 : 4;
            u32 b11 : 2;
            u32 rest : 19;
        } b;
        struct {
            u16 h30;
        } c;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 rest38 : 28;
} func_8038D704_StructB;

#define CALL(x, y, z) func_8038D53C((void *)(x), (void *)(y), (void *)(z))

void func_8038D704(func_8038D704_StructA *arg0, s32 arg1) {
    func_8038D704_StructB *a1;
    func_8038D704_StructB *a2;

    a1 = D_801BBBF0.unkDC == arg0->unkC ? (func_8038D704_StructB *)D_801BC03C : (func_8038D704_StructB *)D_801BC3D8;
    a2 = D_801BBBF0.unkDC == arg0->unkC ? (func_8038D704_StructB *)D_801BC3D8 : (func_8038D704_StructB *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.c.h30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D704;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        CALL(arg0, a1, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        CALL(arg0, a1, a2);
        return;
    }
    if (a2->u30.b.b11 != 0 || a2->u30.b.b3 == 2) {
        CALL(arg0, a1, a2);
        return;
    }
    if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
        CALL(arg0, a1, a2);
        return;
    }
    if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
        CALL(arg0, a1, a2);
        return;
    }
    if (!a1->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL(arg0, a1, a2);
        return;
    }
    if (a2->u30.b.b11 == 0 && a2->u30.b.b3 != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        CALL(arg0, a1, a2);
    }
}
