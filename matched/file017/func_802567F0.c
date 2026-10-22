#include "context.h"

typedef struct func_802567F0_StructB {
    u8 pad[0x4A];
    u8 unk4A;
    u8 pad2[2];
    u8 unk4D;
} func_802567F0_StructB;
typedef struct func_802567F0_StructA {
    u8 pad[0x30];
    func_802567F0_StructB *unk30;
} func_802567F0_StructA;
typedef struct func_802567F0_Arg0 {
    u8 pad[0x90];
    u16 unk90;
} func_802567F0_Arg0;
extern f32 func_8001EAD0();

void func_802567F0(func_802567F0_Arg0 *arg0, func_802567F0_StructA **arg1)
{
  s16 a;
  u16 t;
  t = arg0->unk90;
  t += 0;
  arg0->unk90 = t + 1;
  a = (t * 0x1E) % 8192;
  (*arg1)->unk30->unk4A = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  (*arg1)->unk30->unk4D = (u32) ((func_8001EAD0(a) * 127.0f) + 128.0f);
  if (func_80133A24(0x138) != 0)
  {
    func_800058DC(arg0, func_802569D0);
  }
}
