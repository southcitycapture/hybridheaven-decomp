#define func_801D4390 func_801D4390__merge_frozen
#include "common.h"

#define func_801D33A4 func_801D33A4__func_801D3300

extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);
extern s32 D_801DB374;
extern s32 D_801DB378;
extern s32 D_801DB37C;
extern s32 D_801DB380;
extern s32 D_801DB384;
extern s32 D_801DB388;
extern s32 D_801DB38C;
extern s32 D_801E14A0;
extern void func_801D33A4();

void func_801D3300(s32 arg0, s32 arg1) {
    D_801E14A0 = arg0;
    D_801DB374 = 0;
    D_801DB378 = 0;
    D_801DB37C = 1;
    D_801DB384 = 0;
    D_801DB388 = 0;
    D_801DB38C = 0;
    if (D_801DB380 != 0) {
        func_8013B570(arg0, 0x2F, 0, 4, &func_801D33A4);
        return;
    }
    func_8013B570(arg0, 0x148, 0, 4, &func_801D33A4);
}
#undef func_801D33A4

extern u8 D_801D33EC[];
struct func_801D33A4_Struct { u8 pad[0x24]; s32 unk24; };
extern u8 D_801D33A4[];
extern void func_800058DC(void *, void *);

void func_801D33A4(struct func_801D33A4_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, D_801D33EC);
        return;
    }
    func_800058DC(arg0, D_801D33A4);
}

#define func_801D3FD8 func_801D3FD8__func_801D33EC
#define func_801D4068 func_801D4068__func_801D33EC

extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern u8 D_801BC025[];
struct func_801D3718_Struct;
struct func_801D3788_StructObject;
struct func_801D4068_StructA;
extern struct func_801D3718_Struct D_801E14B8;
extern u8 D_801E14A8;
extern struct func_801D3788_StructObject *D_8008DA88[];
void func_80006214();
void func_801D3FD8(s32 arg0);
void func_801D4068(struct func_801D4068_StructA *arg0);

typedef struct { s32 unk0; s32 unk4; f32 unk8; } func_801D33EC_Struct0;
extern s32 func_80011140(void *, void *, func_801D33EC_Struct0, u32);
extern void func_8013A28C(void *, func_801D33EC_Struct0);
struct func_801D33EC_Struct1 { u8 pad[0x5C]; func_801D33EC_Struct0 unk5C; };
struct func_801D33EC_Struct3 { u8 pad[0x76]; u8 unk76; };
struct func_801D33EC_Struct2 { u8 pad[0x5C]; struct func_801D33EC_Struct3 *unk5C; };
struct func_801D33EC_Struct5 { u8 pad[0x2C]; struct func_801D33EC_Struct1 *unk2C; };
struct func_801D33EC_Struct4 { u8 pad[4]; struct func_801D33EC_Struct5 *unk4; };

void func_801D33EC(struct func_801D33EC_Struct2 *arg0, struct func_801D33EC_Struct4 *arg1) {
    func_801D33EC_Struct0 *p;
    struct func_801D33EC_Struct3 *q;
    if (D_801DB388 == 0) {
        if (func_801CC540() != 0) {
            func_800058DC(arg0, D_801D33EC);
            return;
        }
        if (D_801DB374 != 0) {
            func_80006214((s32)arg0);
            func_8013A28C(D_8008DA88, *(func_801D33EC_Struct0 *)D_801DB374);
            q = arg0->unk5C;
            q->unk76 = 1;
            D_801DB374 = 0;
        }
        p = (func_801D33EC_Struct0 *)D_801DB378;
        if (p != 0) {
            if (func_80011140(arg1, arg0->unk5C, *p, p->unk8) != 0) {
                D_801DB378 = 0;
            }
        } else {
            if (func_80010550(arg1, arg0->unk5C) != 0) {
                D_801DB37C = 1;
            } else {
                D_801DB37C = 0;
            }
            *(func_801D33EC_Struct0 *)&D_801E14B8 = arg1->unk4->unk2C->unk5C;
            *(func_801D33EC_Struct0 *)&D_801E14A8 = *(func_801D33EC_Struct0 *)(D_801BC025 + 3);
        }
        if (D_801DB384 != 0) {
            func_801D3FD8((s32)arg0);
        }
        if (D_801DB38C != 0) {
            func_801D4068((struct func_801D4068_StructA *)arg0);
        }
    }
}
#undef func_801D3FD8
#undef func_801D4068



