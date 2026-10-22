#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file059/8038CFC0/func_8038CFF4.s")

struct func_8038D690_Struct2 {
    u8 pad0[0x30];
    u32 pad30 : 11;
    u32 f30 : 2;
    u32 rest : 19;
    u8 pad34[0x385 - 0x34];
    u8 u385;
};
struct func_8038D690_Struct1 {
    u8 pad0[0x92];
    u8 u92;
    u8 u93;
    u8 pad94[6];
    s16 u9A;
    u8 pad9C[5];
    u8 uA1;
    u8 uA2;
};
struct func_8038D690_Struct3 {
    u8 pad0[0x2D8];
    u8 u2D8;
    u8 u2D9;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D690(void *arg0, void *arg1, void *arg2) {
    struct func_8038D690_Struct1 *a0 = arg0;
    struct func_8038D690_Struct3 *a1 = arg1;
    struct func_8038D690_Struct2 *a2 = arg2;
    if (a2->f30 != 0) {
        func_802294BC(a1);
        a0->u9A = 8;
    } else if (a2->u385 < 8) {
        a1->u2D8 = 0;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
    } else {
        a1->u2D8 = 0;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
        a0->u93 = a0->u92 = 0;
    }
    a0->uA1 = a1->u2D8;
    a0->uA2 = a1->u2D9;
}


struct func_8038D74C_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D7D4 func_8038D7D4__decl69
extern u8 func_8038D7D4[];

void func_8038D74C(struct func_8038D74C_Struct *arg0, void *arg1) {
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
    func_8038D690(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7D4);
}
#undef func_8038D7D4

struct func_8038D7D4_StructA { u8 pad[0xC]; s32 unkC; u8 pad2[0x91-0x10]; u8 unk91; u8 pad3[0xA8-0x92]; u8 unkA8; u8 pad4[0xB0-0xA9]; void *unkB0; };
struct func_8038D7D4_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
struct func_8038D7D4_StructB { u8 pad[0x30]; union { u32 w; u16 h; } unk30; };
extern struct func_8038D7D4_StructG D_801BBBF0;
extern u8 func_8022B3E0[];
extern u8 D_8038D7D4[];
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D7D4(struct func_8038D7D4_StructA *arg0, s32 arg1) {
    struct func_8038D7D4_StructB *a1;
    struct func_8038D7D4_StructB *a2;
    u32 word;
    u32 v;
    s32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D7D4_StructB *)D_801BC03C : (struct func_8038D7D4_StructB *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D7D4_StructB *)D_801BC3D8 : (struct func_8038D7D4_StructB *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D690((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7D4;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D690((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    word = a2->unk30.w;
    v = (word << 11) >> 30;
    if ((v != 0 || ((word << 3) >> 28) == 2) && !(((struct func_8038D690_Struct1 *)arg0)->u9A & 8)) {
        func_8038D690((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (v == 0) {
        t = ((struct func_8038D690_Struct1 *)arg0)->u9A;
        if (t & 8) {
            ((struct func_8038D690_Struct1 *)arg0)->u9A = t ^ 8;
            func_8038D690((void *)arg0, (void *)a1, (void *)a2);
        }
    }
}

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D93C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

