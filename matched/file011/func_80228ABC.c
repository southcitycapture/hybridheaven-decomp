#include "context.h"
extern s32 func_80236BA4();
extern void func_80147148(s32, s32);
extern s32 func_80147598();
extern void func_80228320(u8 *, u8 *);
extern u8 D_801BEC60[];

typedef struct func_80228ABC_Struct { u8 pad0[0x24]; s32 u24; u8 pad[0x6C]; u16 u94; u16 u96; } func_80228ABC_Struct;

void func_80228ABC(func_80228ABC_Struct *arg0, u8 *arg1)
{
  u8 i;
  u8 *p;
  s32 off;
  u8 one;
  u8 *new_var;
  new_var = D_801BEC60;
  arg0->u94 = arg0->u94 + 1;
  arg0->u96 = arg0->u96 + 1;
  func_8022811C(arg0, (void *) arg1);
  if (func_80236BA4() == 0)
  {
    func_80147148(arg0->u24, 0);
    func_802269B0(0);
    return;
  }
  if (func_802269C0() == 0)
  {
    func_80228320(arg1, D_801BC03C);
    func_80228320(arg1, D_801BC3D8);
    p = new_var + 8;
 i = 0; one = 1; do { off = i << 2; (*((u8 **) ((arg1 + (p[0] << 2)) + off)))[0x22] = one; (*((u8 **) ((arg1 + (p[0xD] << 2)) + off)))[0x22] = func_802269CC(); (*((u8 **) ((arg1 + (p[0x17] << 2)) + off)))[0x22] = func_802269CC();
      if (func_80147598() != 0)
      {
        (*((u8 **) ((arg1 + (p[0xA] << 2)) + off)))[0x22] = one;
      }
      i++;
    }
    while (i < 3);
    func_802269B0(1);
  }
}
