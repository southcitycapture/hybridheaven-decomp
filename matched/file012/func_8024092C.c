#include "common.h"
extern void func_800058DC(void *a0, void *a1);
typedef struct func_80240DA4_SB { u8 pad[0x4]; f32 f4; f32 f8; f32 fC; u8 pad2[2]; s16 s12; } func_80240DA4_SB;
typedef struct func_80240DA4_SH { u8 pad[0x2C]; func_80240DA4_SB *p2C; } func_80240DA4_SH;
typedef struct func_80240DA4_SC { u8 pad[0x24]; func_80240DA4_SH *p24; } func_80240DA4_SC;
void func_80240DA4(func_80240DA4_SC *arg0, s32 arg1, f32 arg2, s32 arg3);


typedef struct func_8024092C_StructA {
    u8 pad[0x36];
    u16 id;
} func_8024092C_StructA;
typedef struct func_8024092C_StructB {
    s32 value;
    s16 x, y;
    f32 f;
} func_8024092C_StructB;
typedef struct func_8024092C_StructC {
    s32 value;
    f32 f;
    s32 unused;
    s32 param;
} func_8024092C_StructC;
extern s32 func_8012C6B4(s32);
extern void func_8013A28C(s32, func_8024092C_StructB);
extern u32 func_8000E634(func_8024092C_StructB *);
extern void func_80240BD4(void);
extern u16 D_80249500;
extern func_8024092C_StructC D_80248C48[];

void func_8024092C(arg0, arg1)
func_8024092C_StructA *arg0;
s32 arg1;
{
  int new_var;
  func_8024092C_StructB local;
  func_8024092C_StructC *entry;
  unsigned short n;
  s32 id;
  n = func_8012C6B4(2);
  switch (arg0->id)
  {
    case 0x29:

    case 0x2B:
      D_80249500 = n;
      break;

    case 0x11B:

    case 0x11C:
      D_80249500 = n + 2;
      break;

    case 0x31:
      D_80249500 = n + 4;
      break;

    case 0x32:
      D_80249500 = n + 6;
      break;

    case 0x2E:
      new_var = n + 8;
      D_80249500 = new_var;
      break;

    case 0x148:
      D_80249500 = 10;
      break;

    case 0xF4:
      D_80249500 = 11;
      break;

    case 0xF5:
      D_80249500 = 12;
      break;

    case 0xF6:
      D_80249500 = 13;
      break;

    case 0x59:
      D_80249500 = 14;
      break;

    case 0xF0:

    case 0xF9:

    case 0xFA:
      D_80249500 = n + 15;
      break;

    case 0x55:

    case 0x5D:

    case 0xF1:

    case 0x11A:

    case 0x11E:

    case 0x149:
      D_80249500 = n + 17;
      break;

    case 0x57:

    case 0x58:

    case 0x4057:
      D_80249500 = n + 18;
      break;

    default:
      D_80249500 = n + 19;
      break;

  }

  entry = &D_80248C48[D_80249500];
  local.value = entry->value;
  local.f = entry->f;
  local.y = 0;
  local.x = 0;
  func_8013A28C(arg1, local);
  func_80240DA4((func_80240DA4_SC *) arg0, entry->param, func_8000E634(&local) / 10.0, 10);
  func_800058DC(arg0, func_80240BD4);
}