s32 func_801D3620(void) {
    return D_801DB378 != 0;
}



s32 func_801D3630(void) {
    if (D_801DB378 != 0) {
        return 0;
    }
    if (D_801DB374 != 0) {
        return 0;
    }
    return D_801DB37C;
}


u8 *func_801D3670(void) {
    return &D_801E14A8;
}



void func_801D367C(s32 arg0) {
    D_801DB380 = arg0;
}

#define func_80006214 func_80006214__func_801D3688

void func_80006214(s32 arg0);
void func_801C3370(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void func_801D3688(s32 arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, s32 arg5, s32 arg6) {
    if (arg0 != 0) {
        func_80006214(D_801E14A0);
        func_801C3370(D_801E14A0, arg1, arg2, arg3, (s32) arg4, 0, arg5, arg6);
        D_801DB384 = 1;
        return;
    }
    D_801DB384 = 0;
}
#undef func_80006214



s32 func_801D3708(void) {
    return D_801DB384 == 0;
}


struct func_801D3718_Struct {
    s32 unk0;
    u16 unk4;
};


s32 func_801D3718(s32 arg0, u16 arg1) {
    if (arg0 != D_801E14B8.unk0) {
        return 0;
    }
    return D_801E14B8.unk4 == arg1;
}

#define func_801D4008 func_801D4008__func_801D3750

void func_801D4008(s32, s32);

void func_801D3750(s32 arg0) {
    if (arg0 != 0) {
        func_801D4008(D_801E14A0, arg0);
    }
    D_801DB38C = arg0;
}
#undef func_801D4008

#define D_8008DA88 D_8008DA88__func_801D3788

typedef struct func_801D3788_StructState {
    u8 pad[0x24];
    s32 flags;
    u8 pad28[8];
    s32 address;
    u8 pad34[0x14];
    u8 r, g, b, a;
} func_801D3788_StructState;
typedef struct func_801D3788_StructObject {
    u8 pad[0x2C];
    func_801D3788_StructState *state;
} func_801D3788_StructObject;
typedef struct func_801D3788_StructList {
    u8 pad[4];
    s32 entries;
    u8 pad8[4];
    u16 count;
} func_801D3788_StructList;
typedef struct func_801D3788_StructRoot {
    u8 pad[0x5C];
    func_801D3788_StructList *list;
} func_801D3788_StructRoot;
extern func_801D3788_StructObject *D_8008DA88[];
extern u8 D_801D9360[];
extern u8 D_801D93B8[];
extern s32 D_801DB390;
extern f32 D_801E14C8[3];

void func_801D3788(f32 arg0, f32 arg1, f32 arg2)
{
  s32 *entry;
  s32 offset;
  func_801D3788_StructObject **object;
  func_801D3788_StructList *list;
  func_801D3788_StructState *state;
  D_801E14C8[0] = arg0;
  D_801E14C8[1] = arg1;
  D_801E14C8[2] = arg2;
 func_80006214(D_801E14A0); list = ((func_801D3788_StructRoot *) D_801E14A0)->list; offset = 4; object = (func_801D3788_StructObject **) list->entries; entry = ((s32 *) object) + 1; if (((s32) list->count) >= 2) { do { object = (func_801D3788_StructObject **) (((u8 *) D_8008DA88) + offset); if ((*entry) < 0) { } else { state = (*object)->state; state->flags = state->flags | 0x100; state = (*object)->state; if ((state->flags & 0xFF) == 0x15) {
          state->address = ((s32) D_801D9360) | 0x40000000;
        }
        else
        {
          state->address = ((s32) D_801D93B8) | 0x40000000;
        }
        (*object)->state->r = 0;
        (*object)->state->g = 0;
        (*object)->state->b = 0;
        (*object)->state->a = 0xFF;
      }
      offset += 4;
      entry++;
    }
    while (offset < (list->count * 4));
  }
  D_801DB390 = 0;
}
#undef D_8008DA88

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/D_801DD4D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D38B4.s")


extern s32 func_801C354C(s32);

void func_801D3FD8(s32 arg0) {
    func_80006214();
    D_801DB384 = func_801C354C(arg0) == 0;
}



struct func_801D4008_B { u8 pad[8]; f32 f; };
struct func_801D4008_A { u8 pad[0x2C]; struct func_801D4008_B *p; };
struct func_801D4008_S { u8 pad[0x24]; struct func_801D4008_A *p; };
extern f32 D_801DB3F4;
extern f32 D_801DB3F8;
extern f32 D_801DB3FC;
extern f32 D_801DB400;

void func_801D4008(s32 arg0) {
    func_80006214(arg0);
    D_801DB3F4 = ((struct func_801D4008_S *)arg0)->p->p->f;
    D_801DB3F8 = 0.0f;
    D_801DB3FC = 0.150000006f;
    D_801DB400 = 0.0149999997f;
}

extern void D_801D4008(s32, s32);

struct func_801D4068_Struct2 { u8 pad[0x2C]; f32 unk2C_; };
struct func_801D4068_Struct1 { u8 pad[0x24]; struct func_801D4068_Struct2 *unk24; };
struct func_801D4068_Struct3 { u8 pad[8]; f32 unk8; };
struct func_801D4068_StructB { u8 pad[0x2C]; struct func_801D4068_Struct3 *unk2C; };
struct func_801D4068_StructA { u8 pad[0x24]; struct func_801D4068_StructB *unk24; };

void func_801D4068(struct func_801D4068_StructA *arg0) {
    f32 t;

    t = D_801DB3F8;
    D_801DB3F8 += D_801DB3FC;
    D_801DB3FC -= D_801DB400;
    if ((t * D_801DB3F8) < 0.0f) {
        if (D_801DB3F8 < 0.0f) {
            D_801DB3FC = (-0.150000006f);
            D_801DB400 = (-0.0149999997f);
        } else {
            D_801DB3FC = 0.150000006f;
            D_801DB400 = 0.0149999997f;
        }
    }
    func_80006214((s32)arg0);
    arg0->unk24->unk2C->unk8 = D_801DB3F8 + D_801DB3F4;
}


extern f32 func_8002FC20(f32);
extern void func_801D4390(void *, f32 *, f32 *, f32 *);

struct func_801D4148_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 padC[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad1C[4];
    f32 unk20;
    f32 unk24;
    f32 unk28;
    u8 pad2C[4];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_801D4148_Struct1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u8 pad12[0x26];
};

void func_801D4148(f32 *arg0, f32 *arg1, f32 *arg2, u16 *arg3, u16 *arg4, u16 *arg5,
                   f32 *arg6, f32 *arg7, f32 *arg8, struct func_801D4148_Struct *arg9)
{
    struct func_801D4148_Struct1 loc;

    loc.unkC = *arg3;
    loc.unkE = *arg4;
    loc.unk10 = *arg5;
    *arg3 = 0x200;
    *arg0 = arg9->unk30;
    *arg1 = arg9->unk34;
    *arg2 = arg9->unk38;
    *arg6 = func_8002FC20((arg9->unk8 * arg9->unk8) + (arg9->unk0 * arg9->unk0 + arg9->unk4 * arg9->unk4));
    *arg7 = func_8002FC20((arg9->unk18 * arg9->unk18) + (arg9->unk10 * arg9->unk10 + arg9->unk14 * arg9->unk14));
    *arg8 = func_8002FC20((arg9->unk28 * arg9->unk28) + (arg9->unk20 * arg9->unk20 + arg9->unk24 * arg9->unk24));
    if (*arg6 != 0.0f) {
        arg9->unk0 = arg9->unk0 / *arg6;
        arg9->unk4 = arg9->unk4 / *arg6;
        arg9->unk8 = arg9->unk8 / *arg6;
    }
    if (*arg7 != 0.0f) {
        arg9->unk10 = arg9->unk10 / *arg7;
        arg9->unk14 = arg9->unk14 / *arg7;
        arg9->unk18 = arg9->unk18 / *arg7;
    }
    if (*arg8 != 0.0f) {
        arg9->unk20 = arg9->unk20 / *arg8;
        arg9->unk24 = arg9->unk24 / *arg8;
        arg9->unk28 = arg9->unk28 / *arg8;
    }
    func_801D4390(arg9, &loc.unk8, &loc.unk4, &loc.unk0);
    *arg3 = (u16) (s32) ((loc.unk8 * 2048.0f) / 90.0f);
    *arg4 = (u16) (s32) ((loc.unk4 * 2048.0f) / 90.0f);
    *arg5 = (u16) (s32) ((loc.unk0 * 2048.0f) / 90.0f);
}

void func_801D4388(void) {
}

#undef func_801D4390
#define func_801D44A4 func_801D44A4__func_801D4390
f32 func_801D44A4(f32 arg0, f32 arg1);

struct func_801D4390_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    u8 pad1C[0xC];
    f32 unk28;
};

