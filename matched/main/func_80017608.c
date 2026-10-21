#include "context.h"

struct func_80017608_Struct {
    u8 pad[0x42FC];
    u16 unk42FC;
};

extern void func_800170C8(u16);
extern struct func_80017608_Struct D_800892B0;
extern u8 D_8008E7C0[];
extern u8 D_8008E9C0[];

s32 func_80017608(void)
{
  s32 temp_v0;
  u16 temp_s0;
  u16 temp_t6;
  temp_s0 = D_800892B0.unk42FC;
  if (temp_s0 != 0)
  {
    do
    {
      temp_t6 = temp_s0 - 1;
      D_800892B0.unk42FC = temp_t6;
      func_800170C8(*((u16 *) (D_8008E7C0 + ((temp_t6 & 0xFFFF) * 2))));
      temp_s0 = D_800892B0.unk42FC;
      temp_v0 = temp_s0 * 2;
      *((u16 *) (D_8008E9C0 + temp_v0)) = 0;
      *((u16 *) (D_8008E7C0 + temp_v0)) = 0;
      if (!(&D_800892B0))
      {
      }
    }
    while (temp_s0 != 0);
  }
  D_800892B0.unk42FC = 0;
  return 1;
}
