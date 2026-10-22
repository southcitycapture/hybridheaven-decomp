#include "context.h"
void func_8037B530(struct func_8037EB58_Struct *arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_801BCC21;

struct func_8037B23C_StructC {
    u8 pad[9];
    u8 unk9;
    u8 unkA;
    u8 unkB;
    u8 unkC;
};
struct func_8037B23C_StructB {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_8037B23C_StructC *unk30;
};

void func_8037B23C(struct func_8037AED8_Obj *arg0, s32 arg1)
{
  u8 *tab;
  f32 f;
  f32 g;
  if (arg0->unkA8 == 0)
  {
    tab = D_801BC03C;
 do { } while (0);
  }
  else
  {
    tab = D_801BC3D8;
  }
  if (D_801BCC21 >= 6)
  {
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk22 = 0;
    return;
  }
  ((struct func_8037B23C_StructB *) D_8008DA88)->unk22 = 1;
  if ((*((s16 *) (tab + 6))) < 0x1E)
  {
    if (func_8001EAD0((arg0->unkB0 << 7) + 0x800) < 0.0f)
    {
      f = -func_8001EAD0((arg0->unkB0 << 7) + 0x800);
    }
    else
    {
      f = func_8001EAD0((arg0->unkB0 << 7) + 0x800);
    }
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unk9 = (u32) (f * 255.0f);
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkA = (u32) (f * 255.0f);
    if (func_8001EB64((arg0->unkB0 << 7) + 0x1000) < 0.0f)
    {
      g = -func_8001EB64((arg0->unkB0 << 7) + 0x1000);
    }
    else
    {
      g = func_8001EB64((arg0->unkB0 << 7) + 0x1000);
    }
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkC = (u32) (g * 255.0f);
    ((struct func_8037B23C_StructB *) D_8008DA88)->unk30->unkB = 0xFF;
    arg0->unkB0 = arg0->unkB0 + 1;
    return;
  }
  if ((*((s16 *) (tab + 6))) == 0x1E)
  {
    arg0->unkB0 = 0x14;
    func_800058DC(arg0, func_8037B530);
  }
}
