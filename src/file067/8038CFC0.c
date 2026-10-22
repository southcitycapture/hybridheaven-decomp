#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file067/8038CFC0/func_8038CFF4.s")


typedef struct func_8038D834_StructA {
    u8 pad0[0x92];
    u8 v92;
    u8 v93;
    u8 pad94[6];
    s16 v9A;
    u8 pad9C[4];
    u8 vA0;
    u8 vA1;
    u8 vA2;
} func_8038D834_StructA;

typedef struct func_8038D834_StructB {
    s16 v0;
    s16 v2;
    u8 pad4[0x2D4];
    u8 v2D8;
    u8 v2D9;
} func_8038D834_StructB;

typedef struct func_8038D834_StructC {
    u8 pad0[0x30];
    s32 v30;
} func_8038D834_StructC;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D834(func_8038D834_StructA *a, func_8038D834_StructB *b, func_8038D834_StructC *c) {
    if (b->v0 / 5 >= b->v2 && a->vA0 != 0) {
        b->v2D8 = 0xB;
        b->v2D9 = 1;
        a->vA0 = a->vA0 - 1;
        a->v9A = 0x20;
    } else if (((u32)(c->v30 << 11) >> 30) != 0) {
        func_80229404(b);
        a->v9A = 8;
    } else if (a->v92 == 0) {
        b->v2D8 = 0;
        func_80229CE0(a, b, func_8022B640(2) & 0xFF);
        a->v93 = a->v92++;
    } else {
        s32 t = a->v92;
        if (a->v92 == 1) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 2) {
            b->v2D8 = 0;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92++;
        } else if (t == 3) {
            b->v2D8 = 1;
            func_80229CE0(a, b, func_8022B640(2) & 0xFF);
            a->v93 = a->v92;
            a->v92 = 0;
        }
    }
    a->vA1 = b->v2D8;
    a->vA2 = b->v2D9;
}


struct func_8038D9D0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    u16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_8038DA54();


void func_8038D9D0(struct func_8038D9D0_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unk9A = 0;
    arg0->unkA0 = 1;
    func_8038D834(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA54);
}

struct func_8038DA54_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA0 - 0x9C];
    u8 unkA0;
    u8 pad4[0xA8 - 0xA1];
    u8 unkA8;
    u8 pad5[0xAC - 0xA9];
    void *unkAC;
    void *unkB0;
};
struct func_8038DA54_Bits {
    u32 pad : 3;
    u32 b : 4;
    u32 pad2 : 4;
    u32 a : 2;
    u32 rest : 19;
};
typedef struct func_8038DA54_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA54_G;
extern func_8038DA54_G D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

extern u8 D_8038DA54[];
#define g (&D_801BBBF0)
void func_8038DA54(struct func_8038DA54_Struct *arg0, s32 arg1) {
    func_8038D834_StructB *a1;
    func_8038D834_StructC *a3;
    s32 d;
    s32 c;

    a1 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructB *)D_801BC03C : (func_8038D834_StructB *)D_801BC3D8;
    a3 = (arg0->unkC == g->unkDC) ? (func_8038D834_StructC *)D_801BC3D8 : (func_8038D834_StructC *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)a1 + 0x30) & 7) || (g->unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (g->unk1031 == 7) {
        arg0->unkAC = D_8038DA54;
        arg0->unkB0 = D_8038DA54;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a1->v2 < (a1->v0 / 5)) && !(arg0->unk9A & 0x20) && (arg0->unkA0 != 0)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (func_8022AB58(arg0, a1, g) != 0) {
        arg0->unk91 = 0;
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a != 0 || ((struct func_8038DA54_Bits *)&a3->v30)->b == 2) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        return;
    }
    if (((struct func_8038DA54_Bits *)&a3->v30)->a == 0 && ((struct func_8038DA54_Bits *)&a3->v30)->b != 2 && (arg0->unk9A & 8)) {
        func_8038D834((func_8038D834_StructA *)arg0, a1, a3);
        arg0->unk9A ^= 8;
    }
}

typedef struct func_8038DC20_Struct0 { u8 pad[0xA5]; u8 unkA5; } func_8038DC20_Struct0;
typedef struct func_8038DC20_Struct1 { u8 pad0[6]; s16 unk6; u8 pad1[0x32B]; u8 unk333; } func_8038DC20_Struct1;
extern void func_8022A834();
void func_8038DC20(func_8038DC20_Struct0 *arg0, func_8038DC20_Struct1 *arg1) {
    u32 t = arg1->unk333;
    if (t == 0) goto a;
    if (t == 1) goto a;
    if (t != 2) goto end;
    goto b;
a:
    func_8022A834();
    arg1->unk333 = arg1->unk333 + 1;
    goto end;
b:
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
    } else {
        func_8022A834();
    }
    arg1->unk333 = 0;
end:
    return;
}

