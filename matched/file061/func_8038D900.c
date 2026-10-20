#include "context.h"

struct func_8038D900_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038D900_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038D900(struct func_8038D900_StructA *arg0, struct func_8038D900_StructB *arg1)
{
  u8 temp_v0;
  temp_v0 = arg1->unk333;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == 2)
  {
    goto case2;
    done:
    return;

  }
  goto done;
  case0:
  arg0->unkA5 = 0;

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case1:
  func_8022A834();

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case2:
  if (arg1->unk6 >= 0x64)
  {
    func_8022A834();
    arg1->unk333 = (u8) (arg1->unk333 + 1);
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}
