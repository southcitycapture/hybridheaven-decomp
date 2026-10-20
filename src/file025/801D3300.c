#include "common.h"

extern f32 D_801DB3F4;
extern f32 D_801DB3F8;
extern f32 D_801DB3FC;
extern f32 D_801DB400;
extern f32 D_801DB428[];
extern f32 D_801DD544;
extern f32 D_801DD548;
extern f32 D_801DD54C;
extern f32 D_801DD550;
extern f32 D_801DD558;
extern f32 D_801DD55C;
extern f32 D_801DD560;
extern f32 D_801DD564;
extern f32 D_801DD568;
extern f32 D_801DD56C;
extern f32 D_801DD570;
extern f32 D_801E14C8[3];
extern s32 D_801DB374;
extern s32 D_801DB378;
extern s32 D_801DB37C;
extern s32 D_801DB380;
extern s32 D_801DB384;
extern s32 D_801DB388;
extern s32 D_801DB38C;
extern s32 D_801DB390;
extern s32 D_801E14A0;
extern s32 func_801C354C(s32);
extern u8 D_801D9360[];
extern u8 D_801D93B8[];
extern u8 D_801E14A8;
extern void func_80006214();
extern void func_801D33A4();
extern void func_801D4008(s32, s32);


extern void func_8013B570(s32 a0, s32 a1, s32 a2, s32 a3, void *a4);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D33A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D33EC.s")



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



s32 func_801D3708(void) {
    return D_801DB384 == 0;
}


struct func_801D3718_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D3718_Struct D_801E14B8;

s32 func_801D3718(s32 arg0, u16 arg1) {
    if (arg0 != D_801E14B8.unk0) {
        return 0;
    }
    return D_801E14B8.unk4 == arg1;
}



void func_801D3750(s32 arg0) {
    if (arg0 != 0) {
        func_801D4008(D_801E14A0, arg0);
    }
    D_801DB38C = arg0;
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D38B4.s")



void func_801D3FD8(s32 arg0) {
    func_80006214();
    D_801DB384 = func_801C354C(arg0) == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4008.s")

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
            D_801DB3FC = D_801DD544;
            D_801DB400 = D_801DD548;
        } else {
            D_801DB3FC = D_801DD54C;
            D_801DB400 = D_801DD550;
        }
    }
    func_80006214((s32)arg0);
    arg0->unk24->unk2C->unk8 = D_801DB3F8 + D_801DB3F4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D3300/func_801D4390.s")



f32 func_801D44A4(f32 arg0, f32 arg1)
{
  f32 *p;
  s32 i;
  f32 a;
  f32 b;
  f32 z;
  if (arg1 == 0.0f)
  {
    if (arg0 < 0.0f)
    {
      return D_801DD558;
    }
    if (arg0 > 0.0f)
    {
      return D_801DD55C;
    }
    i = 0;
  }
  if (arg0 == 0.0f)
  {
    if (arg1 < 0.0f)
    {
      return D_801DD560;
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
    return (((f32) i) * D_801DD564) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) (0xB4 - i)) * D_801DD568) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (i + 0xB4)) * D_801DD56C) / 180.0f;
  }
  if ((arg1 > 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (0x168 - i)) * D_801DD570) / 180.0f;
  }
  return 0.0f;
}

