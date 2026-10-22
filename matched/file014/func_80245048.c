#include "context.h"

struct func_80245048_StructInfo {
    u8 pad[0x10];
    u32 unk10;
};
struct func_80245048_StructObj {
    u8 pad[0x38];
    struct func_80245048_StructInfo *unk38;
    u8 pad2[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x42];
    u16 unkA2;
};

void func_80245048(struct func_80245048_StructObj *arg0, s32 arg1)
{
  struct func_80246478_Child *sp2C;
  u16 new_var;
 sp2C = arg0->unk5C; if (func_8012CE9C(arg1, sp2C, *((struct func_802438E4_Table *) (&D_802484C4)), 10) == 0) {
    func_80010550(arg1, sp2C);
    new_var = (*arg0).unkA2--;
    if (new_var == 0)
    {
 do { } while (0);
      arg0->unkA2++;
      if ((arg0->unk38->unk10 >> 24) != 3)
      {
        if (func_8012A564(arg0, 0x43340000) != 0)
        {
          return;
        }
      }
      else
        if (func_8012A564(arg0, 0x42C80000) != 0)
      {
        return;
      }
      if (0, func_801268F4(0) != 0)
      {
        sp2C += 0;
        sp2C->unk78 = 1;
        func_801FBB30();
        func_800058DC(arg0, func_80245144);
      }
    }
  }
}
