#include "common.h"
extern void (*D_80216D10[])(void *, s32);


extern f64 D_802405A0;

struct func_80237834_Part {
    u8 pad[0xB];
    u8 unkB;
};

struct func_80237834_Node {
    u8 pad[0x30];
    struct func_80237834_Part *unk30;
};

struct func_80237834_Arg {
    u8 pad[0x24];
    struct func_80237834_Node *unk24;
};

void func_80237834(struct func_80237834_Arg *arg0, s32 arg1)
{
  s16 var_v0;

  var_v0 = arg0->unk24->unk30->unkB + 0x14;
  if (D_802405A0 < ((f64) var_v0))
  {
    var_v0 = 0x66;
  }
  arg0->unk24->unk30->unkB = (u8) var_v0;
}
