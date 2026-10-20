#include "context.h"

typedef struct func_80148CB0_StructInner {
    u8 pad[4];
    u16 unk4;
} func_80148CB0_StructInner;

typedef struct func_80148CB0_Struct {
    u8 pad[0x91];
    s8 unk91;
    u8 unk92;
    s8 unk93;
    u8 pad94[0x10];
    func_80148CB0_StructInner *unkA4;
} func_80148CB0_Struct;

extern void func_80020744();
extern void func_801471DC(s32);
extern void func_801482BC(void *, s32);
extern void func_80148C60(void *, s32, u8);
extern s32 D_801BED24;
extern s32 D_801BED28;

s32 func_80148CB0(func_80148CB0_Struct *arg0, s32 arg1)
{
  unsigned char new_var;
  func_80148CB0_StructInner *new_var2;
  s32 result;
  u16 flags;
  new_var = 0;
  result = new_var;
  ;
  new_var2 = arg0->unkA4;
  if ((new_var2->unk4 & 0x10) || (new_var2->unk4 & 0x2000))
  {
    func_80020744(0x300);
    func_801471DC(D_801BED24);
    arg0->unk91++;
    arg0->unk91 %= arg0->unk93;
    func_801482BC(arg0, arg1);
    result = 1;
  }
  func_80148C60(arg0, D_801BED28, (u8) arg0->unk93);
  return result;
}
