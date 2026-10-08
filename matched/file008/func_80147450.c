#include "common.h"

struct func_80147450_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x08];
    s32 unk30;
};

struct func_80147450_Obj {
    u8 pad0[0x10];
    struct func_80147450_Obj *unk10;
    u8 pad1[0x18];
    struct func_80147450_Sub *unk2C;
};

struct func_80147450_Flags {
    s32 pad0;
    s32 *unk4;
};

struct func_80147450_Top {
    u8 pad0[0x24];
    struct func_80147450_Obj *unk24;
    u8 pad1[0x34];
    struct func_80147450_Flags *unk5C;
};

s32 func_8000C3B0(void *);                          /* extern */
s32 func_80147370(void *, s32, s32, s32, s32);      /* extern */
extern s32 D_801BEC98[];

void func_80147450(struct func_80147450_Top *arg0)
{
  struct func_80147450_Obj *var_s0;
  struct func_80147450_Flags *temp_v0;
  s32 *temp_s2;
  u32 var_s1;
  var_s0 = arg0->unk24;
  var_s1 = 0;
  temp_v0 = arg0->unk5C;
  temp_s2 = temp_v0->unk4;
  if (var_s0 != 0)
  {
    do
    {
      if (temp_s2[var_s1] >= 0)
      {
        var_s0->unk2C->unk24 = D_801BEC98[var_s1];
        if (1 == (var_s1 ^ 0))
        {
          var_s0->unk2C->unk30 = func_8000C3B0(var_s0) | 0x40000000;
        }
        else
        {
          var_s0->unk2C->unk30 = func_8000C3B0(var_s0);
        }
      }
      var_s0 = var_s0->unk10;
      var_s1 = (var_s1 + 1) & 0xFF;
    }
    while (var_s0 != 0);
  }
  func_80147370(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
}
