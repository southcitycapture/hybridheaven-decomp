#include "common.h"
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038D000_StructF;
typedef struct {
    u8 pad0[0x2C];
    func_8038D000_StructF *unk2C;
} func_8038D000_StructE;
typedef struct {
    u8 pad0[0xDC];
    void *unkDC;
    func_8038D000_StructE *unkE0;
    u8 padE4[0xF0 - 0xE4];
    func_8038D000_StructE *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[4];
    s16 unkB98;
    u8 padB9A[0x1031 - 0xB9A];
    u8 unk1031;
} func_8038D000_Glob;
extern func_8038D000_Glob D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void *func_800058DC(void *, void *);
void func_8038D470(void *arg0, void *arg1, void *arg2);


typedef struct {
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
} func_8038D5BC_Obj;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad : 11;
            u32 b : 2;
            u32 rest : 19;
        } bf;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 rest38 : 31;
} func_8038D5BC_P;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D5BC[];

void func_8038D5BC(func_8038D5BC_Obj *arg0, s32 arg1) {
    func_8038D5BC_P *a1;
    func_8038D5BC_P *a2;
    u32 c;
    u32 t;
    s32 flag;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D5BC_P *)D_801BC03C : (func_8038D5BC_P *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D5BC_P *)D_801BC3D8 : (func_8038D5BC_P *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D470(arg0, a1, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D5BC;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D470(arg0, a1, a2);
        return;
    }
    c = a2->u30.bf.b;
    if (c) {}
    if ((c != 0) && !(arg0->unk9A & 8)) {
        func_8038D470(arg0, a1, a2);
        return;
    }
#define v (arg0->unk9A)
    t = a1->b31;
    flag = !(v & 2);
    if (flag & t) {
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((D_801BBBF0.unkB90 > 20.0f) && (v == 0)) {
        arg0->unk9A = v | 0x100;
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((D_801BBBF0.unkB90 <= 18.0f) && (v & 0x100)) {
        arg0->unk9A = v ^ 0x100;
        func_8038D470(arg0, a1, a2);
        return;
    }
    flag = (t == 0);
    if (flag) {}
    if (flag & v & 2) {
        arg0->unk9A = v & 0xFD;
        arg0->unk92 = arg0->unk93;
        func_8038D470(arg0, a1, a2);
        return;
    }
    if ((c == 0) && (v & 8)) {
        arg0->unk9A = v ^ 8;
        func_8038D470(arg0, a1, a2);
    }
}
