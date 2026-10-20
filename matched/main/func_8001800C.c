#include "context.h"
extern u8 *D_8008EE8C;
extern u8 D_8008EE94;
extern u8 D_8008EE95;
extern u8 D_8008EE96;
extern u16 D_8008EE9A;
void func_80018E9C(u16 arg0);
typedef struct func_80019038_Struct {
    u8 b[8];
} func_80019038_Struct;
void func_80019038(void);
extern void func_80018C9C(u8);

typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;

typedef struct func_8001800C_Struct5 {
    u8 b[5];
} func_8001800C_Struct5;

typedef struct func_8001800C_StructA {
    u8 b[10];
} func_8001800C_StructA;

extern func_8001800C_Struct5 D_80044184;
extern func_8001800C_StructA D_8004418C;
extern func_80019038_Struct D_80044198;
extern func_8001800C_Struct D_8008EC18[];
extern u16 D_8008EE9C;

#define e (&D_8008EC18[D_8008EBC2])

s32 func_8001800C(u32 arg0)
{
  s32 ret;
  s32 i;
  u16 pad;
  func_8001800C_Struct5 sp70;
  func_8001800C_StructA sp64;
  func_80019038_Struct sp5C;
  u16 cmd;
  s32 base;
  s32 n;
  sp70 = D_80044184;
  sp64 = D_8004418C;
  sp5C = D_80044198;
  for (ret = 0, i = 0; (i < 2) && (ret == 0); i++)
  {
    if (i == 0)
    {
      cmd = arg0 >> 16;
    }
    else
    {
      cmd = arg0 & 0xFFFF;
    }
    switch (cmd & 0xFF00)
    {
      case 0xF000:
        break;

      case 0xF100:
        if ((D_8008EE81 && D_8008EE81) && D_8008EE81)
      {
      }
        D_8008EE94 = cmd & 0xF;
        break;

      case 0xF200:
        if (cmd & 1)
      {
        D_8008EE95 = (u16) D_8008EBEE;
      }
      else
      {
        D_8008EE95 = 0;
      }
        break;

      case 0xF300:
        *((func_80019038_Struct *) D_8008EE8C) = sp5C;
        base = D_8008EBC2 * 4;
        n = (&D_8008EC18[D_8008EBC2])->unk4 - 1;
        if ((D_8008EE81 - base) < n)
      {
        D_8008EE81++;
      }
      else
      {
        D_8008EE81 = base;
      }
        if ((&D_8008EC18[D_8008EBC2])->unkA < n)
      {
        (&D_8008EC18[D_8008EBC2])->unk8 += ((u16) D_8008EBE2) + sp70.b[(u16) D_8008EBE6];
        (&D_8008EC18[D_8008EBC2])->unkA++;
      }
        func_80018C9C(D_8008EE81);
        break;

      case 0xF400:
        D_8008EE96 = cmd & 0xF;
        break;

      case 0xF800:
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        D_8008EE81 = D_8008EBC2 * 4;
        ret = 1;
        (&D_8008EC18[D_8008EBC2])->unkA = 0;
        (&D_8008EC18[D_8008EBC2])->unk6 = (&D_8008EC18[D_8008EBC2])->unk0;
        (&D_8008EC18[D_8008EBC2])->unk8 = (&D_8008EC18[D_8008EBC2])->unk2;
        break;

      case 0xF900:
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        ret = 2;
        break;

      case 0xFA00:
        ret = 3;
        func_80019038();
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        break;

      case 0xFB00:
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        ret = 4;
        break;

      case 0xFC00:
        D_8008EE81 = D_8008EBC2 * 4;
        ret = 5;
        (&D_8008EC18[D_8008EBC2])->unkC = *((u16 *) (&D_8008EBD4));
        (&D_8008EC18[D_8008EBC2])->unkE = *((u16 *) (&D_8008EBD6));
        (&D_8008EC18[D_8008EBC2])->unk0 = *((u16 *) (&D_8008EBDE));
        (&D_8008EC18[D_8008EBC2])->unk2 = *((u16 *) (&D_8008EBE0));
        (&D_8008EC18[D_8008EBC2])->unk4 = (u16) D_8008EBDC;
        (&D_8008EC18[D_8008EBC2])->unkA = 0;
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        (&D_8008EC18[D_8008EBC2])->unk6 = (&D_8008EC18[D_8008EBC2])->unk0;
        (&D_8008EC18[D_8008EBC2])->unk8 = (&D_8008EC18[D_8008EBC2])->unk2;
        break;

      case 0xFD00:
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        ret = 6;
        break;

      case 0xFE00:
        D_8008EE9A = 0;
        D_8008EE9C = 0;
        ret = 7;
        break;

      case 0xFF00:
        ret = 8;
        break;

      default:
        func_80018E9C(cmd);
        break;

    }

  }

  return ret;
}
