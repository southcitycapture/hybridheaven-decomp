#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022B640();
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_800058DC(void *, void *);
extern void func_802294BC();
extern void func_80229500(void *, void *, void *);
extern void func_80229CE0();
extern void func_8022A834();
extern void func_8038CFFC();
extern void func_8038D900(void *, void *, void *);
#define func_8038DA4C func_8038DA4C__decl
extern void func_8038DA4C(void);


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
    ((struct func_8038CFC0_Struct *) arg0)->unk98 = 5;
  }
  func_800058DC(new_var, &func_8038CFFC);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFFC
#define D_801BBC8C D_801BBC8C__func_8038CFFC
#define D_801BBCAC D_801BBCAC__func_8038CFFC
#define D_801BC3D8 D_801BC3D8__func_8038CFFC
#define func_8001EAD0 func_8001EAD0__func_8038CFFC
#define func_8001EB64 func_8001EB64__func_8038CFFC
#define func_8010843C func_8010843C__func_8038CFFC
#define func_80228C20 func_80228C20__func_8038CFFC
#define func_80228D90 func_80228D90__func_8038CFFC
#define func_802291FC func_802291FC__func_8038CFFC
#define func_802292D0 func_802292D0__func_8038CFFC
#define func_8038D9D4_Struct func_8038D9D4_Struct__func_8038CFFC
#define func_8038DA4C_StructGlobal func_8038DA4C_StructGlobal__func_8038CFFC
struct func_8038DA4C_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038DA4C_StructGlobal D_801BBBF0;
extern u8 D_801BC3D8[];
struct func_8038D9D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};


struct func_8038CFFC_StructG {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0xDC - 0x32];
    s32 unkDC;
    void *unkE0;
    u8 padE4[0xF0 - 0xE4];
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    f32 unkB94;
    u8 padB98[0x1031 - 0xB98];
    u8 unk1031;
};

struct func_8038CFFC_StructP {
    u8 pad0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
    u8 padA[0x30 - 0xA];
    u32 ba:3;
    u32 bb:4;
    u32 bc:2;
    u32 bd:2;
    u32 be:2;
    u32 bf:3;
    u32 bg:6;
    u32 bh:2;
    u32 bi:8;
    u8 pad34[0x38 - 0x34];
    u32 c31:1;
    u32 c30:1;
    u32 c29:1;
    u32 c28:1;
    u32 crest:28;
    u8 pad3C[0x9E - 0x3C];
    u16 unk9E;
};

struct func_8038CFFC_StructO {
    u8 pad0[0xC];
    struct func_8038D9D4_Struct *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
};

struct func_8038CFFC_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_8038CFFC_StructE {
    u8 pad0[0x2C];
    struct func_8038CFFC_StructF *unk2C;
};

