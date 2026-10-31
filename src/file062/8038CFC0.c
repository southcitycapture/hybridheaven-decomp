#include "common.h"

extern f64 D_8038DB80;
extern s32 D_801BBCCC;
extern s32 func_8022B640();
extern s32 func_8038D5C4();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
#define func_8038D784 func_8038D784__decl
extern u8 func_8038D784[];
extern void func_800058DC(void *, void *);
extern void func_80229404(void *);
extern void func_80229500(void *, void *, void *);
extern void func_80229CE0(void *, void *, s32);
extern void func_8022A834();
extern void func_8038CFFC();


struct func_8038CFC0_Struct {
    u8 pad0[0x98];
    s16 unk98;
};


void func_8038CFC0(s32 arg0, s32 arg1)
{
  void *new_var;
  extern void func_80229500();
  if (1)
  {
    new_var = (void *) arg0;
    func_80229500();
    ((struct func_8038CFC0_Struct *) arg0)->unk98 = 3;
  }
  func_800058DC(new_var, &func_8038CFFC);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFFC
#define D_801BBC8C D_801BBC8C__func_8038CFFC
#define D_801BBCAC D_801BBCAC__func_8038CFFC
#define D_8038DB78 D_8038DB78__func_8038CFFC
#define func_8001EAD0 func_8001EAD0__func_8038CFFC
#define func_8001EB64 func_8001EB64__func_8038CFFC
#define func_80228C20 func_80228C20__func_8038CFFC
#define func_80228D90 func_80228D90__func_8038CFFC
#define func_80228FD0 func_80228FD0__func_8038CFFC
#define func_80229260 func_80229260__func_8038CFFC
#define func_802292D0 func_802292D0__func_8038CFFC
extern u8 D_801BBBF0[];


typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFFC_StructG;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFFC_StructC;

typedef struct {
    u8 pad0[0xC];
    func_8038CFFC_StructC *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[2];
    s16 unk98;
    u8 pad4[2];
    u32 unk9C;
} func_8038CFFC_StructA;

typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad0[2];
    s16 unk6;
    u8 pad1[0x30 - 8];
    u32 ba : 3;
    u32 bb : 4;
    u32 bc : 2;
    u32 bd : 2;
    u32 be : 2;
    u32 bf : 3;
    u32 bg : 6;
    u32 bh : 2;
    u32 bi : 8;
    u8 pad2[4];
    u32 c31 : 1;
    u32 c0 : 31;
} func_8038CFFC_StructB;

