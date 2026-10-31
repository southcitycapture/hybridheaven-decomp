#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8001EF38 func_8001EF38__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228E5C func_80228E5C__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    s32 *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    u8 pad3[0x9A - 0x96];
    s16 unk9A;
};
struct func_8038CFF4_StructD {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    f32 unkB94;
    u8 pad3[0x1031 - 0xB98];
    u8 unk1031;
};
extern struct func_8038CFF4_StructD D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228E5C();
extern s32 func_80229260();
extern void func_802292D0();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);

#define W(p, o, T) (*(T *)((u8 *)(p) + (o)))
typedef struct {
    unsigned b0 : 3;
    unsigned b3 : 4;
    unsigned b7 : 2;
    unsigned b9 : 2;
    unsigned b11 : 2;
    unsigned b13 : 3;
    unsigned b16 : 3;
    unsigned b19 : 3;
    unsigned b22 : 2;
    unsigned b24 : 8;
    u32 unk34;
    unsigned c0 : 1;
    unsigned c1 : 2;
    unsigned c3 : 1;
    unsigned c4 : 28;
} func_8038CFF4_BF;
#define BF(p) ((func_8038CFF4_BF *)((u8 *)(p) + 0x30))

void func_8038CFF4(struct func_8038CFF4_StructA *arg0, s32 arg1) {
    f32 sp3C;
    s32 pad38;
    s16 pad36;
    s16 sp34;
    u8 *sp30;
    s32 pad2C;
    u8 *a1;
    u8 *v1;
    f64 f;
    s16 ang;
    s32 b;

    sp34 = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp30 = D_801BBBF0.unkDC == arg0->unkC[3] ? D_801BBC8C : D_801BBCAC;
    a1 = D_801BBBF0.unkDC == arg0->unkC[3] ? &D_801BC03C : &D_801BC3D8;
    v1 = D_801BBBF0.unkDC != arg0->unkC[3] ? &D_801BC03C : &D_801BC3D8;
    if (arg0->unk91 == 1) {
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unk91 = 2;
        }
    }
    if (BF(a1)->b9 == 0) {
        return;
    }
    if (BF(a1)->b3 == 1) {
        return;
    }
    {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && !BF(a1)->b13 &&
            !func_80229260(arg0, a1, sp30, 0xA)) {
            f = D_801BBBF0.unkB90;
            if (f < 15.0 || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    f = *(f32 *)(&D_801BC3D8 + 0x3A8);
                }
                if (f > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                }
                if ((BF(v1)->b11 != 0 && W(v1, 0x312, s16) >= 0xB) ||
                    BF(v1)->b3 == 2U) {
                    if (W(a1, 6, s16) >= 0x64) {
                        W(sp30, 4, u16) = 0x8000;
                    }
                } else {
                    if (W(a1, 4, s16) / 2 >= W(a1, 6, s16) && arg0->unk9A == 0) {
                        arg0->unk9A = 1;
                        W(a1, 0x328, u8) = 3;
                        W(a1, 0x329, u8) = 0;
                        sp3C = func_8001EB64(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0;
                        W(a1, 0x32A, s16) = (s16)(func_8001EF38(sp3C, func_8001EAD0(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0) - sp34) & 0x1FFF;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (BF(a1)->c0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (W(a1, 0x2FC, u8) % 5 == 2) {
                            if (W(a1, 6, s16) >= 0x50) {
                                W(sp30, 4, s16) = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 3;
                                return;
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (W(a1, 0x2FC, u8) % 5 == 4) {
                            if (W(a1, 6, s16) >= 0x50) {
                                W(sp30, 4, s16) = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 5;
                                return;
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (W(a1, 6, s16) >= 0x46) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228E5C(arg0, sp30, 7);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (BF(a1)->c0 != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (BF(a1)->b22 == 2) {
                            arg0->unk92 = 4;
                            return;
                        }
                        if (BF(a1)->b22 == 0) {
                            arg0->unk92 = 1;
                            return;
                        }
                        func_80228E5C(arg0, sp30, 7);
                        return;
                    }
                    if (arg0->unk92 == 3) {
                        if (BF(a1)->c0 != 0) {
                            if (arg0->unk90++ >= 0x1F) {
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                        }
                        if (BF(a1)->c1 == 0 && BF(a1)->c0 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else {
                        if (arg0->unk92 == 4) {
                            if (W(a1, 6, s16) >= 0x64) {
                                if (func_80228D90(arg0) != 0) {
                                    W(a1, 0x32, u8) = W(a1, 0x32, u8) & 0xFFFC;
                                    W(sp30, 4, u16) = 0x8000;
                                    arg0->unk9A = 0;
                                    arg0->unk91 = 0;
                                    return;
                                }
                            }
                            func_80228E5C(arg0, sp30, 7);
                            return;
                        }
                        if (arg0->unk92 == 5) {
                            arg0->unk90 = arg0->unk90 + 1;
                            W(a1, 0x328, u8) = 3;
                            W(a1, 0x329, u8) = 0;
                            sp3C = func_8001EB64(func_80228C20(arg0) + 0x800) * 80.0f / 20.0;
                            W(a1, 0x32A, s16) = (s16)(func_8001EF38(sp3C, func_8001EAD0(func_80228C20(arg0) + 0x800) * 80.0f / 20.0) - sp34) & 0x1FFF;
                            if ((W(a1, 0x38, u32) >> 31) != 0 && BF(a1)->c3 != 0) {
                                arg0->unk92 = 4;
                            }
                            if ((W(a1, 0x38, u32) >> 31) == 0) {
                                arg0->unk92 = 1;
                            }
                            return;
                        }
                    }
                }
                return;
            }
            {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                b = W(a1, 0x32, u8);
                if ((b & 3) == 2U) {
                    W(a1, 0x32, u8) = b & 0xFFFC;
                }
                if ((D_801BBBF0.unkB94 > 35.0f && BF(a1)->b16 == 3) ||
                    D_801BBBF0.unkB94 > 45.0f) {
                    W(sp30, 2, s16) = 0x2000;
                }
                ang = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                W(sp30, 6, s16) = -func_8001EB64(ang) * 80.0f;
                W(sp30, 8, s16) = func_8001EAD0(ang) * 80.0f;
            }
        }
    }
}
#undef W
#undef BF
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_80228C20
#undef func_80228D90
#undef func_80228E5C
#undef func_80229260
#undef func_802292D0


struct func_8038D744_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u8 pad1[0x92 - 0x3C];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
    u8 pad4[0x2D8 - 0xA3];
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, u8);
extern s32 func_8022B640(s32);

void func_8038D744(struct func_8038D744_Struct *arg0, struct func_8038D744_Struct *arg1, struct func_8038D744_Struct *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = arg0->unk9A | 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, (u8) func_8022B640(2));
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, (u8) func_8022B640(2));
        arg0->unk93 = arg0->unk92;
        arg0->unk92 = 0;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038D8A8();

void func_8038D830(struct func_8038D830_Struct *arg0, s32 arg1) {
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
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D8A8);
}

#define D_801BBBF0 D_801BBBF0__func_8038D8A8
#define D_8038D8A8 D_8038D8A8__func_8038D8A8
#define func_8022AB58 func_8022AB58__func_8038D8A8
#define func_8022B3E0 func_8022B3E0__func_8038D8A8
#define func_8038D744_Struct func_8038D744_Struct__func_8038D8A8
struct func_8038D744_Struct {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u8 pad1[0x92 - 0x3C];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
    u8 pad4[0x2D8 - 0xA3];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D8A8_Bits30 {
    u32 a : 3;
    u32 f4 : 4;
    u32 p : 4;
    u32 g : 2;
    u32 rest : 19;
};
struct func_8038D8A8_Bits38 {
    u32 t : 1;
    u32 x : 2;
    u32 y : 1;
    u32 rest : 28;
};
struct func_8038D8A8_Obj {
    u8 pad0[0x30];
    struct func_8038D8A8_Bits30 unk30;
    u32 unk34;
    struct func_8038D8A8_Bits38 unk38;
};
struct func_8038D8A8_Self {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};
struct func_8038D8A8_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D8A8_G D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038D8A8[];

void func_8038D8A8(struct func_8038D8A8_Self *arg0, s32 arg1) {
    struct func_8038D8A8_Obj *a3;
    struct func_8038D8A8_Obj *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D8A8_Obj *)&D_801BC03C : (struct func_8038D8A8_Obj *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D8A8_Obj *)&D_801BC3D8 : (struct func_8038D8A8_Obj *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)&a3->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)D_8038D8A8;
        func_800058DC((s32)arg0, (void *)func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2)) {
        arg0->unk91 = 0;
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a2->unk30.g != 0 || a2->unk30.f4 == 2) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a2->unk30.g == 0 && a2->unk30.f4 != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
            return;
        }
    }
    if (a3->unk38.t != 0 && !a3->unk38.y && !(arg0->unk9A & 2)) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a3->unk38.t != 0 && a3->unk38.y && !(arg0->unk9A & 4)) {
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
        return;
    }
    if (a3->unk38.t == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D744((struct func_8038D744_Struct *)arg0, (struct func_8038D744_Struct *)a3, (struct func_8038D744_Struct *)a2);
    }
}
#undef D_801BBBF0
#undef D_8038D8A8
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D744_Struct

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DAAC_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DAAC_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DAAC(struct func_8038DAAC_StructA *arg0, struct func_8038DAAC_StructB *arg1)
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