#define G (*(struct func_8038CFFC_StructG *)&D_801BBBF0)
extern u8 D_801BBC8C;
extern u8 D_801BBCAC;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern s32 func_802291FC(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFFC(struct func_8038CFFC_StructO *arg0, s32 arg1) {
    s16 sp5E;
    f32 sp58;
    s16 sp56;
    struct func_8038CFFC_StructP *sp50;
    struct func_8038CFFC_StructP *a1;
    struct func_8038CFFC_StructP *t1;
    struct func_8038CFFC_StructE *sp44;
    s32 hi;
#define t hi

    sp56 = (s16)(0x2800 - G.unk232) & 0x1FFF;
    sp50 = (arg0->unkC->unkC == D_801BBBF0.unkDC) ? (void *)&D_801BBC8C : (void *)&D_801BBCAC;
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        a1 = (void *)&D_801BC03C;
    } else {
        a1 = (void *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC != D_801BBBF0.unkDC) {
        t1 = (void *)&D_801BC03C;
    } else {
        t1 = (void *)&D_801BC3D8;
    }
    if (arg0->unkC->unkC == D_801BBBF0.unkDC) {
        sp44 = G.unkE0;
    } else {
        sp44 = G.unkF0;
    }
    if ((arg0->unk91 == 1) && (G.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->bd != 0) && (a1->bb != 1)) {
        if ((G.unk1031 >= 7) && (G.unk1031 != 0xF)) {
            arg0->unk98 = 0;
            arg0->unk95 = *((u8 *)arg0 + 0x99);
            arg0->unk92 = *((u8 *)arg0 + 0x99);
        }
        if ((G.unk1031 == 5) && !a1->bf && (func_802291FC(arg0, a1, sp50, 0xA) == 0)) {
            if (arg0->unk92 == 0) {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a1->bh == 2) {
                    a1->bh = 0;
                }
                if (a1->c31 != 0) {
                    arg0->unk90 = 0x14;
                    arg0->unk92 = 3;
                    return;
                }
                if ((a1->unk6 >= 0x46) && ((f64)G.unkB94 < 12.0)) {
                    if (func_80228D90(arg0, a1) != 0) {
                        arg0->unk92 = 1;
                        arg0->unk90 = 0;
                        return;
                    }
                }
                if (G.unkB94 > 60.0f) {
                    sp5E = (s16)(func_80228C20(arg0) + sp56) & 0x1FFF;
                    sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                    sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                    return;
                }
                if ((t1->unk9E == 0) && (G.unkB90 > 35.0f) && (arg0->unk98 != 0) && (a1->unk6 >= 0x64)) {
                    if (func_80228D90(arg0, a1) != 0) {
                        sp50->unk4 = 0x8000;
                        arg0->unk98 = arg0->unk98 - 1;
                        return;
                    }
                }
                if ((a1->unk6 >= 0x46) && ((f64)G.unkB94 > 14.0)) {
                    sp58 = 0.0f;
                } else {
                    sp58 = 1.0f;
                }
                hi = G.unk30 % 160;
                if (hi < 0x30) {
                    if (func_8010843C(sp44->unk2C->unk4, sp44->unk2C->unk8, sp44->unk2C->unkC, (func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unk4, sp44->unk2C->unk8, (func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unkC) == 0) {
                        sp5E = (s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp58 + (f32)sp56) & 0x1FFF;
                        sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                        sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                    }
                } else if ((hi >= 0x50) && (hi < 0x80)) {
                    if (func_8010843C(sp44->unk2C->unk4, sp44->unk2C->unk8, sp44->unk2C->unkC, (func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unk4, sp44->unk2C->unk8, (func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp58) & 0x1FFF)) * 20.0f) + sp44->unk2C->unkC) == 0) {
                        sp5E = (s16)(s32)((f32)func_80228C20(arg0) + (-2048.0f * sp58) + (f32)sp56) & 0x1FFF;
                    }
                    sp50->unk6 = (s32)(-func_8001EB64(sp5E) * 80.0f);
                    sp50->unk8 = (s32)(func_8001EAD0(sp5E) * 80.0f);
                }
            } else {
                t = arg0->unk92;
                if (arg0->unk92 == 1) {
                    if (t1->be != 0) {
                        if (a1->unk6 >= 0x64) {
                            sp50->unk4 = 0x8000;
                        }
                    } else if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (a1->c31 != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (arg0->unk91 != 2) {
                        func_802292D0(sp50, a1);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    arg0->unk92 = 3;
                    return;
                } else if (t == 2) {
                    if (a1->c31 != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (a1->bh == 2) {
                        arg0->unk92 = 3;
                    }
                    if (a1->bh == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (t == 3) {
                    if ((f64)G.unkB94 > 18.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (((a1->c31 == 0) || ((a1->c31 != 0) && !a1->c28)) && (a1->unk6 >= 0x64) && (arg0->unk90 == 0)) {
                        if (func_80228D90(arg0, a1) != 0) {
                            a1->bh = 0;
                            sp50->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            arg0->unk92 = 4;
                        }
                    }
                    if (arg0->unk90 != 0) {
                        arg0->unk90 = arg0->unk90 - 1;
                    }
                } else if ((t == 4) && (G.unk1031 == 5)) {
                    arg0->unk92 = 0;
                }
            }
        }
    }
}
#undef G
#undef t
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80228C20
#undef func_80228D90
#undef func_802291FC
#undef func_802292D0
#undef func_8038D9D4_Struct
#undef func_8038DA4C_StructGlobal

struct func_8038D900_StructA { u8 pad[0x30]; u32 pre:11; u32 f:2; u32 rest:19; };
struct func_8038D900_StructB { u8 pad[0x9A]; s16 unk9A; u8 pad2[5]; u8 unkA1; u8 unkA2; };
struct func_8038D900_StructC { u8 pad[0x2D8]; u8 unk2D8; u8 unk2D9; };

void func_8038D900(void *a0, void *a1, void *a2) {
    struct func_8038D900_StructB *arg0 = a0;
    struct func_8038D900_StructC *arg1 = a1;
    struct func_8038D900_StructA *arg2 = a2;
    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if (*(f32 *)(&D_801BC3D8 + 0x3A8) > 35.0f) {
        arg1->unk2D8 = 0xC;
        arg1->unk2D9 = 0x18;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D9D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};


void func_8038D9D4(struct func_8038D9D4_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D900(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DA4C);
}

#undef func_8038DA4C
#define D_801BBBF0 D_801BBBF0__func_8038DA4C
#define D_8038DA4C D_8038DA4C__func_8038DA4C
#define func_8022AB58 func_8022AB58__func_8038DA4C
#define func_8022B3E0 func_8022B3E0__func_8038DA4C

struct func_8038DA4C_StructObj {
    u8 pad0[0x0C];
    s32 unkC;
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
};

struct func_8038DA4C_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038DA4C_StructB {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_8038DA4C_StructGlobal {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
};
extern s32 func_8022AB58(void *, void *, void *);
extern struct func_8038DA4C_StructGlobal D_801BBBF0;
extern u8 func_8022B3E0[];
extern u8 D_8038DA4C[];

void func_8038DA4C(struct func_8038DA4C_StructObj *arg0, void *arg1) {
    struct func_8038DA4C_StructA *var_a1;
    struct func_8038DA4C_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038DA4C_StructA *) &D_801BC03C;
    } else {
        var_a1 = (struct func_8038DA4C_StructA *) &D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038DA4C_StructB *) &D_801BC3D8;
    } else {
        var_a2 = (struct func_8038DA4C_StructB *) &D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D900(arg0, var_a1, var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038DA4C;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D900(arg0, var_a1, var_a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 35.0f) {
        temp_v0 = arg0->unk9A;
        if (temp_v0 == 0) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            func_8038D900(arg0, var_a1, var_a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 30.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            func_8038D900(arg0, var_a1, var_a2);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D900(arg0, var_a1, var_a2);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D900(arg0, var_a1, var_a2);
    }
}
#undef D_801BBBF0
#undef D_8038DA4C
#undef func_8022AB58
#undef func_8022B3E0
#define func_8038DA4C func_8038DA4C__decl

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DC28_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DC28_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038DC28(struct func_8038DC28_StructA *arg0, struct func_8038DC28_StructB *arg1)
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

