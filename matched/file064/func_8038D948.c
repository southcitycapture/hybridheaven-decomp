#define func_8038D948 D_8038D948
#include "context.h"
#undef func_8038D948
extern void D_8038D948(void);

typedef struct func_8038D948_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D948_Struct;

typedef struct func_8038D948_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 11;
            u32 b11 : 2;
            u32 pad13 : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
    u8 pad3C[0x62];
    u16 unk9E;
} func_8038D948_StructP;

typedef struct func_8038D948_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D948_StructG;

extern func_8038D948_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

void func_8038D948(func_8038D948_Struct *arg0, s32 arg1) {
    func_8038D948_StructP *a1;
    func_8038D948_StructP *a2;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC03C : (func_8038D948_StructP *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC3D8 : (func_8038D948_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D948;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 20.0f && arg0->unk9A == 0 && a2->unk9E == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A ^= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 != 0 && !(arg0->unk9A & 8)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A ^= 8;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && !a1->u38.b28 && !(arg0->unk9A & 2)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && a1->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (!a1->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk92 = arg0->unk93;
        arg0->unk9A = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
    }
}
