#include "context.h"

typedef struct func_801F5F5C_Inner {
    u8 pad0[0x14];
    s32 unk14;
} func_801F5F5C_Inner;

typedef struct func_801F5F5C_Struct {
    u8 pad0[0x38];
    func_801F5F5C_Inner *unk38;
    u8 pad1[0xAF - 0x3C];
    u8 unkAF;
} func_801F5F5C_Struct;

s32 func_801270C0(void);
void func_801F5574(void *, s32);
void func_801F55E0(s32);
void func_80020744(s32);
void func_801268CC(s32);

extern u8 D_801BCC21[];
extern s16 D_801BBD84;
extern s16 D_801BBF90[];

void func_801F5F5C(func_801F5F5C_Struct *arg0, s32 arg1)
{
  D_801BCC21[3] = arg0->unkAF;
  if (func_801270C0() != 0)
  {
    D_801BBD84 = 2;
    func_801F5574(arg0, 0);
    if (!(arg0->unk38->unk14 & 0xFFFF))
    {
      func_801F55E0(1);
    }
    else
    {
      func_801F55E0(0);
    }
    D_801BBF90[2] = arg0->unk38->unk14 & 0xFFFFu;
    func_80020744(7);
    func_801268CC((((u32) arg0->unk38->unk14) >> 16) & 0xFFFF);
  }
}
