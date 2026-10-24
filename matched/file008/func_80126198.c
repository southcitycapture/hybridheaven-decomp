#define func_80126198 func_80126198_ctxdecl
#include "context.h"
#undef func_80126198

typedef struct func_80126198_Entry {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad0[0x16];
    u16 unk1C;
    u16 unk1E;
} func_80126198_Entry;

typedef struct func_80126198_Args {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80126198_Args;

typedef struct func_80126198_Obj {
    u8 pad0[0x35];
    u8 unk35;
    u16 unk36;
    func_80126198_Entry *unk38;
} func_80126198_Obj;

typedef struct func_80126198_G {
    u8 pad0[2];
    u16 unk2;
    u8 pad1[0x3C - 4];
    void *unk3C;
    u8 pad2[0x104 - 0x40];
    u16 unk104;
} func_80126198_G;

extern u8 D_80037744[];
extern func_80126198_Args *B_801760C0[];
extern func_80126198_Obj *D_8012C4D0(void *arg0, func_80126198_Args arg1, s32 arg2);
extern void func_8012C778(s32);

void func_80126198(arg0, arg1)
func_80126198_Entry *arg0;
u16 arg1;
{
  u16 var_v0;
  func_80126198_Obj *temp_v0;
  var_v0 = arg0->unk0;
  if (var_v0 != 0)
  {
    do
    {
      if ((arg0->unk1E == 0) && (arg0->unk1C & arg1))
      {
        if (var_v0 == 0xFFFF)
        {
          if (D_80037744[0] != 0)
          {
          }
        }
        else
        {
          temp_v0 = D_8012C4D0(((func_80126198_G *) (&D_801BBBF0))->unk3C, *B_801760C0[var_v0 - 1], arg0->unk4);
          if (temp_v0 != 0)
          {
            temp_v0->unk36 = arg0->unk2;
            temp_v0->unk38 = arg0;
            temp_v0->unk35 = (s8) ((func_80126198_G *) (&D_801BBBF0))->unk104;
            ((func_80126198_G *) (&D_801BBBF0))->unk104 = ((func_80126198_G *) (&D_801BBBF0))->unk104 + 1;
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
      var_v0 = arg0[1].unk0;
      arg0++;
    }
    while (var_v0 != 0);
  }
}
