#include "context.h"
extern func_8024090C_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);

typedef struct func_8024180C_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x10A0 - 0x44];
    s32 unk10A0;
} func_8024180C_Struct;

extern void func_8001F74C(s32);
extern void func_80203830(s32, void *);
extern void func_8024187C(void);
extern u8 D_8024E67C[];

void func_8024180C(s32 arg0, s32 arg1)
{
  func_8024180C_Struct *p;
  s32 temp;
  func_80133A24(0x1F3);
  if (func_80133A24(0x1F3 & 0xFFFFFFFFu) != 0)
  {
    func_8001F74C(arg0);
    func_80203830(arg0, D_8024E67C);
    p = (func_8024180C_Struct *) (&D_801BBBF0);
    temp = p->unk40 & 0xFFFFFFFFFFFFFFFF;
    p->unk10A0 = temp;
    func_800058DC((void *) arg0, func_8024187C);
  }
}
