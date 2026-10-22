#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022AB58();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8022B3E0[];
extern void *func_800058DC(void *, void *);
extern void D_8038D744(void *, void *, void *, void *);
extern void func_80229500(void);
extern void func_8022A834();
extern void func_8038CFF4(void);
extern void func_8038D8A0();



void func_8038CFC0(void *arg0, s32 arg1)
{
  void *new_var3;
  void (*new_var)(void);
  void (*new_var2)(void);
  new_var3 = new_var3;
  if ((!arg0) && (!arg0))
  {
  }
 do { func_80229500(); new_var2 = func_8038CFF4; } while (0);
  if (1 ^ 0)
  {
    new_var = new_var2;
    new_var3 = (void *) new_var;
    func_800058DC(arg0, new_var3);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file091/8038CFC0/func_8038CFF4.s")


typedef struct func_8038D744_Struct {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0x5];
    u8 unkA1;
    u8 unkA2;
} func_8038D744_Struct;

typedef struct func_8038D744_Arg1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D744_Arg1;

extern void func_802294BC(void *a);
extern void func_80229CE0(void *a, void *b, s32 c);

void func_8038D744(void *arg0, void *arg1, void *arg2) {
    if (((u32) (((u32 *) arg2)[12] << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        ((func_8038D744_Struct *) arg0)->unk9A = (s16) (((func_8038D744_Struct *) arg0)->unk9A | 8);
    } else if ((*(f32 *) (D_801BC3D8 + 0x3A8) > 25.0) && (((func_8038D744_Struct *) arg0)->unk98 != 0)) {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0x13;
        ((func_8038D744_Arg1 *) arg1)->unk2D9 = 3;
    } else {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    }
    ((func_8038D744_Struct *) arg0)->unkA1 = ((func_8038D744_Arg1 *) arg1)->unk2D8;
    ((func_8038D744_Struct *) arg0)->unkA2 = ((func_8038D744_Arg1 *) arg1)->unk2D9;
}


typedef struct func_8038D810_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D810_Struct;


void func_8038D810(func_8038D810_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    extern void func_80229500();

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
    arg0->unk98 = 3;
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D8A0);
}


typedef struct func_8038D8A0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x4];
    u8 unk14[0x7D];
    u8 unk91;
    u8 pad92[0x6];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[0x7];
    void *unkB0;
} func_8038D8A0_Struct;
typedef struct func_8038D8A0_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D8A0_Glob;
extern func_8038D8A0_Glob D_801BBBF0;

void func_8038D8A0(func_8038D8A0_Struct *arg0, s32 arg1) {
    u8 *a1;
    u8 *a2;
    u32 v;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C;
    if (arg0->unkA8 == 2) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)(a1 + 0x30) & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)func_8038D8A0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2, &D_801BBBF0) != 0) {
        arg0->unk91 = 0;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    v = (*(u32 *)(a2 + 0x30) << 11) >> 30;
    if (v != 0 && !(arg0->unk9A & 8)) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (v == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
            return;
        }
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
        }
    }
}


struct func_8038DA80_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038DA80_Arg1 {
    u8 pad[6];
    s16 unk6;
};


void func_8038DA80(struct func_8038DA80_Arg0 *arg0, struct func_8038DA80_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

