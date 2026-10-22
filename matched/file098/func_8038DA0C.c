#include "context.h"

typedef struct func_8038DA0C_StructO {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 pad92[8];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[3];
    void *unkAC;
    void *unkB0;
} func_8038DA0C_StructO;

typedef struct func_8038DA0C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA0C_StructG;

extern func_8038DA0C_StructG D_801BBBF0;
typedef struct func_8038DA0C_StructB2 {
    u8 pad0[0x38];
    u32 flag:1;
    u32 x:2;
    u32 b28:1;
} func_8038DA0C_StructB2;

extern void func_8022B3E0();
extern void D_8038DA0C();
extern s32 func_8022AB58();

void func_8038DA0C(func_8038DA0C_StructO *arg0, void *arg1) {
    func_8038D800_StructB *a1;
    func_8038D800_StructC *a2;
    u32 v;
    u32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D800_StructB *)&D_801BC03C : (func_8038D800_StructB *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D800_StructC *)&D_801BC3D8 : (func_8038D800_StructC *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a1 + 0x30) & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkAC = D_8038DA0C;
        arg0->unkB0 = D_8038DA0C;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (a1->flag && !(arg0->unk9A & 2)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (a1->flag && ((func_8038DA0C_StructB2 *)a1)->b28 && !(arg0->unk9A & 4)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (!a1->flag && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    t = a2->f;
    if (t != 0 && !(arg0->unk9A & 8)) {
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (t == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D800((func_8038D800_StructA *)arg0, a1, a2);
    }
}
