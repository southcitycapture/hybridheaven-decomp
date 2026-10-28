#include "common.h"

#define D_801BBBF0 D_801BBBF0__func_8038CFC0
#define D_80229500 D_80229500__func_8038CFC0
#define func_800058DC func_800058DC__func_8038CFC0
#define func_8022B640 func_8022B640__func_8038CFC0
#define func_8038D048 func_8038D048__func_8038CFC0
extern void func_800058DC(void *, void *);
extern s32 func_8022B640(s32);

struct func_8038CFC0_S2 {
    u8 pad[0x5C];
    u8 *unk5C;
};
struct func_8038CFC0_G {
    u8 pad[0xDC];
    struct func_8038CFC0_S2 *unkDC;
    u8 padE0[0xC];
    struct func_8038CFC0_S2 *unkEC;
};
struct func_8038CFC0_Struct {
    u8 pad0[0xC];
    struct func_8038CFC0_Struct *unkC;
    u8 pad10[0x86];
    s16 unk96;
};
extern struct func_8038CFC0_G D_801BBBF0;
extern u8 func_8038D048[];
extern s32 D_80229500(void *, void *, void *);

void func_8038CFC0(struct func_8038CFC0_Struct *arg0, s32 arg1) {
    struct func_8038CFC0_S2 *t;
    u8 *v1;

    t = D_801BBBF0.unkDC;
    v1 = (u8 *)arg0->unkC->unkC;
    if ((u8 *)t == v1) {
        v1 = t->unk5C;
    } else {
        v1 = D_801BBBF0.unkEC->unk5C;
    }
    D_80229500((void *)((s32)arg0 * 1), &D_801BBBF0, arg0);
    v1[0x9C] = 1;
    arg0->unk96 = func_8022B640(8) << 10;
    func_800058DC(arg0, func_8038D048);
}
#undef D_801BBBF0
#undef D_80229500
#undef func_800058DC
#undef func_8022B640
#undef func_8038D048

#pragma GLOBAL_ASM("asm/nonmatchings/file074/8038CFC0/func_8038D048.s")


extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D864(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (((*(u32 *)(arg2 + 0x30) << 11) >> 30) != 0) {
        func_80229404(arg1);
        *(s16 *)(arg0 + 0x9A) = 8;
    } else if ((*(u32 *)(arg1 + 0x38) >> 31) != 0) {
        arg1[0x2D8] = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(3) == 0) {
        arg1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
        arg0[0x92] = 0;
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, 1);
        arg0[0x92] = 1;
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D948_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern void func_800058DC(void *, void *);
extern void func_80229500(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D9D0 func_8038D9D0__decl90
extern u8 func_8038D9D0[];

void func_8038D948(struct func_8038D948_Struct *arg0, void *arg1) {
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
    func_8038D864(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D9D0);
}
#undef func_8038D9D0

#define D_801BBBF0 D_801BBBF0__func_8038D9D0
#define D_8038D9D0 D_8038D9D0__func_8038D9D0
#define func_8022AB58 func_8022AB58__func_8038D9D0
#define func_8022B3E0 func_8022B3E0__func_8038D9D0
#define func_8038D864 func_8038D864__func_8038D9D0
extern u8 D_8038D9D0[];
void func_8038D864(u8 *arg0, u8 *arg1, u8 *arg2);


typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D9D0_StructA;

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 3;
            u32 c : 4;
            u32 pad7 : 4;
            u32 b : 2;
            u32 rest : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 rest : 31;
    } u38;
} func_8038D9D0_StructP;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038D9D0_StructG;
extern func_8038D9D0_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];

void func_8038D9D0(func_8038D9D0_StructA *arg0, s32 arg1) {
    func_8038D9D0_StructP *a3;
    func_8038D9D0_StructP *a2;
    u32 b;
    u32 f;

    a3 = (func_8038D9D0_StructP *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D9D0_StructP *)(D_801BBBF0.unkDC == arg0->unkC ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->u30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D9D0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
        return;
    }
    if (a2->u30.bf.b != 0 || a2->u30.bf.c == 2) {
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (a2->u30.bf.b == 0 && a2->u30.bf.c != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A ^= 8;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (a3->u38.b31 && !(arg0->unk9A & 2)) {
        arg0->unk9A |= 2;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    } else if (!a3->u38.b31 && (arg0->unk9A & 2)) {
        arg0->unk9A ^= 2;
        func_8038D864((u8 *)arg0, (u8 *)a3, (u8 *)a2);
    }
}
#undef D_801BBBF0
#undef D_8038D9D0
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D864

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBA0(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