typedef struct {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFFC_StructP;

#define G ((func_8038CFFC_StructG *)D_801BBBF0)
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_80228C20(void *, void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f64 D_8038DB78;

void func_8038CFFC(func_8038CFFC_StructA *arg0, s32 arg1) {
    s32 pad;
    s16 sp32;
    func_8038CFFC_StructP *sp2C;
    func_8038CFFC_StructB *a1;
    func_8038CFFC_StructB *v1;
    u16 n;
    s16 ang;

    sp32 = (s16)(0x2800 - G->unk232) & 0x1FFF;
    sp2C = (arg0->unkC->unkC == G->unkDC) ? (func_8038CFFC_StructP *)D_801BBC8C : (func_8038CFFC_StructP *)D_801BBCAC;
    if (arg0->unkC->unkC == G->unkDC) {
        a1 = (func_8038CFFC_StructB *)D_801BC03C;
    } else {
        a1 = (func_8038CFFC_StructB *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == G->unkDC) {
        v1 = (func_8038CFFC_StructB *)D_801BC3D8;
    } else {
        v1 = (func_8038CFFC_StructB *)D_801BC03C;
    }
    if (arg0->unk91 == 1 && G->unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->bd == 0 || a1->bb == 1) {
        return;
    }
    if (G->unk1031 >= 7 && G->unk1031 != 15) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (G->unk1031 != 5 || a1->bf != 0 || func_80229260(arg0, a1, sp2C, 10) != 0) {
        return;
    }
    if (G->unkB90 < 15.0 || arg0->unk95 == 1) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
        }
        if (G->unkB90 > 20.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            if (a1->bh != 0) {
                a1->bh = 0;
            }
        } else if (v1->be != 0 || v1->bb == 2) {
            if (a1->unk6 >= 100) {
                sp2C->unk4 = 0x8000;
            }
        } else {
            if (arg0->unk91 == 2) {
                arg0->unk92 = 4;
            }
            if (arg0->unk92 == 1) {
                if (a1->c31) {
                    arg0->unk92 = 3;
                    arg0->unk90 = 0;
                    return;
                }
                if (a1->unk6 >= 0x47) {
                    func_802292D0(sp2C, a1);
                    arg0->unk91 = 1;
                    arg0->unk92 = 2;
                    return;
                }
                func_80228FD0(arg0, sp2C, 4);
            } else if (arg0->unk92 == 2) {
                if (a1->c31) {
                    arg0->unk92 = 3;
                }
                if (a1->bh == 2) {
                    arg0->unk92 = 4;
                }
                if (a1->bh == 0) {
                    arg0->unk92 = 1;
                }
            } else if (arg0->unk92 == 3) {
                n = (a1->unk2 * 10) / (f32)a1->unk0 + 20.0f;
                if (!a1->c31) {
                    arg0->unk92 = 0;
                }
                if (n < arg0->unk90++) {
                    if (a1->c31) {
                        arg0->unk92 = 4;
                        arg0->unk90 = 0;
                    }
                }
            } else if (arg0->unk92 == 4) {
                if (a1->unk6 >= 100 && func_80228D90(arg0, a1) != 0) {
                    a1->bh = 0;
                    sp2C->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    arg0->unk92 = 5;
                    return;
                }
                func_80228FD0(arg0, sp2C, 4);
            } else if (arg0->unk92 == 5 && G->unk1031 == 5) {
                arg0->unk95 = 0;
                arg0->unk92 = 0;
            }
        }
    } else {
        if (arg0->unk91 == 1) {
            arg0->unk91 = 2;
        }
        if (a1->bh == 2) {
            a1->bh = 0;
        }
        if (G->unkB90 > 25.0f && v1->unk0 * D_8038DB78 < v1->unk2 && a1->unk6 >= 100 && arg0->unk98 != 0) {
            sp2C->unk4 = 0x8000;
            arg0->unk98--;
        }
        if ((arg0->unk9C & 0x1F) < 10) {
            ang = func_80228C20(arg0, a1) + sp32;
            sp2C->unk6 = -func_8001EB64(ang) * 80.0f;
            sp2C->unk8 = func_8001EAD0(ang) * 80.0f;
        }
    }
}
#undef G
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_8038DB78
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0



s32 func_8038D5C4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 v = *(u32 *)(arg2 + 0x30);
    if ((((v << 11) >> 30) != 0) || (((v << 3) >> 28) == 2)) {
        func_80229404(arg1);
        *(s16 *)(arg0 + 0x9A) |= 8;
    } else if ((*(u32 *)(arg1 + 0x38) >> 31) != 0) {
        arg1[0x2D8] = 2;
        *(s16 *)(arg0 + 0x9A) |= 2;
        func_80229CE0(arg0, arg1, 1);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (((f64)*(s16 *)arg2 * D_8038DB80) < (f64)*(s16 *)(arg2 + 2))) {
        arg1[0x2D8] = 0x13;
        arg1[0x2D9] = 2;
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D6FC_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


void func_8038D6FC(struct func_8038D6FC_Struct *arg0, void *arg1) {
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
    func_8038D5C4(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D784);
}

#undef func_8038D784
#define D_801BBBF0 D_801BBBF0__func_8038D784
#define D_8038D784 D_8038D784__func_8038D784
#define D_8038DB88 D_8038DB88__func_8038D784
#define func_8022AB58 func_8022AB58__func_8038D784
#define func_8022B3E0 func_8022B3E0__func_8038D784
#define func_8038D5C4 func_8038D5C4__func_8038D784
extern u8 D_8038D784[];
s32 func_8038D5C4(u8 *arg0, u8 *arg1, u8 *arg2);


struct func_8038D784_StructA {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91, unk92, unk93;
    u8 pad2[6];
    s16 unk9A;
    u8 pad3[0xC];
    u8 unkA8;
    u8 pad4[3];
    void *unkAC, *unkB0;
};
struct func_8038D784_StructB {
    s16 unk0, unk2;
    u8 pad0[0x2C];
    u32 c29 : 3;
    u32 c25 : 4;
    u32 c21 : 4;
    u32 c19 : 2;
    u32 c16 : 3;
    u32 c0 : 16;
    u8 pad1[4];
    u32 b31 : 1;
    u32 b30 : 2;
    u32 b28 : 1;
    u32 b0 : 28;
};
extern u8 D_801BBBF0[];
extern f64 D_8038DB88;
extern void func_8022B3E0();
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D784(struct func_8038D784_StructA *arg0, s32 arg1) {
    struct func_8038D784_StructB *var_a3;
    struct func_8038D784_StructB *var_a2;
    s32 temp_v1;
    s32 temp_v0;
    s16 flags;

    temp_v1 = arg0->unkC;
    temp_v0 = *(s32 *)(D_801BBBF0 + 0xDC);
    if (temp_v0 == temp_v1) var_a3 = (void *)D_801BC03C;
    else var_a3 = (void *)D_801BC3D8;
    if (temp_v0 == temp_v1) var_a2 = (void *)D_801BC3D8;
    else var_a2 = (void *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)((u8 *)var_a3 + 0x30) & 7) || D_801BBBF0[0x1031] == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkAC = D_8038D784;
        arg0->unkB0 = D_8038D784;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a3, var_a2)) {
        arg0->unk91 = 0;
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a2->c19 != 0 || var_a2->c25 == 2) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a2->c19 == 0 && var_a2->c25 != 2) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 & 8) {
            arg0->unk9A = temp_v0 ^ 8;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 25.0f) {
        flags = arg0->unk9A;
        if (flags == 0 && (f64)var_a2->unk0 * D_8038DB88 < (f64)var_a2->unk2) {
            arg0->unk9A = flags | 0x100;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) <= 25.0f) {
        flags = arg0->unk9A;
        if (flags & 0x100) {
            arg0->unk9A = flags ^ 0x100;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
            return;
        }
    }
    if (var_a3->b31 && !var_a3->b28 && !(arg0->unk9A & 2)) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (var_a3->b31 && var_a3->b28 && !(arg0->unk9A & 4)) {
        func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        return;
    }
    if (!var_a3->b31) {
        flags = arg0->unk9A;
        if (flags & 6) {
            arg0->unk92 = arg0->unk93;
            arg0->unk9A = flags & 0xF9;
            func_8038D5C4((void *)arg0, (void *)var_a3, (void *)var_a2);
        }
    }
}
#undef D_801BBBF0
#undef D_8038D784
#undef D_8038DB88
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D5C4
#define func_8038D784 func_8038D784__decl

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DA40_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DA40_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038DA40(struct func_8038DA40_StructA *arg0, struct func_8038DA40_StructB *arg1)
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


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8038CFC0[] = {
    0xA5, 0xD7, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
};