void func_801D4390(struct func_801D4390_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sp24;
    f32 sp20;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;

    temp_fv0 = arg0->unk4;
    temp_fv1 = arg0->unk0;
    sp24 = func_801D44A4(-arg0->unk8, func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)));
    sp20 = func_801D44A4(arg0->unk18, arg0->unk28);
    temp_fv0_2 = func_801D44A4(arg0->unk4, arg0->unk0);
    *arg1 = (sp20 * 180.0f) / 3.1415927f;
    *arg2 = (sp24 * 180.0f) / 3.1415927f;
    *arg3 = (temp_fv0_2 * 180.0f) / 3.1415927f;
}
#undef func_801D44A4
#define func_801D4390 func_801D4390__merge_frozen

void func_801D4454(void) {
}

void func_801D445C(void) {
}

void func_801D4464(void) {
}

void func_801D446C(void) {
}

void func_801D4474(void) {
}

void func_801D447C(void) {
}

void func_801D4484(void) {
}

void func_801D448C(void) {
}

void func_801D4494(void) {
}

void func_801D449C(void) {
}


extern f32 D_801DB428[];

f32 func_801D44A4(f32 arg0, f32 arg1)
{
  f32 *p;
  s32 i;
  f32 a;
  f32 b;
  if (arg1 == 0.0f)
  {
    if (arg0 < 0.0f)
    {
      return 4.71238899f;
    }
    if (arg0 > 0.0f)
    {
      return 1.57079637f;
    }
    i = 0;
  }
  if (arg0 == 0.0f)
  {
    if (arg1 < 0.0f)
    {
      return 3.14159274f;
    }
    if (arg1 > 0.0f)
    {
      return 0.0f;
    }
  }
  p = D_801DB428;
  i = 0;
  if (arg0 == 0.0f)
  {
    return 0.0f;
  }
  a = (arg1 < 0) ? (-arg1) : (arg1);
  b = (arg0 < 0) ? (-arg0) : (arg0);
  do
  {
    if ((b / a) <= (*p))
    {
      break;
    }
    i++;
    p++;
  }
  while (i < 0x5A);
  if (i == 0x5A)
  {
    i = 0x59;
  }
  if ((arg1 > 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) i) * 3.14159274f) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) (0xB4 - i)) * 3.14159274f) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (i + 0xB4)) * 3.14159274f) / 180.0f;
  }
  if ((arg1 > 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (0x168 - i)) * 3.14159274f) / 180.0f;
  }
  return 0.0f;
}


#undef func_801D4390
