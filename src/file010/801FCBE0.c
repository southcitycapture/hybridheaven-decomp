#include "common.h"

extern f32 D_8001EAD0(s16);
extern f32 D_8021922C;
extern f32 func_8001EAD0();
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern s16 D_80089356;
extern s16 func_8001EF38(f32, f32);
extern s32 D_801BBC2C;
extern s32 func_80005C70(void);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern s32 func_80150584();
extern s32 func_801C80CC();
extern s32 func_801FD5BC(f32 arg0, f32 arg1, f32 arg2);
extern u16 D_801BBC20;
extern u8 D_801BBBF0[];
extern u8 D_801BBC00[];
extern u8 D_801BBC0D;
extern u8 D_801BBD6E[];
extern u8 D_80217150[];
extern u8 D_80217434[];
extern u8 D_802174D4[];
extern u8 D_802176C0[];
extern u8 func_80126A0C();
extern u8 func_80126EAC[];
extern void *func_801FDB90(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern void func_800023EC(void);
extern void func_80002BAC(s32);
extern void func_80005700();
extern void func_800058DC();
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_80126E88(s32);
extern void func_80129FB8(f32, f32, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern void func_80146088(void *, void *, s8 *);
extern void func_801FC830(f32, f32, s32, s32, s32);
extern void func_801FCE0C();
extern void func_801FCF14(u8 *arg0, void *arg1);
extern void func_801FCF40();
extern void func_801FD0F0();
extern void func_801FD884();
#define func_801FDCD0 func_801FDCD0__decl
extern void func_801FDCD0(void *, s32, s32, s32, s32, s32, s32, s8 *);
extern void func_801FDEDC();
extern void func_801FDF1C();
extern void func_801FE700();
extern void func_801FE840();
extern void func_801FEA74();
extern void func_8037BB4C(s16, s32, s32, s16);

/* hh-block asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FCBE0.s {"functions":["func_801FCBE0"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FCBE0.s")


struct func_801FCD4C_Struct {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x91 - 0x3C];
    u8 unk91;
    u8 pad2[0xB0 - 0x92];
    u8 unkB0;
};


void func_801FCD4C(struct func_801FCD4C_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  u8 *temp_v1;
  void (*temp_v1_2)(void *, s32);
  if ((arg0->unk38 == 0) && (func_80005C70() < 0x19))
  {
    func_80005700(arg0);
    return;
  }
  func_8001F74C(arg0);
  temp_v0 = arg0->unk91 * 4;
  ;
  if ((*((u8 **) (D_80217434 + temp_v0))) != 0)
  {
    arg0->unkB0 = *((*((u8 **) (D_80217434 + temp_v0))) + D_801BBC0D);
  }
  temp_v1_2 = *((void (**)(void *, s32)) (D_80217150 + temp_v0));
  if (temp_v1_2 != 0)
  {
    temp_v1_2(arg0, arg1);
  }
  func_800058DC(arg0, func_801FCE0C);
}


struct func_801FCE0C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x40 - 0x38];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x91 - 0x4C];
    u8 unk91;
    u8 pad3[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern s32 (*D_802171F0[])();

void func_801FCE0C(struct func_801FCE0C_Struct *arg0) {
    s32 (*fn)();

    fn = D_802171F0[arg0->unk91];
    if (fn != NULL) {
        if (fn() == 0) {
            if (arg0->unk36 == 0) {
                func_80005700(arg0);
                return;
            }
            func_800058DC(arg0, func_801FCF14);
            return;
        }
        if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
            if (arg0->unk36 == 0) {
                func_80005700(arg0);
            } else {
                func_800058DC(arg0, func_801FCF14);
            }
        }
        if (func_80150584() == 0) {
            arg0->unk94 = arg0->unk94 + arg0->unk40;
            arg0->unk98 = arg0->unk98 + arg0->unk44;
            arg0->unk9C = arg0->unk9C + arg0->unk48;
        }
    }
}



void func_801FCF14(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_801FCF40);
}


struct func_801FCF40_Struct {
    u8 pad0[0x18];
    s32 unk18;
    u8 pad1[4];
    s32 unk20;
    u8 pad2[0x3C - 0x24];
    u16 unk3C;
};


void func_801FCF40(struct func_801FCF40_Struct *arg0, s32 arg1) {
    if ((arg0->unk3C++ >= 0x1E) && (D_801BBD6E[3] == 0)) {
        arg0->unk18 = 0;
        arg0->unk20 = 0;
        func_800058DC(arg0, func_80126EAC);
    }
}

/* hh-block asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FCF98.s {"functions":["func_801FCF98"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FCF98.s")



void func_801FD0F0(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


struct func_801FD110_Inner {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_801FD110_Struct {
    u8 pad0[0x24];
    struct func_801FD110_Inner *unk24;
};


void func_801FD110(struct func_801FD110_Struct *volatile arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *arg1;
    temp_v0 = arg0->unk24->unk30;
    func_8013E5C4(temp_a0, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80126EAC);
}


struct func_801FD168_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    u8 unk90;
    u8 unk91;
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
    s16 unkA6;
    s32 unkA8;
    u8 unkAC;
};

struct func_801FD168_Src {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801FD168_Src D_802172A4;
void *func_8012C4D0(s32, struct func_801FD168_Src, s32);

void *func_801FD168(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6, s16 arg7, s16 arg8, u8 arg9, u8 arg10, s32 arg11) {
    struct func_801FD168_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802172A4, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = 2;
        temp_v0->unk91 = arg9;
        temp_v0->unk94 = arg0;
        temp_v0->unk98 = arg1;
        temp_v0->unk9C = arg2;
        temp_v0->unk40 = arg3;
        temp_v0->unk44 = arg4;
        temp_v0->unk48 = arg5;
        temp_v0->unkA0 = arg6;
        temp_v0->unkA2 = arg7;
        temp_v0->unkA4 = arg8;
        temp_v0->unk3C = 0;
        temp_v0->unk92 = 0;
        temp_v0->unkA6 = 0;
        temp_v0->unkAC = arg10;
        temp_v0->unkA8 = arg11;
        return temp_v0;
    }
    return NULL;
}



struct func_801FD260_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x72 - 0x30];
    u16 unk72;
    u8 pad2[0x8C - 0x74];
    void (*unk8C)(void);
};

void func_801FD260(struct func_801FD260_Struct *arg0, struct func_801FD260_Struct *arg1) {
    void (*temp)(void);

    temp = func_801FD0F0;
    arg0->unk2C = arg0->unk2C | 0x8000;
    arg0->unk72 = arg1->unk72;
    arg0->unk8C = temp;
}


s16 func_801FD284(s16 arg0, s16 arg1, f32 arg2) {
    s16 d;

    arg0 &= 0x1FFF;
    arg1 &= 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            return (s16)(s32)((f32)arg0 + (f32)d * arg2) & 0x1FFF;
        }
        return (s16)(s32)((f32)arg0 - (f32)(0x2000 - d) * arg2) & 0x1FFF;
    }
    d = arg0 - arg1;
    if (d < 0x1000) {
        return (s16)(s32)((f32)arg0 - (f32)d * arg2) & 0x1FFF;
    }
    return (s16)(s32)((f32)arg0 + (f32)(0x2000 - d) * arg2) & 0x1FFF;
}


s16 func_801FD3EC(s16 arg0, s16 arg1, s16 arg2) {
    s16 d;
    s16 r;

    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            r = (s16)(arg0 + arg2) & 0x1FFF;
        } else {
            r = (s16)(arg0 - arg2) & 0x1FFF;
        }
        if (d < arg2) {
            r = arg1;
        }
    } else {
        d = arg0 - arg1;
        if (d < 0x1000) {
            r = (s16)(arg0 - arg2) & 0x1FFF;
        } else {
            r = (s16)(arg0 + arg2) & 0x1FFF;
        }
        if (d < arg2) {
            r = arg1;
        }
    }
    return r;
}


s32 func_801FD4F4(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_a2;

    temp_a2 = arg2;
    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        temp_v0 = arg1 - arg0;
        if (temp_v0 < 0x1000) {
            if (temp_a2 < temp_v0) {
                goto block_end;
            }
            return 1;
        }
        if (temp_v0 < (0x2000 - temp_a2)) {
            goto block_end;
        }
        return 1;
    }
    temp_v0 = arg0 - arg1;
    if (temp_v0 < 0x1000) {
        if (temp_a2 < temp_v0) {
            goto block_end;
        }
        return 1;
    }
    if (temp_v0 < (0x2000 - temp_a2)) {
        goto block_end;
    }
    return 1;
block_end:
    return 0;
}


s32 func_801FD5BC(f32 arg0, f32 arg1, f32 arg2) {
    if ((arg0 < -1000.0f) || (arg0 > 1000.0f) || (arg1 < -1000.0f) || (arg1 > 1000.0f) || (arg2 < -1000.0f) || (arg2 > 1000.0f)) {
        return 1;
    }
    return 0;
}



s32 func_801FD644(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s32 arg5, s32 arg6, s16 arg7) {
    if (func_801C80CC(arg0, arg1) != 0) {
        func_8037BB4C(arg4, arg5, arg6, arg7);
        return 1;
    }
    return 0;
}



struct func_801FD68C_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
};

void *func_801FD68C(struct func_801FCE0C_Struct *arg0) {
    u16 t;
    void *r;
    struct func_801FD68C_Struct *s1;

    t = *(u16 *)((u8 *)arg0 + 0xA2);
    s1 = ((struct func_801FD68C_Struct **)D_80217434)[arg0->unk91];
    r = func_801FDB90(s1->unkC * D_8001EAD0((s16)t) + func_8001EB64((s16)t) * s1->unk4 + arg0->unk94, arg0->unk98 + s1->unk8, s1->unkC * func_8001EB64((s16)t) - D_8001EAD0((s16)t) * s1->unk4 + arg0->unk9C, s1->unk10);
    if (r != 0) {
        return r;
    }
    return 0;
}



f32 func_801FD780(u16 arg0) {
    return *(f32 *)(D_802174D4 + ((arg0 * 0xC) + (D_801BBC0D * 4)));
}


struct func_801FD7B4_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
    u8 pad2[0xA0 - 0x9C];
    f32 unkA0;
};


void func_801FD7B4(struct func_801FD7B4_Struct *arg0, s32 arg1) {
    f32 zero = 0.0f;

    func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, zero, zero, zero, zero, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xB4, -4, D_8021922C, 0x14, 0);
    func_801FC830(arg0->unk90, arg0->unk94, arg0->unk98, 0x43160000, 0x3A8);
    arg0->unk3C = 0;
    arg0->unkA0 = 0.0f;
    func_800058DC(arg0, func_801FD884);
}


struct func_801FD884_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
};

void func_801FD884(struct func_801FD884_Struct *arg0, s32 arg1) {
    volatile f32 pad[3];
    f32 sp28[1];
    f32 sp24[1];
    f32 two;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv1;

    two = 2.0f;
    arg0->unk90 += (temp_ft5 = arg0->unk40);
    sp28[0] = arg0->unk44;
    arg0->unk94 += sp28[0];
    sp24[0] = arg0->unk48;
    arg0->unk98 += sp24[0];
    arg0->unkA0 = arg0->unkA0 + arg0->unk9C;
    if ((arg0->unkA0 >= 150.0f) || (temp_fv0 = arg0->unk90, temp_fv1 = arg0->unk94, temp_ft4 = arg0->unk98, (func_80108590(temp_fv0 - (temp_ft5 * two), temp_fv1 - (sp28[0] * two), temp_ft4 - (sp24[0] * two), temp_fv0 - temp_ft5, temp_fv1 - sp28[0], temp_ft4 - sp24[0]) != 0))) {
        func_801FDB3C((s32)arg0);
    }
}

/* hh-block asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FD97C.s {"functions":["func_801FD97C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FD97C.s")



s32 func_801FDB3C(s32 arg0)
{
  u8 *var_v0;
 var_v0 = D_801BBBF0; do {
    if (arg0 == (*((s32 *) (var_v0 + 0x20C))))
    {
      *((s32 *) (var_v0 + 0x20C)) = 0;
      func_80005700();
      return 1;
    }
    var_v0 += 4;
  }
  while (((s32) var_v0) != ((s32) D_801BBC00));
  return 0;
}

struct func_801FDB90_Struct {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
    u8 pad2[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad3[0xA4 - 0x9C];
    f32 unkA4;
    u8 pad4[4];
    f32 unkAC;
};

void *func_801FDB90(f32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
  u8 *e;
  u8 *p;
  struct func_801FDB90_Struct *o;
  f32 dx;
  f32 dy;
  f32 dz;
  s16 a;
 p = D_801BBBF0; e = D_801BBC00;
  do
  {
    o = *((struct func_801FDB90_Struct **) (p + 0x20C));
    if (o != 0)
    {
      dx = o->unk90 - arg0;
      dy = o->unk94 - arg1;
      dz = o->unk98 - arg2;
      if (((f64) func_8002FC20(((dx * dx) + (dy * dy)) + (dz * dz))) <= (((f64) arg3) + 12.0))
      {
        a = func_8001EF38(o->unk40, o->unk48);
        if (func_801FD4F4(a, func_8001EF38(arg0 - o->unkA4, arg2 - o->unkAC), 0x555) != 0)
        {
          return *((void **) (p + 0x20C));
        }
      }
    }
    p += 4;
  }
  while (p != e);
  return 0;
}

#undef func_801FDCD0
#define D_80172578 D_80172578__func_801FDCD0
struct func_801FDCD0_Struct {
    s16 u24, u26, u28, u2A;
    s8 u2C; u8 u2D, u2E, u2F, u30, u31, u32, u33;
    s16 u34, u36; u8 pad38[4]; u16 u3C; u8 pad3E[2]; s32 u40;
    u8 pad44[8];
    s16 u4C, u4E, u50, u52, u54, u56;
    u8 pad58[8];
};
extern u8 **D_80172578;

void func_801FDCD0(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s8 *arg7) {
    struct func_801FDCD0_Struct s;
    s32 pad[2];

    s.u24 = arg1;
    s.u26 = arg2;
    s.u54 = s.u28 = s.u4C = 0x20;
    s.u4E = 0x40;
    s.u56 = s.u2A = 0x40;
    s.u2C = arg3;
    s.u2D = arg4;
    s.u2E = arg5;
    s.u2F = 0xFF;
    s.u30 = s.u31 = s.u32 = 0xFF;
    s.u33 = 0xFF;
    s.u34 = 0x66;
    s.u36 = 0;
    s.u3C = **(u16 **)D_80172578;
    s.u40 = ((s32 *)((void **)D_80172578)[1])[arg6];
    s.u52 = 0;
    s.u50 = 0;
    *(void **)(D_802176C0 + 0xC) = &s;
    func_80146088(arg0, D_802176C0, arg7);
}
#undef D_80172578
#define func_801FDCD0 func_801FDCD0__decl



struct func_801FDDC8_Struct {
    s16 s1C; s16 s1E; s16 s20; s16 s22; u8 b24; u8 b25; u8 b26; u8 b27;
    u8 pad[4]; s16 s2C; u16 s2E; u8 b30; u8 b31; u8 b32; u8 b33; u8 tail[0x24];
};

void func_801FDDC8(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)
void *a0; s8 *a1; s16 a2; s16 a3; s16 a4; s16 a5; u8 a6; u8 a7; u8 a8; u8 a9; u16 a10; u8 a11; u8 a12; u8 a13; u8 a14;
{
    struct func_801FDDC8_Struct s;
    s.s1C = a2;
    s.s1E = a3;
    s.s20 = a4;
    s.s22 = a5;
    s.b24 = a6;
    s.b25 = a7;
    s.b26 = a8;
    s.b27 = a9;
    s.b30 = a11;
    s.b31 = a12;
    s.b32 = a13, s.b33 = a14;
    s.s2C = 0xB;
    s.s2E = a10;
    *(void **)(D_802176C0 + 0xC) = &s;
    func_80146088(a0, D_802176C0, a1);
}


struct func_801FDE78_Struct {
    u8 pad0[0xB0];
    u16 unkB0;
};


void func_801FDE78(struct func_801FDE78_Struct *arg0, void *arg1) {
    s32 var_s0;

    arg0->unkB0 = 0;
    var_s0 = 0;
    do {
        func_80002BAC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
    func_80020718(0xF);
    func_800058DC(arg0, func_801FDEDC);
}


struct func_801FDEDC_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
};


void func_801FDEDC(struct func_801FDEDC_Struct *arg0, s32 arg1) {
    if (arg0->unkB0++ >= 0x1F) {
        func_800058DC(arg0, func_801FDF1C);
    }
}

/* hh-block asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FDF1C.s {"functions":["func_801FDF1C"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FDF1C.s")

struct func_801FE250_Sub {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
};
struct func_801FE250_Obj {
    u8 pad0[0x30];
    struct func_801FE250_Sub *unk30;
};
struct func_801FE250_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};
void func_801FE250(struct func_801FE250_Struct *arg0, struct func_801FE250_Obj **arg1);

struct func_801FE0A4_Inner { u8 pad[0xB]; u8 unkB; };
struct func_801FE0A4_Mid { u8 pad[0x30]; struct func_801FE0A4_Inner *unk30; };
struct func_801FE0A4_Obj {
    u8 pad[0xAA];
    u8 unkAA;
    u8 unkAB;
    u8 pad2[4];
    s16 unkB0;
};

void func_801FE0A4(struct func_801FE0A4_Obj *arg0, struct func_801FE0A4_Mid **arg1) {
    if (arg0->unkB0 == 0x34) {
        func_80126E88(0x127);
        func_80126E88(0x125);
    }
    if ((arg0->unkB0 >= 0x35) && (arg0->unkAA == 0)) {
        arg0->unkAA = func_80126A0C(arg0, 0x128, 0);
    }
    if (arg0->unkB0 == 0x32) {
        func_80020718(0x82);
    }
    if (arg1[arg0->unkAB + 1]->unk30->unkB == 0xFF) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_801FE250);
        return;
    }
    arg1[arg0->unkAB + 1]->unk30->unkB = (u32)(func_8001EAD0((s16)((arg0->unkB0++ << 6) / 4)) * 255.0f);
}

struct func_801FE5F0_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[0xB0 - 0xAC];
    s16 unkB0;
};
void func_801FE5F0(struct func_801FE5F0_Struct *arg0, s32 arg1);


void func_801FE250(struct func_801FE250_Struct *arg0, struct func_801FE250_Obj **arg1) {
    s8 sp3F;

    sp3F = 0;
    if (arg0->unkB0++ > 0x20) {
        func_801FDCD0(arg0, 0x20, 0x5A, 0xFF, 0xFF, 0xFF, 8, &sp3F);
        func_801FDCD0(arg0, 0x40, 0x5A, 0xFF, 0xFF, 0xFF, 9, &sp3F);
        func_801FDCD0(arg0, 0x60, 0x5A, 0xFF, 0xFF, 0xFF, 10, &sp3F);
        func_801FDCD0(arg0, 0x80, 0x5A, 0xFF, 0xFF, 0xFF, 11, &sp3F);
        func_801FDCD0(arg0, 0xA0, 0x5A, 0xFF, 0xFF, 0xFF, 12, &sp3F);
        func_801FDCD0(arg0, 0xC0, 0x5A, 0xFF, 0xFF, 0xFF, 13, &sp3F);
        func_801FDCD0(arg0, 0xE0, 0x5A, 0xFF, 0xFF, 0xFF, 14, &sp3F);
        func_801FDCD0(arg0, 0x100, 0x5A, 0xFF, 0xFF, 0xFF, 15, &sp3F);
        func_801FDCD0(arg0, 0x20, 0x5A, 0xFF, 0xFF, 0xFF, 0, &sp3F);
        func_801FDCD0(arg0, 0x40, 0x5A, 0xFF, 0xFF, 0xFF, 1, &sp3F);
        func_801FDCD0(arg0, 0x60, 0x5A, 0xFF, 0xFF, 0xFF, 2, &sp3F);
        func_801FDCD0(arg0, 0x80, 0x5A, 0xFF, 0xFF, 0xFF, 3, &sp3F);
        func_801FDCD0(arg0, 0xA0, 0x5A, 0xFF, 0xFF, 0xFF, 4, &sp3F);
        func_801FDCD0(arg0, 0xC0, 0x5A, 0xFF, 0xFF, 0xFF, 5, &sp3F);
        func_801FDCD0(arg0, 0xE0, 0x5A, 0xFF, 0xFF, 0xFF, 6, &sp3F);
        func_801FDCD0(arg0, 0x100, 0x5A, 0xFF, 0xFF, 0xFF, 7, &sp3F);
        func_80006214(arg0);
        arg1[arg0->unkAB]->unk30->unk4 = 0x140;
        arg1[arg0->unkAB]->unk30->unk6 = 0x100;
        arg0->unkB0 = 0xF0;
        func_800058DC(arg0, func_801FE5F0);
    }
}




struct func_801FE5F0_Sub {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB;
    u8 unkC;
    u8 unkD;
    u8 unkE;
};

struct func_801FE5F0_Obj {
    u8 pad0[0x30];
    struct func_801FE5F0_Sub *unk30;
};

void func_801FE5F0(struct func_801FE5F0_Struct *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    s32 temp_v1;
    s16 temp_v0_3;

    var_a2 = 2;
    var_a3 = 2;
    do {
        temp_v1 = var_a3 * 4;
        temp_v0 = ((u8 *) arg0)[0xB1];
        var_a2 = (var_a2 + 1) & 0xFF;
        var_a3 = var_a2;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkA = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk9 = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unk8 = temp_v0;
        temp_v0 = ((u8 *) arg0)[0xB1];
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkE = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkD = temp_v0;
        (*(struct func_801FE5F0_Obj **)(arg1 + (arg0->unkAB * 4) + temp_v1))->unk30->unkC = temp_v0;
    } while (var_a2 < 0xA);
    temp_v0_3 = arg0->unkB0;
    if (temp_v0_3 == 0) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_801FE700, var_a2);
        return;
    }
    arg0->unkB0 = temp_v0_3 - 4;
}

struct func_801FE790_Struct {
    u8 pad[0xAB];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
};
struct func_801FE790_StructObj {
    u8 pad[0x30];
    s16 *unk30;
};
void func_801FE790(struct func_801FE790_Struct *arg0, struct func_801FE790_StructObj **arg1);

struct func_801FE700_Struct {
    u8 pad0[0xAB];
    u8 unkAB;
    u8 pad1[4];
    s16 unkB0;
};
struct func_801FE700_Inner {
    u8 pad0[0x30];
    s16 *unk30;
};

void func_801FE700(struct func_801FE700_Struct *arg0, u8 *arg1) {
    u8 i;
    s16 *p;

    if (arg0->unkB0++ < 6) {
        i = 2;
        do {
            p = (*(struct func_801FE700_Inner **)((s32)arg1 + arg0->unkAB * 4 + i * 4))->unk30;
            i++;
            p[1] += 1;
        } while (i < 10);
        return;
    }
    arg0->unkB0 = 0;
    func_800058DC(arg0, func_801FE790);
}



void func_801FE790(struct func_801FE790_Struct *arg0, struct func_801FE790_StructObj **arg1) {
    s16 *temp;
    s16 old;
    s32 index;
    s32 i;

    if (arg0->unkB0++ < 8) {
        i = 2;
        index = 2;
        if ((s32)D_801BBC20 % 3 == 0) {
            do {
                i = (i + 1) & 0xFF;
                temp = (arg1 + arg0->unkAB)[index]->unk30;
                index = i;
                *temp += 1;
            } while (i < 10);
        }
    } else {
        arg0->unkB0 = 0xF8;
        func_800058DC(arg0, func_801FE840);
    }
}

/* hh-block asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FE840.s {"functions":["func_801FE840"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/_mrg_keep_text_func_801FE840.s")


extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);

typedef struct func_801FEA04_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xB0 - 0x91];
    s16 unkB0;
} func_801FEA04_Struct;

void func_801FEA04(func_801FEA04_Struct *arg0, s32 arg1)
{
  int new_var;
  s16 temp_v0;
  u32 flag;
  temp_v0 = arg0->unkB0;
  flag = temp_v0 >= 0x1F;
  arg0->unkB0 = temp_v0 + 1;
  new_var = 0x0C000C00;
  temp_v0 = 0;
  if (flag != temp_v0)
  {
    func_80002364(new_var, 0xA, 3, 0);
    arg0->unkB0 = 0;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_801FEA74);
  }
}



struct func_801FEA74_Struct {
    u8 pad[0xB0];
    s16 unkB0;
};

void func_801FEA74(struct func_801FEA74_Struct *arg0, s32 arg1) {
    if (arg0->unkB0++ >= 0x33) {
        func_80020744(0xA);
        D_80089356 = 0;
        func_800023EC();
        func_8012FE50(0xE, 0x73, 1, 1, 0);
    }
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_801FCBE0[] = {
    0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5, 0xD5, 0xA5, 0xE9, 0xA5,
    0xB0, 0xA3, 0xB1, 0xBB, 0xC8, 0xCD, 0xD1, 0x20, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A, 0x20,
    0x25, 0x64, 0x0A, 0x00, 0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5,
    0xD5, 0xA5, 0xE9, 0xA5, 0xB0, 0xA3, 0xB2, 0xBB, 0xC8, 0xCD, 0xD1, 0x20, 0x20, 0xC8, 0xD6, 0xB9,
    0xE6, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79,
    0x20, 0x3A, 0x20, 0xA3, 0xB2, 0xC5, 0xD9, 0xA4, 0xC8, 0xBD, 0xD0, 0xA4, 0xB5, 0xA4, 0xCA, 0xA4,
    0xA4, 0xA5, 0xD5, 0xA5, 0xE9, 0xA5, 0xB0, 0xA4, 0xAC, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0xA4,
    0xB5, 0xA4, 0xEC, 0xA4, 0xC6, 0xA4, 0xA4, 0xA4, 0xEB, 0xA4, 0xCE, 0xA4, 0xC7, 0xA5, 0xC7, 0xA5,
    0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC8, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xB9, 0x20,
    0x20, 0x5B, 0x52, 0x6F, 0x6D, 0x4E, 0x6F, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x5D, 0x0A, 0x00, 0x00,
    0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5, 0xDE, 0xA5, 0xC3, 0xA5,
    0xD7, 0xC5, 0xA8, 0xBD, 0xE9, 0xB4, 0xFC, 0xB2, 0xBD, 0x0A, 0x00, 0x00, 0x6D, 0x61, 0x70, 0x65,
    0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xB6, 0xF5, 0xA4, 0xAD, 0xA3, 0xC7, 0xA3, 0xCF, 0xA3,
    0xC2, 0xA3, 0xCA, 0xA4, 0xAC, 0x25, 0x64, 0xA4, 0xE8, 0xA4, 0xEA, 0xBE, 0xAF, 0xA4, 0xCA, 0xA4,
    0xA4, 0xA4, 0xCE, 0xA4, 0xC7, 0xA5, 0xBB, 0xA5, 0xC3, 0xA5, 0xC8, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4,
    0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79,
    0x20, 0x3A, 0x20, 0xA5, 0xDE, 0xA5, 0xC3, 0xA5, 0xD7, 0xC5, 0xA8, 0xA4, 0xAC, 0xCC, 0xB5, 0xB8,
    0xFA, 0xA4, 0xCA, 0xBA, 0xC2, 0xC9, 0xB8, 0xC3, 0xCD, 0xA4, 0xF2, 0xBC, 0xE8, 0xA4, 0xC3, 0xA4,
    0xC6, 0xA4, 0xA4, 0xA4, 0xEB, 0xA4, 0xCE, 0xA4, 0xC7, 0xBE, 0xC3, 0xB5, 0xEE, 0xA4, 0xB7, 0xA4,
    0xDE, 0xA4, 0xB9, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79,
    0x20, 0x3A, 0x20, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xAF, 0xA5, 0xC1, 0xA5, 0xE3, 0xC3,
    0xE6, 0xA4, 0xCA, 0xA4, 0xCE, 0xA4, 0xC7, 0xA5, 0xC7, 0xA5, 0xB9, 0xA5, 0xC8, 0xA5, 0xE9, 0xA5,
    0xAF, 0xA5, 0xC8, 0xA4, 0xB7, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x20, 0x20, 0x5B, 0x52, 0x6F,
    0x6D, 0x4E, 0x6F, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x5D, 0x0A, 0x00, 0x00, 0x6D, 0x61, 0x70, 0x65,
    0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5, 0xD5, 0xA5, 0xE9, 0xA5, 0xB0, 0xA3, 0xB1, 0xBB,
    0xC8, 0xCD, 0xD1, 0x20, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A, 0x20, 0x25, 0x64, 0x0A, 0x00,
    0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5, 0xD5, 0xA5, 0xE9, 0xA5,
    0xB0, 0xA3, 0xB2, 0xBB, 0xC8, 0xCD, 0xD1, 0x20, 0x20, 0xC8, 0xD6, 0xB9, 0xE6, 0x20, 0x3A, 0x20,
    0x25, 0x64, 0x0A, 0x00, 0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xC6,
    0xC3, 0xBC, 0xEC, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xC6, 0xA5, 0xE0, 0xA3, 0xC9, 0xA3, 0xC4, 0xA4,
    0xAC, 0xBB, 0xD8, 0xC4, 0xEA, 0xA4, 0xB5, 0xA4, 0xEC, 0xA4, 0xDE, 0xA4, 0xB7, 0xA4, 0xBF, 0x20,
    0x20, 0x49, 0x44, 0x20, 0x3A, 0x20, 0x25, 0x78, 0x68, 0x0A, 0x00, 0x00, 0x6D, 0x61, 0x70, 0x65,
    0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xBD, 0xD0, 0xB8, 0xBD, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5,
    0xC6, 0xA5, 0xE0, 0xA5, 0xEC, 0xA5, 0xD9, 0xA5, 0xEB, 0xA4, 0xAC, 0xA5, 0xB2, 0xA1, 0xBC, 0xA5,
    0xE0, 0xA5, 0xEC, 0xA5, 0xD9, 0xA5, 0xEB, 0xA4, 0xE8, 0xA4, 0xEA, 0xBE, 0xAE, 0xA4, 0xB5, 0xA4,
    0xA4, 0xA4, 0xCE, 0xA4, 0xC7, 0xA5, 0xA2, 0xA5, 0xA4, 0xA5, 0xC6, 0xA5, 0xE0, 0xA4, 0xF2, 0xBD,
    0xD0, 0xB8, 0xBD, 0xA4, 0xB5, 0xA4, 0xBB, 0xA4, 0xDE, 0xA4, 0xBB, 0xA4, 0xF3, 0x0A, 0x00, 0x00,
    0x6D, 0x61, 0x70, 0x65, 0x6E, 0x65, 0x6D, 0x79, 0x20, 0x3A, 0x20, 0xA5, 0xD5, 0xA5, 0xE9, 0xA5,
    0xB0, 0xA3, 0xCF, 0xA3, 0xCE, 0x0A, 0x00, 0x00, 0xA1, 0xE3, 0xB6, 0xAF, 0xC0, 0xA9, 0xC4, 0xE4,
    0xBB, 0xDF, 0xA5, 0xEA, 0xA5, 0xE2, 0xA5, 0xB3, 0xA5, 0xF3, 0xC8, 0xAF, 0xBC, 0xCD, 0xA1, 0xE4,
    0x0A, 0x00, 0x00, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xC4, 0xE4, 0xBB, 0xDF, 0xA5, 0xEA, 0xA5, 0xE2,
    0xA5, 0xB3, 0xA5, 0xF3, 0xBE, 0xC3, 0xB5, 0xEE, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xAE, 0xB8, 0xF9,
    0x0A, 0x00, 0x00, 0x00, 0xBC, 0xBA, 0xC7, 0xD4, 0x0A, 0x00, 0x00, 0x00, 0x3C, 0xF5, 0xC2, 0x8F,
};
