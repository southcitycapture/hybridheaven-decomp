#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/D_8038E0F0.s")
#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/func_8038DAFC.s")


struct func_8038DCD4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0xA0 - 0x94];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038DD54 func_8038DD54__decl31
extern u8 func_8038DD54[];

extern s32 func_8038DAFC();

void func_8038DCD4(struct func_8038DCD4_Struct *arg0, s32 arg1) {
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
    arg0->unkA0 = 3;
    func_8038DAFC(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DD54);
}
#undef func_8038DD54

#define D_801BBBF0 D_801BBBF0__func_8038DD54
#define D_8038DD54 D_8038DD54__func_8038DD54
#define func_8022AB58 func_8022AB58__func_8038DD54
#define func_8022B3E0 func_8022B3E0__func_8038DD54
extern u8 D_8038DD54[];


typedef struct {
    s16 s0;
    s16 s2;
    u8 pad4[0x30 - 4];
    union {
        u16 h;
        struct {
            u32 pad0 : 3;
            u32 c : 4;
            u32 pad7 : 4;
            u32 b : 2;
            u32 pad13 : 19;
        } bf;
    } u30;
    u8 pad34[0x38 - 0x34];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
} func_8038DD54_Struct;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
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
} func_8038DD54_StructA;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DD54_StructG;

extern func_8038DD54_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

void func_8038DD54(func_8038DD54_StructA *arg0, s32 arg1) {
    func_8038DD54_Struct *p;
    func_8038DD54_Struct *q;
    s16 v;

    p = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DD54_Struct *)D_801BC03C : (func_8038DD54_Struct *)D_801BC3D8;
    q = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DD54_Struct *)D_801BC3D8 : (func_8038DD54_Struct *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038DAFC(arg0, p, q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038DD54;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (p->s2 < p->s0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        func_8038DAFC(arg0, p, q);
        return;
    }
    if (func_8022AB58(arg0, p, &D_801BBBF0, q) != 0) {
        arg0->unk91 = 0;
        func_8038DAFC(arg0, p, q);
        return;
    }
    if (q->u30.bf.b != 0 || q->u30.bf.c == 2) {
        func_8038DAFC(arg0, p, q);
        return;
    }
    if (q->u30.bf.b == 0 && q->u30.bf.c != 2) {
        v = arg0->unk9A;
        if (v & 8) {
            arg0->unk9A = v ^ 8;
            func_8038DAFC(arg0, p, q);
            return;
        }
    }
    if (p->u38.b31 && !p->u38.b28 && !(arg0->unk9A & 2)) {
        func_8038DAFC(arg0, p, q);
        return;
    }
    if (p->u38.b31 && p->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038DAFC(arg0, p, q);
        return;
    }
    if (!p->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038DAFC(arg0, p, q);
    }
}
#undef D_801BBBF0
#undef D_8038DD54
#undef func_8022AB58
#undef func_8022B3E0

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DFA0_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DFA0_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DFA0(struct func_8038DFA0_StructA *arg0, struct func_8038DFA0_StructB *arg1)
{
  s32 temp_v0;
  s32 k;
  temp_v0 = arg1->unk333;
  k = 2;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == k)
  {
    goto case2;
    done:
    return;

  }
  goto done;
  case0:
  arg0->unkA5 = 0;

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case1:
  func_8022A834();

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case2:
  if (arg1->unk6 >= 0x64)
  {
    arg0->unkA5 = k;
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}

