#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file080/8038CFC0/func_8038CFF4.s")


struct func_8038D438_Struct0 {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[7];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D438_Struct1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D438_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
};
struct func_8038D438_StructGlobal {
    u8 pad0[0xB90];
    f32 unkB90;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);
extern struct func_8038D438_StructGlobal D_801BBBF0;

void func_8038D438(void *arg0, void *arg1, void *arg2) {
    struct func_8038D438_Struct0 *a = arg0;
    struct func_8038D438_Struct1 *b = arg1;
    struct func_8038D438_Struct2 *c = arg2;

    if ((c->unk30 << 11) >> 30) {
        func_802294BC(b);
        a->unk9A = 8;
        a->unk92 = 0;
    } else if (D_801BBBF0.unkB90 > 25.0f) {
        b->unk2D8 = 0x13;
        if (D_801BBBF0.unkB90 > 40.0f) {
            b->unk2D9 = 0;
        } else {
            b->unk2D9 = 5;
        }
        a->unk92 = 0;
    } else {
        b->unk2D8 = 1;
        if (func_8022B640(2) == 0) {
            b->unk2D9 = 0x23;
            a->unk92 = 0;
        } else {
            func_80229CE0(a, b, 0);
            a->unk92 = 1;
        }
    }
    a->unkA1 = b->unk2D8;
    a->unkA2 = b->unk2D9;
}


struct func_8038D548_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D5D0 func_8038D5D0__decl82
extern u8 func_8038D5D0[];

void func_8038D548(struct func_8038D548_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D438(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D5D0);
}
#undef func_8038D5D0

#define D_801BBBF0 D_801BBBF0__func_8038D5D0
#define D_8038D438 D_8038D438__func_8038D5D0
#define D_8038D5D0 D_8038D5D0__func_8038D5D0
#define func_8022AB58 func_8022AB58__func_8038D5D0
#define func_8022B3E0 func_8022B3E0__func_8038D5D0
extern u8 D_8038D5D0[];


struct func_8038D5D0_StructObj {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D5D0_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D5D0_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038D5D0_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};

extern struct func_8038D5D0_StructGlobal D_801BBBF0;
#define G D_801BBBF0
extern s32 func_8022AB58(void *, void *, void *);
extern void D_8038D438(void *, void *, void *, void *);
extern u8 func_8022B3E0[];

void func_8038D5D0(struct func_8038D5D0_StructObj *arg0, void *arg1) {
    struct func_8038D5D0_StructA *var_a1;
    struct func_8038D5D0_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (G.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC03C;
    } else {
        var_a1 = (struct func_8038D5D0_StructA *) D_801BC3D8;
    }
    if (G.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D5D0_StructB *) D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (G.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (G.unk1031 == 7) {
        arg0->unkB0 = D_8038D5D0;
        func_800058DC((s32) arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if (G.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 == 0) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    if (G.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            D_8038D438(arg0, var_a1, var_a2, &G);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        D_8038D438(arg0, var_a1, var_a2, &G);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
        D_8038D438(arg0, var_a1, var_a2, &G);
    }
}
#undef G
#undef D_801BBBF0
#undef D_8038D438
#undef D_8038D5D0
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D7A4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

