#include "context.h"

struct func_8002487C_Struct {
    u8 pad0[0x3A];
    u16 unk3A;
    u8 pad1[0x44 - 0x3C];
    s16 unk44;
    u8 unk46;
    u8 unk47;
};

void func_8002487C(void)
{
  s32 new_var;
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk47 = D_800CBDA0[0];
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk46 = (D_800CBDA0 += 1)[0];
  D_800CBDA0 += 1;
  new_var = (s32) (((((struct func_8002487C_Struct *) D_800CBDA4)->unk46 << 8) & 0xFFFF) - ((struct func_8002487C_Struct *) D_800CBDA4)->unk3A);
  ((struct func_8002487C_Struct *) D_800CBDA4)->unk44 = (s16) (new_var / ((s32) ((struct func_8002487C_Struct *) D_800CBDA4)->unk47));
}
