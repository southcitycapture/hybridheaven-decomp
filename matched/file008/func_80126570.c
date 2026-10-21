#include "context.h"

typedef struct func_80126570_Entry {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad0[0x16];
    u16 unk1C;
    u16 unk1E;
} func_80126570_Entry;

typedef struct func_80126570_Args {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80126570_Args;

typedef struct func_80126570_Obj {
    u8 pad0[0x35];
    u8 unk35;
    u16 unk36;
    func_80126570_Entry *unk38;
} func_80126570_Obj;

typedef struct func_80126570_G {
    u8 pad0[2];
    u16 unk2;
    u8 pad1[0x3C - 4];
    void *unk3C;
    u8 pad2[0x104 - 0x40];
    u16 unk104;
} func_80126570_G;

extern u8 D_80037744[];
extern func_80126570_Args *D_801760C0[];
extern func_80126570_Obj *func_8012C4D0(void *arg0, func_80126570_Args arg1, s32 arg2);
extern void func_8012C778(s32);

void func_80126570(func_80126570_Entry *arg0, u16 arg1)
{
  u16 var_v0;
  func_80126570_Entry *var_s0;
  func_80126570_Obj *temp_v0;
  arg1 = arg1 & 0xFFFF;
  var_v0 = arg0->unk0;
  var_s0 = arg0;
  if (var_v0 != 0)
  {
    do
    {
      if ((var_s0->unk1E & arg1) && (var_s0->unk1C & ((func_80126570_G *) (&D_801BBBF0))->unk2))
      {
        if (var_v0 == 0xFFFF)
        {
          if (D_80037744[0] != 0)
          {
          }
        }
        else
        {
          temp_v0 = func_8012C4D0(((func_80126570_G *) (&D_801BBBF0))->unk3C, *D_801760C0[var_v0 - 1], var_s0->unk4);
          if (temp_v0 != 0)
          {
            temp_v0->unk36 = var_s0->unk2;
            temp_v0->unk38 = var_s0;
            temp_v0->unk35 = (s8) ((func_80126570_G *) (&D_801BBBF0))->unk104;
            ((func_80126570_G *) (&D_801BBBF0))->unk104 = ((func_80126570_G *) (&D_801BBBF0))->unk104 + 1;
          }
          else
          {
            func_8012C778(1);
          }
          if (D_80037744)
          {
          }
        }
      }
      var_v0 = var_s0[1].unk0;
      var_s0++;
    }
    while (var_v0 != 0);
  }
}
