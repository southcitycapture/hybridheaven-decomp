#include "context.h"

struct func_80386D54_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    s32 unk9C;
};
struct func_80386D54_StructInner {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_80386D54_StructOuter {
    u8 pad0[0x30];
    struct func_80386D54_StructInner *unk30;
};

extern s32 func_8012C6B4(s32);
extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);

void func_80386D54(struct func_80386D54_StructArg0 *arg0, struct func_80386D54_StructOuter **arg1)
{
  s32 sp34;
  u8 temp_a0;
  extern void func_80005700();
  int new_var;
  sp34 = arg0->unk3C++;
  func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, (f32) func_8012C6B4(0x2000), 0.0f, 0.0f, 0x18);
  temp_a0 = (*arg1)->unk30->unk4B;
  ;
  if (((s32) temp_a0) < 0xF0)
  {
    (*arg1)->unk30->unk4B = (u8) ((*arg1)->unk30->unk4B + 4);
  }
  if (sp34 >= 0x3C)
  {
    func_80005700(arg0);
  }
}
